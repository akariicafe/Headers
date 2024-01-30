@class NSObject, SBUIAnimationController, SBAutoPiPWorkspaceTransaction;
@protocol OS_dispatch_group;

@interface SBAppToAppWorkspaceTransaction : SBToAppsWorkspaceTransaction {
    SBAutoPiPWorkspaceTransaction *_autoPiPTransaction;
    SBUIAnimationController *_animation;
    unsigned long long _autoPIPTransitionOrder;
    NSObject<OS_dispatch_group> *_pipDuringSwitchTransitionTasksGroup;
}

@property (nonatomic) BOOL preventWhitePointAdaptationStrengthUpdateOnComplete;

- (BOOL)canInterruptForTransitionRequest:(id)a0;
- (id)initWithTransitionRequest:(id)a0;
- (id)_setupAnimation;
- (void).cxx_destruct;
- (BOOL)shouldPerformToAppStateCleanupOnCompletion;
- (unsigned long long)_concurrentOverlayDismissalOptions;
- (void)dealloc;
- (void)_didComplete;
- (void)_beginTransition;
- (BOOL)_canBeInterrupted;
- (BOOL)_hasPreAnimationTasks;
- (void)_cleanUpAfterAnimation;
- (BOOL)_hasPostAnimationTasks;
- (void)_performPreAnimationTasksWithCompletion:(id /* block */)a0;
- (BOOL)shouldAnimateOrientationChangeOnCompletion;
- (void)_begin;
- (id)_setupAnimationFrom:(id)a0 to:(id)a1;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (void)_handleApplicationDidNotChange:(id)a0;
- (BOOL)_transitionWasCancelled;
- (void)_performPostAnimationTasksWithCompletion:(id /* block */)a0;
- (void)_animationWillBegin:(BOOL)a0;
- (BOOL)_shouldResignActiveForAnimation;
- (id)debugDescription;
- (void)_animationDidRevealApplication;
- (void)_clearAnimation;
- (void)_handleApplicationUpdateScenesTransactionFailed:(id)a0;

@end
