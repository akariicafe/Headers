@class NSString, NSTimer, SBWindowSceneStatusBarSettingsAssertion, SBFAuthenticationAssertion;
@protocol SBIdleTimerCoordinating;

@interface SBSyncController : NSObject <DDRResetObserver, SBIdleTimerProviding> {
    int _restoreState;
    int _resetState;
    int _restoreTimerState;
    NSTimer *_restoreTimer;
    NSTimer *_progressTimer;
    BOOL _appsChangedDuringSync;
    int _restoreStartedNotifyToken;
    int _restoreEndedNotifyToken;
    SBFAuthenticationAssertion *_disableDeviceLockAssertion;
    SBWindowSceneStatusBarSettingsAssertion *_hideStatusBarAssertion;
    BOOL _isAppSyncing;
    BOOL _inExtendedAppSyncCoalescePeriod;
}

@property (weak, nonatomic, getter=_idleTimerCoordinator, setter=_setIdleTimerCoordinator:) id<SBIdleTimerCoordinating> idleTimerCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (int)restoreState;
- (void)_appInstallationNotification;
- (BOOL)isRestoring;
- (id)coordinatorRequestedIdleTimerBehavior:(id)a0;
- (void)stopObserving;
- (void)_wirelessSyncEnded:(id)a0;
- (void)startObserving;
- (int)resetState;
- (BOOL)_isBackupAgentRunning;
- (void)_didEndRestoring:(int)a0;
- (void)_restoreTimerFired:(id)a0;
- (BOOL)isInUse;
- (void)_setRestoreState:(int)a0;
- (void)_setupRestoreTimer;
- (void)_rebootNow;
- (void)_wirelessSyncBegan:(id)a0;
- (void)resetService:(id)a0 willBeginDataResetWithMode:(long long)a1;
- (id)_idleTimerBehavior;
- (void)beginRestoring;
- (void)finishedTerminatingApplications;
- (void)dealloc;
- (void)resetService:(id)a0 didCompleteDataResetMode:(long long)a1 withError:(id)a2 completion:(id /* block */)a3;
- (void)cancelRestoring;
- (void)_invalidateRestoreTimer;
- (void)resetService:(id)a0 didBeginDataResetWithMode:(long long)a1;
- (BOOL)isResetting;
- (void)_notifyRestoreCanProceed;
- (void)_delayedQuitApplications;
- (void)_killApplicationsIfNecessary;
- (void).cxx_destruct;
- (void)_syncSessionDidEnd;
- (void)_syncSessionDidBegin;

@end
