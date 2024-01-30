@class SBDisableActiveInterfaceOrientationChangeAssertion;
@protocol SBLockScreenEnvironment;

@interface SBActivateAppUnderLockScreenWorkspaceTransaction : SBToAppsWorkspaceTransaction {
    id<SBLockScreenEnvironment> _lockScreenEnvironment;
    SBDisableActiveInterfaceOrientationChangeAssertion *_disableActiveOrientationChangeAssertion;
}

- (void).cxx_destruct;
- (BOOL)shouldPerformToAppStateCleanupOnCompletion;
- (void)dealloc;
- (void)_didComplete;
- (id)initWithTransitionRequest:(id)a0 lockScreenEnvironment:(id)a1;
- (void)_begin;
- (void)_lockScreenDidActivate;
- (void)_setupAndActivate;
- (BOOL)shouldPlaceOutgoingScenesUnderLockOnCompletion;
- (void)_activateLockScreen;

@end
