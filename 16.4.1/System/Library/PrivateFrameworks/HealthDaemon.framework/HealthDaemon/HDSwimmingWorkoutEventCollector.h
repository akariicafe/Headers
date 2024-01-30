@class NSObject, CMSwimTracker, CMSwimData, NSDate;
@protocol OS_dispatch_queue;

@interface HDSwimmingWorkoutEventCollector : HDWorkoutEventCollector {
    CMSwimTracker *_swimTracker;
    CMSwimData *_referenceSwimData;
    CMSwimData *_lastSwimData;
    NSDate *_currentSegmentStartDate;
    NSDate *_prevSegmentEndDate;
    NSObject<OS_dispatch_queue> *_workoutEventQueue;
    BOOL _shouldUpdateSegmentStartDate;
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
