@class CMSkiData, NSObject, CMSkiTracker;
@protocol OS_dispatch_queue;

@interface HDSkiingWorkoutEventCollector : HDWorkoutEventCollector {
    CMSkiTracker *_skiTracker;
    CMSkiData *_referenceSkiData;
    NSObject<OS_dispatch_queue> *_workoutEventQueue;
}

+ (BOOL)isAvailableInCurrentHardware;

- (void).cxx_destruct;
- (void)stop;
- (id)initWithProfile:(id)a0 delegate:(id)a1;
- (void)startWithSessionId:(id)a0;
- (void)requestPendingEventsThroughDate:(id)a0 completion:(id /* block */)a1;
- (BOOL)supportsWorkoutActivityType:(unsigned long long)a0;
- (void)unitTest_setCMWorkoutManager:(id)a0;
- (void)_queue_startCollectionWithSessionId:(id)a0;
- (void)_queue_stopCollection;
- (void)_queue_errorOccurred:(id)a0;
- (void)_queue_querySkiDataWithCompletion:(id /* block */)a0;
- (void)_queue_processSkiData:(id)a0 error:(id)a1;
- (void)_queue_generateSegmentEventForSkiData:(id)a0 referenceData:(id)a1;
- (id)_queue_generateDownhillSnowSportsDistanceSampleForSkiData:(id)a0 referenceData:(id)a1;
- (void)_queue_saveDownhillSnowSportsDistanceSamples:(id)a0;
- (double)_percentSlopeForAngle:(double)a0;

@end
