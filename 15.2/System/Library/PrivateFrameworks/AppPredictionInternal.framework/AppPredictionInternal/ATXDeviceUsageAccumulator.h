@class ATXModeDimensionSet, NSMutableDictionary;

@interface ATXDeviceUsageAccumulator : NSObject {
    NSMutableDictionary *_summaryMetrics;
    ATXModeDimensionSet *_lastDimensionSet;
}

- (void).cxx_destruct;
- (id)init;
- (void)logToCoreAnalytics;
- (id)_getSummaryMetricForDimensions:(id)a0;
- (void)handleModeDimensionSetChange:(id)a0 changeTime:(id)a1;
- (void)handleNextOnInterval:(id)a0 dimensionSet:(id)a1;
- (void)handleEndOfStream:(id)a0;

@end
