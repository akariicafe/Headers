@class _UINavigationParallaxTransition, _UINavigationInteractiveTransition;

@interface _UINavigationControllerVisualStyleIOS : _UINavigationControllerVisualStyle {
    _UINavigationParallaxTransition *_transitionController;
    _UINavigationInteractiveTransition *_interactionController;
}

- (id)transitionController;
- (id)initWithNavigationController:(id)a0;
- (void)updateTransitionControllerWithOperation:(long long)a0;
- (void)layoutContainerViewSemanticContentAttributeChanged:(id)a0;
- (BOOL)isUsingParallaxTransition;
- (void).cxx_destruct;
- (id)interactionController;

@end
