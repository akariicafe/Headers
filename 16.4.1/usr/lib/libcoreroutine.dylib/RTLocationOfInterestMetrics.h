@class RTLocationStore, RTDefaultsManager, RTDistanceCalculator, RTLearnedLocationStore;

@interface RTLocationOfInterestMetrics : NSObject {
    RTDefaultsManager *_defaultsManager;
    RTDistanceCalculator *_distanceCalculator;
    RTLearnedLocationStore *_learnedLocationStore;
    RTLocationStore *_locationStore;
}

- (id)init;
- (void).cxx_destruct;
- (id)_countNearbyLocationsOfInterestForLocationOfInterest:(id)a0 outError:(id *)a1;
- (id)_metricForLocationOfInterest:(id)a0;
- (id)_shuffledIndicesForArraySize:(unsigned long long)a0;
- (int)_signalEnvironmentTypeForLocationOfInterest:(id)a0;
- (void)_submitMetric:(id)a0;
- (BOOL)collectMetricsWithError:(id *)a0;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 learnedLocationStore:(id)a2 locationStore:(id)a3;

@end
