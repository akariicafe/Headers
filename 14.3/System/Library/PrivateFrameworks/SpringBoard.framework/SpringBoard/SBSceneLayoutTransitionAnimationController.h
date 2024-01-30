@class SBUIBlockAnimationController, SBSceneLayoutViewController;

@interface SBSceneLayoutTransitionAnimationController : SBUIWorkspaceAnimationController {
    SBSceneLayoutViewController *_layoutController;
    SBUIBlockAnimationController *_blockAnimation;
}

- (id)animationSettings;
- (void).cxx_destruct;
- (BOOL)_canBeInterrupted;
- (id)containerView;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (id)_getTransitionWindow;
- (id)initWithWorkspaceTransitionRequest:(id)a0;
- (id)initWithTransitionContextProvider:(id)a0 layoutController:(id)a1 animationSettings:(id)a2 animationBlock:(id /* block */)a3;
- (id)initWithTransitionContextProvider:(id)a0 layoutController:(id)a1 animationSettings:(id)a2 stepped:(BOOL)a3 animationBlock:(id /* block */)a4;

@end
