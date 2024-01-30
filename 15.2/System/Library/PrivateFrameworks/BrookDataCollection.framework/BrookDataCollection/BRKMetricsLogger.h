@interface BRKMetricsLogger : NSObject

+ (id)sharedInstance;

- (id)_init;
- (id)_coreAnalyticsKeyForMetricKey:(id)a0;
- (void)logEventName:(id)a0 eventPayLoad:(id)a1;

@end
