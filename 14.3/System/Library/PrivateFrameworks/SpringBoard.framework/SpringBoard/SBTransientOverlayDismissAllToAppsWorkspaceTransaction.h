@class NSArray, SBAutoPiPWorkspaceTransaction;
@protocol BSInvalidatable;

@interface SBTransientOverlayDismissAllToAppsWorkspaceTransaction : SBToAppsWorkspaceTransaction {
    NSArray *_switcherTransitioningTransientOverlayViewControllers;
    SBAutoPiPWorkspaceTransaction *_autoPiPTransaction;
    id<BSInvalidatable> _pipWindowLevelOverrideAssertionInvalidatable;
    BOOL _isUsingSwitcherAnimation;
    BOOL _beganDismissingTransientOverlays;
}

- (BOOL)canInterruptForTransitionRequest:(id)a0;
- (id)initWithTransitionRequest:(id)a0;
- (id)_setupAnimation;
- (BOOL)_shouldAnimateTransition;
- (void).cxx_destruct;
- (unsigned long long)_concurrentOverlayDismissalOptions;
- (void)dealloc;
- (void)_didComplete;
- (BOOL)_canBeInterrupted;
- (void)_handleDismissOverlaysCompletion;
- (void)_begin;
- (void)_logForInterruptAttemptReason:(id)a0;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (void)_performDismissal;
- (BOOL)_shouldResignActiveForAnimation;
- (BOOL)_shouldUseSwitcherDismissalAnimationForTransientOverlayViewController:(id)a0;

@end
