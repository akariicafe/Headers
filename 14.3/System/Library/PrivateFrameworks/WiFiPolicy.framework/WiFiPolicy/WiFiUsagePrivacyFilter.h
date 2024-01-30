@interface WiFiUsagePrivacyFilter : NSObject

+ (id)numberWithDuration:(double)a0;
+ (id)timePercentage:(double)a0 overTotalDuration:(double)a1;
+ (id)localTimestamp:(id)a0;
+ (id)numberWithByteCount:(unsigned long long)a0;
+ (BOOL)canPerformActionWithSampleRate:(unsigned long long)a0;
+ (id)numberWithFrameCount:(unsigned long long)a0;
+ (id)numberWithInstances:(unsigned long long)a0;
+ (id)twoSigFig:(unsigned long long)a0;

@end
