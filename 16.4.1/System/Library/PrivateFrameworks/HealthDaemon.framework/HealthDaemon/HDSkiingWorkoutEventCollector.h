@class CMSkiData, NSObject, CMSkiTracker;
@protocol OS_dispatch_queue;

@interface HDSkiingWorkoutEventCollector : HDWorkoutEventCollector {
    CMSkiTracker *_skiTracker;
    CMSkiData *_referenceSkiData;
    NSObject<OS_dispatch_queue> *_workoutEventQueue;
}

+ (BOOL)isAvailableInCurrentHardware;
+ (BOOL)supportsWorkoutActivityType:(unsigned long long)a0;

- (void)stop;
- (void)unitTest_setCMWorkoutManager:(id)a0;
- (void).cxx_destruct;
- (void)fakeActivityDetection:(id)a0 workoutActivity:(id)a1;
- (id)initWithProfile:(id)a0 delegate:(id)a1;
- (void)requestPendingEventsThroughDate:(id)a0 completion:(id /* block */)a1;
- (void)startWithSessionId:(id)a0;

@end
