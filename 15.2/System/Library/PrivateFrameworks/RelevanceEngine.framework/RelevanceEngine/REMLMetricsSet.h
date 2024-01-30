@class NSMutableDictionary, NSMutableSet;

@interface REMLMetricsSet : NSObject <REMLMetricsProvider> {
    NSMutableDictionary *metricsIndex;
    NSMutableSet *metricsSet;
}

- (void).cxx_destruct;
- (BOOL)addMetrics:(id)a0;
- (id)init;
- (id)name;
- (void)reset;
- (void)updateMetricsFromFeatures:(id)a0 prediction:(id)a1 truth:(id)a2;
- (id)getMetricsByName:(id)a0;

@end
