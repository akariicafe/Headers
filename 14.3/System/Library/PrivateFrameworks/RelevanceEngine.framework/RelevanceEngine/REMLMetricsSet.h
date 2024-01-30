@class NSMutableDictionary, NSMutableSet;

@interface REMLMetricsSet : NSObject <REMLMetricsProvider> {
    NSMutableDictionary *metricsIndex;
    NSMutableSet *metricsSet;
}

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)addMetrics:(id)a0;
- (id)name;
- (void)updateMetricsFromFeatures:(id)a0 prediction:(id)a1 truth:(id)a2;
- (id)getMetricsByName:(id)a0;

@end
