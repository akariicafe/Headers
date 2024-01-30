@class NSObject, SBUIAnimationController, SBAutoPIPWorkspaceTransaction;
@protocol OS_dispatch_group;

@interface SBAppToAppWorkspaceTransaction : SBToAppsWorkspaceTransaction {
    SBAutoPIPWorkspaceTransaction *_autoPIPTransaction;
    SBUIAnimationController *_animation;
    unsigned long long _autoPIPTransitionOrder;
    NSObject<OS_dispatch_group> *_pipDuringSwitchTransitionTasksGroup;
}

@property (nonatomic) BOOL preventWhitePointAdaptationStrengthUpdateOnComplete;

- (BOOL)_canBeInterrupted;
- (id)initWithTransitionRequest:(id)a0;
- (BOOL)canInterruptForTransitionRequest:(id)a0;
- (void)_begin;
- (void)_didComplete;
- (void)_handleApplicationUpdateScenesTransactionFailed:(id)a0;
- (id)_setupAnimationFrom:(id)a0 to:(id)a1;
- (void)_clearAnimation;
- (BOOL)_transitionWasCancelled;
- (void)_cleanUpAfterAnimation;
- (BOOL)_hasPreAnimationTasks;
- (void).cxx_destruct;
- (BOOL)shouldPerformToAppStateCleanupOnCompletion;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (void)_beginTransition;
- (void)_performPostAnimationTasksWithCompletion:(id /* block */)a0;
- (void)_animationDidRevealApplication;
- (BOOL)shouldAnimateOrientationChangeOnCompletion;
- (void)_performPreAnimationTasksWithCompletion:(id /* block */)a0;
- (id)_setupAnimation;
- (void)dealloc;
- (unsigned long long)_concurrentOverlayDismissalOptions;
- (void)_animationWillBegin:(BOOL)a0;
- (id)debugDescription;
- (BOOL)_hasPostAnimationTasks;
- (BOOL)_shouldResignActiveForAnimation;
- (void)_handleApplicationDidNotChange:(id)a0;

@end
