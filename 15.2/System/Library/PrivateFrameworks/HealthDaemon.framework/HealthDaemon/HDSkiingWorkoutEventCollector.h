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

@end
