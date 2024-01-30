@protocol UIViewControllerInteractiveTransitioning, UIViewControllerAnimatedTransitioning;

@interface _UINavigationControllerVisualStyleWatchOS : _UINavigationControllerVisualStyle {
    id<UIViewControllerAnimatedTransitioning> _transitionController;
    id<UIViewControllerInteractiveTransitioning> _interactionController;
}

- (id)transitionController;
- (id)interactionController;
- (void)setInteractionController:(id)a0;
- (BOOL)isUsingParallaxTransition;
- (void).cxx_destruct;
- (void)setTransitionController:(id)a0;

@end
