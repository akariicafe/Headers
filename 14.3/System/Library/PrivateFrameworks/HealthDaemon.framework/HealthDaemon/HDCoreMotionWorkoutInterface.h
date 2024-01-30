@class NSString, HDAssertionManager, CMWorkout, CMWorkoutManager, NSObject, CMWorkoutMets;
@protocol OS_dispatch_queue;

@interface HDCoreMotionWorkoutInterface : NSObject <HDAssertionObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    CMWorkoutManager *_cmWorkoutManager;
    CMWorkoutMets *_cmWorkoutMets;
    HDAssertionManager *_assertionManager;
    CMWorkout *_currentCMWorkout;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)assertionManager:(id)a0 assertionInvalidated:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)unitTest_setCMWorkoutManager:(id)a0;
- (void)averageMETsForWorkoutSessionUUID:(id)a0 completion:(id /* block */)a1;
- (id)takeCMWorkoutAssertionForOwnerIdentifier:(id)a0 sessionUUID:(id)a1 workoutConfiguration:(id)a2;
- (void)_queue_startWorkoutWithAssertion:(id)a0;
- (id)_queue_coreMotionWorkoutMets;
- (unsigned long long)_queue_countActiveAssertionsForSessionUUID:(id)a0;
- (void)_queue_stopWorkoutWithAssertion:(id)a0;
- (id)_queue_cmWorkoutForConfiguration:(id)a0 sessionUUID:(id)a1;
- (id)_queue_coreMotionWorkoutManager;

@end
