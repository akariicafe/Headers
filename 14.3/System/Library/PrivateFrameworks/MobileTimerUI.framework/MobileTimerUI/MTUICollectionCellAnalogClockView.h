@interface MTUICollectionCellAnalogClockView : MTUIAnalogClockView

+ (double)minuteHandWidth;
+ (BOOL)shouldCacheImageOnDiskForType:(int)a0 dayTime:(BOOL)a1;
+ (double)overHourHandDotSize;
+ (long long)style;
+ (double)secondHandWidth;
+ (double)secondHandMainLength;
+ (id)makeClockFaceForDaytime:(BOOL)a0;
+ (double)overSecondHandDotSize;
+ (double)hourHandWidth;
+ (double)hourHandLength;
+ (double)secondHandOverhangLength;
+ (double)faceRadius;
+ (struct CGPoint { double x0; double x1; })handRotationalCenterForHand:(long long)a0;
+ (double)minuteHandLength;

- (double)updateInterval;
- (double)coarseUpdateInterval;

@end
