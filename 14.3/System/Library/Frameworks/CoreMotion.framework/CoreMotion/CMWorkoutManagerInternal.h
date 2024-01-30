@class CMWorkoutManager, CMWorkout, NSObject;
@protocol OS_dispatch_queue, CMWorkoutManagerDelegate;

@interface CMWorkoutManagerInternal : NSObject {
    struct CLConnectionClient { id x0; struct CLCallbackDropManager { void /* function */ **x0; struct shared_ptr<int> { int *x0; struct __shared_weak_count *x1; } x1; } x1; struct shared_ptr<CLConnectionClientInternal> { struct CLConnectionClientInternal *x0; struct __shared_weak_count *x1; } x2; struct CLConnectionClientNotificationContext *x3; } *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    id<CMWorkoutManagerDelegate> fDelegate;
    CMWorkoutManager *fSender;
    CMWorkout *fWorkout;
    BOOL fResumeWorkoutOnInterrupt;
}

- (void)_teardown;
- (id)init;
- (void)dealloc;
- (void)_startWorkout:(id)a0;
- (void)_stopWorkout:(id)a0;
- (void)_handleDaemonEvent:(id)a0;
- (void)_unregisterForWorkoutEvents;
- (void)_handleDaemonResponse:(id)a0;
- (void)_setSuggestedStopTimeout:(double)a0;
- (BOOL)_shouldAllowMotionCalibrationPromptsForWorkoutType:(long long)a0;
- (void)_userDismissedWorkoutAlert;
- (void)_registerForWorkoutEvents;
- (void)_triggerWorkoutLocationUpdateForTesting:(long long)a0;
- (void)_getPromptsNeededForWorkoutType:(long long)a0 handler:(id /* block */)a1;

@end
