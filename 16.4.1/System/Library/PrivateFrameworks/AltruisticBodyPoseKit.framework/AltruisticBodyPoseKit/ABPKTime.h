@interface ABPKTime : NSObject

+ (double)CMTimeToSeconds:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
+ (double)machAbsoluteTimeToSeconds:(unsigned long long)a0;
+ (unsigned long long)nowAsMachAbsoluteTime;
+ (double)nowInSeconds;

@end
