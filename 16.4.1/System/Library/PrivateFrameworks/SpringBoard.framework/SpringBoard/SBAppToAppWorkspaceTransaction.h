@class NSObject, SBUIAnimationController, SBAutoPIPWorkspaceTransaction;
@protocol OS_dispatch_group;

@interface SBAppToAppWorkspaceTransaction : SBToAppsWorkspaceTransaction {
    SBAutoPIPWorkspaceTransaction *_autoPIPTransaction;
    SBUIAnimationController *_animation;
    unsigned long long _autoPIPTransitionOrder;
    NSObject<OS_dispatch_group> *_pipDuringSwitchTransitionTasksGroup;
}

@property (nonatomic) BOOL preventWhitePointAdaptationStrengthUpdateOnComplete;

- (void)_clearAnimation;
- (BOOL)shouldAnimateOrientationChangeOnCompletion;
- (BOOL)_transitionWasCancelled;
- (void)_animationWillBegin:(BOOL)a0;
- (unsigned long long)_concurrentOverlayDismissalOptions;
- (id)initWithTransitionRequest:(id)a0;
- (id)_setupAnimation;
- (BOOL)_hasPostAnimationTasks;
- (void)_animationDidRevealApplication;
- (void)_begin;
- (void)_handleApplicationUpdateScenesTransactionFailed:(id)a0;
- (void)_handleApplicationDidNotChange:(id)a0;
- (void)_cleanUpAfterAnimation;
- (void)_beginTransition;
- (BOOL)canInterruptForTransitionRequest:(id)a0;
- (void)_didComplete;
- (BOOL)_canBeInterrupted;
- (BOOL)_hasPreAnimationTasks;
- (id)debugDescription;
- (void)dealloc;
- (id)_setupAnimationFrom:(id)a0 to:(id)a1;
- (void)_performPostAnimationTasksWithCompletion:(id /* block */)a0;
- (BOOL)shouldPerformToAppStateCleanupOnCompletion;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (void)_performPreAnimationTasksWithCompletion:(id /* block */)a0;
- (BOOL)_shouldResignActiveForAnimation;
- (void).cxx_destruct;

@end
