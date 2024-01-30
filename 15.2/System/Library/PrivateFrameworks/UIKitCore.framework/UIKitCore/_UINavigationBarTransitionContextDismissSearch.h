@class UISearchBar;

@interface _UINavigationBarTransitionContextDismissSearch : _UINavigationBarTransitionContext {
    UISearchBar *_transitioningSearchBar;
}

- (int)transition;
- (void)animate;
- (BOOL)_shouldCrossfadeDismissal;
- (void)prepare;
- (void)complete;
- (void).cxx_destruct;
- (void)cancel;

@end
