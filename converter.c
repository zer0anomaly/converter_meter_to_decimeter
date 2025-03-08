#include <stdio.h>
int main() {
	int meter, decimeter;
	int lower, upper, step;

lower = 0;
upper = 100;
step = 1;

meter = lower;
while (meter <= upper) {
	decimeter = meter * 10;
	printf("%d\t%d\n", meter, decimeter );
	meter = meter + step;
}
}