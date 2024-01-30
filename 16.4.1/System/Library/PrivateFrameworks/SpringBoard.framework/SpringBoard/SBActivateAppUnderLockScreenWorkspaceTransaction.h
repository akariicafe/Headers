@class SBDisableActiveInterfaceOrientationChangeAssertion;
@protocol SBLockScreenEnvironment;

@interface SBActivateAppUnderLockScreenWorkspaceTransaction : SBToAppsWorkspaceTransaction {
    id<SBLockScreenEnvironment> _lockScreenEnvironment;
    SBDisableActiveInterfaceOrientationChangeAssertion *_disableActiveOrientationChangeAssertion;
}

- (void)_begin;
- (void)_didComplete;
- (void)_lockScreenDidActivate;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)a0 lockScreenEnvironment:(id)a1;
- (BOOL)shouldPerformToAppStateCleanupOnCompletion;
- (void)_activateLockScreen;
- (void)_setupAndActivate;
- (void).cxx_destruct;
- (BOOL)shouldPlaceOutgoingScenesUnderLockOnCompletion;

@end
