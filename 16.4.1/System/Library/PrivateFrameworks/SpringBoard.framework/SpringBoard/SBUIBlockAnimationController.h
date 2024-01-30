@class BSAnimationSettings;

@interface SBUIBlockAnimationController : SBUIWorkspaceAnimationController {
    BSAnimationSettings *_animationSettings;
    id /* block */ _animationBlock;
}

- (id)initWithWorkspaceTransitionRequest:(id)a0;
- (void)_startAnimation;
- (id)initWithWorkspaceTransitionRequest:(id)a0 animationSettings:(id)a1 animationBlock:(id /* block */)a2;
- (void)_didComplete;
- (id)animationSettings;
- (void).cxx_destruct;

@end
