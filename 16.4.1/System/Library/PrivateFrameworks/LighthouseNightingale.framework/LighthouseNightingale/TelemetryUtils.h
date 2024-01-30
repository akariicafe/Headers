@interface TelemetryUtils : NSObject

+ (void)sendPerCycleModelMetrics:(id)a0;
+ (void)sendReachUpdateWithReachLocationString:(id)a0 andError:(id)a1;
+ (void)setTrialInfoWithTriClient:(id)a0 andNamespaceName:(id)a1;

@end
