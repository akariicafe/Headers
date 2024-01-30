@class NSString, NSTimer, SBFAuthenticationAssertion, SBAppStatusBarSettingsAssertion;
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
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    BOOL _isAppSyncing;
    BOOL _inExtendedAppSyncCoalescePeriod;
}

@property (weak, nonatomic, getter=_idleTimerCoordinator, setter=_setIdleTimerCoordinator:) id<SBIdleTimerCoordinating> idleTimerCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)isRestoring;
- (int)restoreState;
- (void)stopObserving;
- (void)startObserving;
- (void)_invalidateRestoreTimer;
- (int)resetState;
- (void)beginRestoring;
- (void)resetService:(id)a0 willBeginDataResetWithMode:(long long)a1;
- (id)coordinatorRequestedIdleTimerBehavior:(id)a0;
- (void)_notifyRestoreCanProceed;
- (void)resetService:(id)a0 didCompleteDataResetMode:(long long)a1 withError:(id)a2 completion:(id /* block */)a3;
- (void)_wirelessSyncEnded:(id)a0;
- (void)_didEndRestoring:(int)a0;
- (void)_delayedQuitApplications;
- (void)_rebootNow;
- (void)finishedTerminatingApplications;
- (void)_restoreTimerFired:(id)a0;
- (BOOL)isResetting;
- (void)_appInstallationNotification;
- (BOOL)_isBackupAgentRunning;
- (void)_wirelessSyncBegan:(id)a0;
- (void)_syncSessionDidBegin;
- (void)_killApplicationsIfNecessary;
- (void)_setupRestoreTimer;
- (void).cxx_destruct;
- (void)resetService:(id)a0 didBeginDataResetWithMode:(long long)a1;
- (void)_setRestoreState:(int)a0;
- (void)_syncSessionDidEnd;
- (BOOL)isInUse;
- (void)dealloc;
- (id)_idleTimerBehavior;
- (void)cancelRestoring;

@end
