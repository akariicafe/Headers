@class UISearchBar, UIView;

@interface _UINavigationBarTransitionContextDismissSearch : _UINavigationBarTransitionContext {
    UISearchBar *_transitioningSearchBar;
    UIView *_transitioningScopeBarContainer;
}

- (void)complete;
- (int)transition;
- (void)cancel;
- (void)animate;
- (BOOL)_shouldCrossfadeDismissal;
- (void)prepare;
- (void).cxx_destruct;

@end
