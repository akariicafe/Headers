@class PFCameraViewfinderSessionWatcher, NSString, PLXPCTransaction, PLDelayedActionTimer, NSObject;
@protocol OS_dispatch_queue;

@interface PLCameraCaptureTaskConstraintCoordinator : NSObject <PFCameraViewfinderSessionWatcherDelegate> {
    NSString *_name;
    NSString *_creationDateString;
    NSObject<OS_dispatch_queue> *_activationQueue;
    PLXPCTransaction *_transaction;
    BOOL _delayedDeactivationInProgress;
    PLDelayedActionTimer *_failsafeTimer;
    BOOL _failsafeTimerEnabled;
    PFCameraViewfinderSessionWatcher *_cameraWatcher;
    NSObject<OS_dispatch_queue> *_cameraWatcherQueue;
}

@property (readonly, nonatomic) long long role;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldUseFailsafeTimerForRole:(long long)a0;
+ (BOOL)_shouldWatchCameraViewfinderForRole:(long long)a0;
+ (id)taskConstraintStatus;

- (void)_invalidateTransactionAndStopConstrainingTasksWithDelayedDeactivation:(BOOL)a0;
- (void)_startWatchingCameraActivity;
- (void)updateConstraintsForCameraRollViewVisible:(BOOL)a0;
- (void)deactivateCameraSessionTaskConstraints;
- (void)activateCameraSessionTaskConstraints;
- (void)_deactivateCameraSessionTaskConstraintsAfterDelay:(double)a0;
- (void)_cancelSessionFailsafeTimer;
- (void)_startSessionFailsafeTimer;
- (void)cameraWatcherDidChangeState:(id)a0;
- (id)initWithTaskContstraintRole:(long long)a0 name:(id)a1;
- (id)sessionStatusDescription;
- (void)invalidate;
- (void)_activateCameraSessionTaskConstraints;
- (void).cxx_destruct;

@end
