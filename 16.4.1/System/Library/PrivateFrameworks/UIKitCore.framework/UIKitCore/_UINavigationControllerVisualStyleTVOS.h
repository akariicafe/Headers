@class _UINavigationCrossfadeAnimator;

@interface _UINavigationControllerVisualStyleTVOS : _UINavigationControllerVisualStyle {
    _UINavigationCrossfadeAnimator *_transitionController;
}

- (id)transitionController;
- (id)initWithNavigationController:(id)a0;
- (BOOL)isUsingParallaxTransition;
- (void).cxx_destruct;

@end
