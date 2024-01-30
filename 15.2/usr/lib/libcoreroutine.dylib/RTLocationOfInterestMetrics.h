@class RTDefaultsManager, RTDistanceCalculator, RTLearnedLocationStore;

@interface RTLocationOfInterestMetrics : NSObject {
    RTDefaultsManager *_defaultsManager;
    RTDistanceCalculator *_distanceCalculator;
    RTLearnedLocationStore *_learnedLocationStore;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 learnedLocationStore:(id)a2;
- (id)_metricForLocationOfInterest:(id)a0;
- (void)_submitMetric:(id)a0;
- (id)_shuffledIndicesForArraySize:(unsigned long long)a0;
- (BOOL)collectMetricsWithError:(id *)a0;

@end
