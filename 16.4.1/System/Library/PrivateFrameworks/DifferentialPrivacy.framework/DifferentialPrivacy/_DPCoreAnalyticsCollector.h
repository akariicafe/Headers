@interface _DPCoreAnalyticsCollector : NSObject <_DPMetricsCollector>

+ (id)sharedInstance;

- (void)reportMetricsForEvent:(id)a0 withMetrics:(id)a1;

@end
