@class UISearchBar;

@interface _UINavigationBarTransitionContextDismissSearch : _UINavigationBarTransitionContext {
    UISearchBar *_transitioningSearchBar;
}

- (void)cancel;
- (void)prepare;
- (void).cxx_destruct;
- (int)transition;
- (void)animate;
- (void)complete;

@end
