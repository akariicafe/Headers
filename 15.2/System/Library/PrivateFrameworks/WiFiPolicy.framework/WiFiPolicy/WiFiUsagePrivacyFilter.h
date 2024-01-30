@interface WiFiUsagePrivacyFilter : NSObject

+ (id)timePercentage:(double)a0 overTotalDuration:(double)a1;
+ (BOOL)canPerformActionWithSampleRate:(unsigned long long)a0;
+ (id)reformatMACAddress:(id)a0;
+ (id)numberWithByteCount:(unsigned long long)a0;
+ (id)oui:(id)a0;
+ (id)toHEXString:(char *)a0 length:(unsigned long long)a1;
+ (id)numberWithDuration:(double)a0;
+ (id)localTimestamp:(id)a0;
+ (id)twoSigFig:(unsigned long long)a0;
+ (id)getHumanSeconds:(id)a0;
+ (id)numberWithFrameCount:(unsigned long long)a0;
+ (id)getBinTimeInterval:(double)a0 As:(unsigned long long)a1;
+ (id)numberWithInstances:(unsigned long long)a0;
+ (id)getBinFor:(unsigned long long)a0 In:(id)a1 WithLowestEdge:(id)a2 As:(unsigned long long)a3;
+ (id)sanitizedOUI:(id)a0;

@end
