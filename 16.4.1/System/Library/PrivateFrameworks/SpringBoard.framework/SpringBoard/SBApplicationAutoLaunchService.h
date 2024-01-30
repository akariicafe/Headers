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

- (void)_noteTerminationAssertionRemovedForApplication:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)autoLaunchApplicationsIfNecessaryForStartup;
- (BOOL)_shouldAutoLaunchApplication:(id)a0 forReason:(unsigned long long)a1;
- (void)_memoryPressureWarn:(id)a0;
- (void)_noteKeybagDidUnlock;
- (void)_scheduleAutoLaunchForApplicationExited:(id)a0 withExitContext:(id)a1;
- (void)_autoLaunchAppsIfNecessaryAfterFirstUnlock;
- (void)_memoryPressureRelieved:(id)a0;
- (void)dealloc;
- (void)_autoLaunchIfNecessary:(id)a0 forReason:(unsigned long long)a1;
- (void)_recalculateVoIPBehaviorForApplication:(id)a0 withExitContext:(id)a1;
- (void)_scheduleThrottledApplicationRelaunchTimerIfNecessary;
- (void)_installedApplicationsDidChange:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_invalidateQueuedApplicationsThrottledForRelaunchTimer;
- (id)_initWithWorkspace:(id)a0 applicationController:(id)a1 restartManager:(id)a2 syncController:(id)a3 keybag:(id)a4;
- (void)keybagDidUnlockForTheFirstTime:(id)a0;
- (void)invalidate;
- (void)_applicationProcessStateDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_launchNextQueuedApplicationThrottledForRelaunch;

@end
