@class NSArray, SBAutoPIPWorkspaceTransaction;
@protocol BSInvalidatable;

@interface SBTransientOverlayDismissAllToAppsWorkspaceTransaction : SBToAppsWorkspaceTransaction {
    NSArray *_switcherTransitioningTransientOverlayViewControllers;
    SBAutoPIPWorkspaceTransaction *_autoPIPTransaction;
    id<BSInvalidatable> _pipWindowLevelOverrideAssertionInvalidatable;
    BOOL _isUsingSwitcherAnimation;
    BOOL _beganDismissingTransientOverlays;
}

- (unsigned long long)_concurrentOverlayDismissalOptions;
- (id)initWithTransitionRequest:(id)a0;
- (id)_setupAnimation;
- (void)_begin;
- (void)_logForInterruptAttemptReason:(id)a0;
- (BOOL)canInterruptForTransitionRequest:(id)a0;
- (void)_didComplete;
- (BOOL)_canBeInterrupted;
- (void)_handleDismissOverlaysCompletion;
- (void)dealloc;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (BOOL)_shouldResignActiveForAnimation;
- (void)_performDismissal;
- (BOOL)_shouldUseSwitcherDismissalAnimationForTransientOverlayViewController:(id)a0;
- (void).cxx_destruct;
- (BOOL)_shouldAnimateTransition;

@end
