@class NSMutableSet, NSMutableDictionary;

@interface STMetrics : NSObject {
    NSMutableSet *memoryUsageMetricsTypes;
    NSMutableDictionary *performanceMetricsEvents;
}

+ (id)sharedMetricsLogger;

- (id)init;
- (void).cxx_destruct;
- (void)observeAndLogClientFlowPerformanceMetrics;
- (void)observeAndLogClientFlowMemoryUsageMetrics;

@end
