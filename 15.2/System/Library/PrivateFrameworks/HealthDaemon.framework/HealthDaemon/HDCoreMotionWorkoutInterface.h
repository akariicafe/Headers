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
- (void).cxx_destruct;
- (id)init;
- (void)unitTest_setCMWorkoutManager:(id)a0;
- (void)averageMETsForWorkoutSessionUUID:(id)a0 completion:(id /* block */)a1;
- (id)takeCMWorkoutAssertionForOwnerIdentifier:(id)a0 sessionUUID:(id)a1 workoutConfiguration:(id)a2;

@end
