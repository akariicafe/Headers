@class CMWorkoutManager, CMWorkout, NSObject;
@protocol OS_dispatch_queue, CMWorkoutManagerDelegate;

@interface CMWorkoutManagerInternal : NSObject {
    void *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    id<CMWorkoutManagerDelegate> fDelegate;
    CMWorkoutManager *fSender;
    CMWorkout *fWorkout;
    BOOL fResumeWorkoutOnInterrupt;
}

- (id)init;
- (void)_teardown;
- (void)dealloc;
- (void)_startWorkout:(id)a0;
- (void)_handleDaemonEvent:(id)a0;
- (void)_unregisterForWorkoutEvents;
- (void)_handleDaemonResponse:(id)a0;
- (void)_stopWorkout:(id)a0;
- (void)_setSuggestedStopTimeout:(double)a0;
- (BOOL)_shouldAllowMotionCalibrationPromptsForWorkoutType:(long long)a0;
- (void)_userDismissedWorkoutAlert;
- (void)_triggerWorkoutLocationUpdateForTesting:(long long)a0;
- (void)_registerForWorkoutEvents;
- (void)_getPromptsNeededForWorkoutType:(long long)a0 handler:(id /* block */)a1;

@end
