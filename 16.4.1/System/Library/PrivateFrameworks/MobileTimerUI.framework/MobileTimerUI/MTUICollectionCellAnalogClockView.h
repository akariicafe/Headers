@interface MTUICollectionCellAnalogClockView : MTUIAnalogClockView

+ (double)minuteHandWidth;
+ (double)secondHandMainLength;
+ (BOOL)shouldCacheImageOnDiskForType:(int)a0 dayTime:(BOOL)a1;
+ (double)hourHandLength;
+ (double)secondHandWidth;
+ (double)overHourHandDotSize;
+ (double)hourHandWidth;
+ (double)overSecondHandDotSize;
+ (double)secondHandOverhangLength;
+ (double)faceRadius;
+ (id)makeClockFaceForDaytime:(BOOL)a0;
+ (long long)style;
+ (double)minuteHandLength;
+ (struct CGPoint { double x0; double x1; })handRotationalCenterForHand:(long long)a0;

- (double)coarseUpdateInterval;
- (double)updateInterval;

@end
