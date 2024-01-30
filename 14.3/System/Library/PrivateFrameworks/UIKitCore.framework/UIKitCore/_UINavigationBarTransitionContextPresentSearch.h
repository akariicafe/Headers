@interface _UINavigationBarTransitionContextPresentSearch : _UINavigationBarTransitionContext

- (void)cancel;
- (void)prepare;
- (void)_resetContentAndLargeTitleViewCompleted:(BOOL)a0;
- (void)_prepareBackgroundView;
- (int)transition;
- (void)_animateBackgroundView;
- (void)animate;
- (void)complete;

@end
