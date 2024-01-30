@class SBUIBlockAnimationController, SBSceneLayoutViewController;

@interface SBSceneLayoutTransitionAnimationController : SBUIWorkspaceAnimationController {
    SBSceneLayoutViewController *_layoutController;
    SBUIBlockAnimationController *_blockAnimation;
}

- (BOOL)_canBeInterrupted;
- (id)animationSettings;
- (id)containerView;
- (void).cxx_destruct;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (id)_getTransitionWindow;
- (id)initWithWorkspaceTransitionRequest:(id)a0;
- (id)initWithTransitionContextProvider:(id)a0 layoutController:(id)a1 animationSettings:(id)a2 animationBlock:(id /* block */)a3;
- (id)initWithTransitionContextProvider:(id)a0 layoutController:(id)a1 animationSettings:(id)a2 stepped:(BOOL)a3 animationBlock:(id /* block */)a4;

@end
