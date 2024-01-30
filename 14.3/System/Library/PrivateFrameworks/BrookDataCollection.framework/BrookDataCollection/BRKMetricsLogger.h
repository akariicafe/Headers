@interface BRKMetricsLogger : NSObject

+ (id)sharedInstance;

- (id)_init;
- (void)_enumerateMetrics:(id)a0 distributionBlock:(id /* block */)a1 scalarBlock:(id /* block */)a2;
- (id)_aggdKeyForMetricKey:(id)a0;
- (void)logMetrics:(id)a0;
- (void)appendMetrics:(id)a0;
- (void)clearMetrics:(id)a0;

@end
