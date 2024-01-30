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
- (id)_associatedLoiFromVisit:(id)a0;
- (id)_closestLoi:(id)a0 location:(id)a1;
- (id)_nearbyLoisFromVisit:(id)a0;
- (id)batchedMetricsForConfiguration:(unsigned long long)a0 dateInterval:(id)a1 error:(id *)a2;
- (BOOL)collectBatchedMetricsForDateInterval:(id)a0 error:(id *)a1;
- (BOOL)collectMetricsForDateInterval:(id)a0 configurations:(id)a1 error:(id *)a2;
- (BOOL)collectRealtimeMetricsForDateInterval:(id)a0 error:(id *)a1;
- (id)initWithDistanceCalculator:(id)a0 learnedLocationStore:(id)a1 locationStore:(id)a2 motionActivityManager:(id)a3 visitManager:(id)a4;
- (id)locationStoreMetricsForInterval:(id)a0;
- (id)metricForPipelineConfiguration:(unsigned long long)a0 previousVisit:(id)a1 visit:(id)a2;
- (id)metricsForConfiguration:(unsigned long long)a0 dateInterval:(id)a1 error:(id *)a2;
- (id)motionMetricsForDateInterval:(id)a0;
- (id)predominantMotionMetricsForTransitionForVisit:(id)a0 previousVisit:(id)a1;
- (id)predominantMotionMetricsForVisit:(id)a0 isPreviousVisit:(BOOL)a1;
- (id)realtimeMetricsForConfiguration:(unsigned long long)a0 dateInterval:(id)a1 error:(id *)a2;

@end
