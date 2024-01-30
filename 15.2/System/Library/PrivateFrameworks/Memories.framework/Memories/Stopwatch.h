@interface Stopwatch : NSObject

+ (void)start;
+ (double)elapsedTime;
+ (void)stop;
+ (void)stopWithMessage:(id)a0 precision:(int)a1;
+ (void)stopWithMessage:(id)a0 precision:(int)a1 elapsedtimeBiggerThan:(double)a2;

@end
