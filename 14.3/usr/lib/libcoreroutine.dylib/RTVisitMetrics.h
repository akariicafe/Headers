@class RTLocationStore, RTDistanceCalculator, RTLearnedLocationStore, RTVisitManager, RTMotionActivityManager;

@interface RTVisitMetrics : NSObject {
    RTDistanceCalculator *_distanceCalculator;
    RTLearnedLocationStore *_learnedLocationStore;
    RTLocationStore *_locationStore;
    RTMotionActivityManager *_motionActivityManager;
    RTVisitManager *_visitManager;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithDistanceCalculator:(id)a0 learnedLocationStore:(id)a1 locationStore:(id)a2 motionActivityManager:(id)a3 visitManager:(id)a4;
- (id)locationStoreMetricsForInterval:(id)a0;
- (id)motionMetricsForDateInterval:(id)a0;
- (id)_nearbyLoisFromVisit:(id)a0;
- (id)_closestLoi:(id)a0 location:(id)a1;
- (id)_associatedLoiFromVisit:(id)a0;
- (id)realtimeMetricsForConfiguration:(unsigned long long)a0 dateInterval:(id)a1 error:(id *)a2;
- (id)batchedMetricsForConfiguration:(unsigned long long)a0 dateInterval:(id)a1 error:(id *)a2;
- (id)metricForPipelineConfiguration:(unsigned long long)a0 previousVisit:(id)a1 visit:(id)a2;
- (id)metricsForConfiguration:(unsigned long long)a0 dateInterval:(id)a1 error:(id *)a2;
- (BOOL)collectMetricsForDateInterval:(id)a0 error:(id *)a1;

@end
