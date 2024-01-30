@class UIView;

@interface _UINavigationBarTransitionContextPresentSearch : _UINavigationBarTransitionContext {
    UIView *_transitioningScopeBarContainer;
}

- (void)complete;
- (int)transition;
- (void)cancel;
- (void)animate;
- (void)prepare;
- (void)_resetContentAndLargeTitleViewCompleted:(BOOL)a0;
- (void).cxx_destruct;
- (void)_prepareBackgroundView;
- (void)_animateBackgroundView;

@end
