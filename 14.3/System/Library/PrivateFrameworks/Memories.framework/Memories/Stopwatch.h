@interface Stopwatch : NSObject

+ (double)elapsedTime;
+ (void)stop;
+ (void)start;
+ (void)stopWithMessage:(id)a0 precision:(int)a1;
+ (void)stopWithMessage:(id)a0 precision:(int)a1 elapsedtimeBiggerThan:(double)a2;

@end
