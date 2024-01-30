@interface MTUICollectionCellAnalogClockView : MTUIAnalogClockView

+ (double)minuteHandWidth;
+ (long long)style;
+ (id)makeClockFaceForDaytime:(BOOL)a0;
+ (double)hourHandLength;
+ (double)secondHandOverhangLength;
+ (double)faceRadius;
+ (double)overHourHandDotSize;
+ (double)secondHandWidth;
+ (double)hourHandWidth;
+ (double)overSecondHandDotSize;
+ (double)secondHandMainLength;
+ (BOOL)shouldCacheImageOnDiskForType:(int)a0 dayTime:(BOOL)a1;
+ (struct CGPoint { double x0; double x1; })handRotationalCenterForHand:(long long)a0;
+ (double)minuteHandLength;

- (double)updateInterval;
- (double)coarseUpdateInterval;

@end
