@class NSObject, CMSwimTracker, CMSwimData, NSDate;
@protocol OS_dispatch_queue;

@interface HDSwimmingWorkoutEventCollector : HDWorkoutEventCollector {
    CMSwimTracker *_swimTracker;
    CMSwimData *_referenceSwimData;
    CMSwimData *_lastSwimData;
    NSDate *_currentSegmentStartDate;
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
- (void)_queue_addSegmentEventWithFallbackEndDate:(id)a0;
- (void)_queue_querySwimDataWithCompletion:(id /* block */)a0;
- (void)_queue_errorOccurred:(id)a0;
- (void)_queue_processSwimData:(id)a0 error:(id)a1;
- (void)_queue_addLapEventForSwimData:(id)a0;
- (void)_queue_addSegmentEventForSwimData:(id)a0;

@end
