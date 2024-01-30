@class BSAnimationSettings;

@interface SBUIBlockAnimationController : SBUIWorkspaceAnimationController {
    BSAnimationSettings *_animationSettings;
    id /* block */ _animationBlock;
}

- (id)animationSettings;
- (id)initWithWorkspaceTransitionRequest:(id)a0 animationSettings:(id)a1 animationBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_startAnimation;
- (void)_didComplete;
- (id)initWithWorkspaceTransitionRequest:(id)a0;

@end
