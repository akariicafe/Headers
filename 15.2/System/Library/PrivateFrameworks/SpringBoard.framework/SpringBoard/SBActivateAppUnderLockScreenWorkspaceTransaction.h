@class SBDisableActiveInterfaceOrientationChangeAssertion;
@protocol SBLockScreenEnvironment;

@interface SBActivateAppUnderLockScreenWorkspaceTransaction : SBToAppsWorkspaceTransaction {
    id<SBLockScreenEnvironment> _lockScreenEnvironment;
    SBDisableActiveInterfaceOrientationChangeAssertion *_disableActiveOrientationChangeAssertion;
}

- (void)_begin;
- (void)_didComplete;
- (void)_setupAndActivate;
- (BOOL)shouldPlaceOutgoingScenesUnderLockOnCompletion;
- (void).cxx_destruct;
- (BOOL)shouldPerformToAppStateCleanupOnCompletion;
- (id)initWithTransitionRequest:(id)a0 lockScreenEnvironment:(id)a1;
- (void)_lockScreenDidActivate;
- (void)_activateLockScreen;
- (void)dealloc;

@end
