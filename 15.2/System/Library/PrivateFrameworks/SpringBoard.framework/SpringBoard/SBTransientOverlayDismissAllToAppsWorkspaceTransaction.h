@class NSArray, SBAutoPIPWorkspaceTransaction;
@protocol BSInvalidatable;

@interface SBTransientOverlayDismissAllToAppsWorkspaceTransaction : SBToAppsWorkspaceTransaction {
    NSArray *_switcherTransitioningTransientOverlayViewControllers;
    SBAutoPIPWorkspaceTransaction *_autoPIPTransaction;
    id<BSInvalidatable> _pipWindowLevelOverrideAssertionInvalidatable;
    BOOL _isUsingSwitcherAnimation;
    BOOL _beganDismissingTransientOverlays;
}

- (BOOL)_canBeInterrupted;
- (id)initWithTransitionRequest:(id)a0;
- (BOOL)canInterruptForTransitionRequest:(id)a0;
- (void)_begin;
- (void)_didComplete;
- (void)_logForInterruptAttemptReason:(id)a0;
- (void)_handleDismissOverlaysCompletion;
- (void)_performDismissal;
- (void).cxx_destruct;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (BOOL)_shouldAnimateTransition;
- (BOOL)_shouldUseSwitcherDismissalAnimationForTransientOverlayViewController:(id)a0;
- (id)_setupAnimation;
- (void)dealloc;
- (unsigned long long)_concurrentOverlayDismissalOptions;
- (BOOL)_shouldResignActiveForAnimation;

@end
