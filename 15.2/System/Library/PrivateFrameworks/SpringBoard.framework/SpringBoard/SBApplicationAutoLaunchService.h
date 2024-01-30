@class NSTimer, NSString, SBRestartManager, SBFMobileKeyBag, SBApplicationController, NSMutableArray, SBSyncController, SBMainWorkspace;

@interface SBApplicationAutoLaunchService : NSObject <BSDescriptionProviding, SBFMobileKeyBagObserver> {
    SBMainWorkspace *_mainWorkspace;
    SBApplicationController *_applicationController;
    SBRestartManager *_restartManager;
    SBSyncController *_syncController;
    SBFMobileKeyBag *_keybag;
    BOOL _invalidated;
}

@property (nonatomic, getter=_autoLaunchSynchronously, setter=_setAutoLaunchSynchronously:) BOOL autoLaunchSynchronously;
@property (readonly, nonatomic, getter=_queuedApplicationsThrottledForRelaunchTimer) NSTimer *queuedApplicationsThrottledForRelaunchTimer;
@property (readonly, nonatomic, getter=_queuedApplicationsThrottledForRelaunch) NSMutableArray *queuedApplicationsThrottledForRelaunch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_installedApplicationsDidChange:(id)a0;
- (void)_scheduleThrottledApplicationRelaunchTimerIfNecessary;
- (void)_memoryPressureRelieved:(id)a0;
- (void)keybagDidUnlockForTheFirstTime:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_noteKeybagDidUnlock;
- (void)_autoLaunchIfNecessary:(id)a0 forReason:(unsigned long long)a1;
- (void)_launchNextQueuedApplicationThrottledForRelaunch;
- (void)_autoLaunchAppsIfNecessaryAfterFirstUnlock;
- (void)_applicationProcessStateDidChange:(id)a0;
- (id)succinctDescription;
- (void)_noteTerminationAssertionRemovedForApplication:(id)a0;
- (void)autoLaunchApplicationsIfNecessaryForStartup;
- (void)_invalidateQueuedApplicationsThrottledForRelaunchTimer;
- (void).cxx_destruct;
- (void)_memoryPressureWarn:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)invalidate;
- (void)dealloc;
- (BOOL)_shouldAutoLaunchApplication:(id)a0 forReason:(unsigned long long)a1;
- (void)_scheduleAutoLaunchForApplicationExited:(id)a0 withExitContext:(id)a1;
- (id)_initWithWorkspace:(id)a0 applicationController:(id)a1 restartManager:(id)a2 syncController:(id)a3 keybag:(id)a4;
- (void)_recalculateVoIPBehaviorForApplication:(id)a0 withExitContext:(id)a1;

@end
