@class UINavigationController;
@protocol UIViewControllerInteractiveTransitioning, UIViewControllerAnimatedTransitioning;

@interface _UINavigationControllerVisualStyle : NSObject

@property (nonatomic) UINavigationController *navigationController;
@property (readonly, nonatomic) id<UIViewControllerAnimatedTransitioning> transitionController;
@property (readonly, nonatomic) id<UIViewControllerInteractiveTransitioning> interactionController;
@property (readonly, nonatomic) BOOL isUsingParallaxTransition;

- (void)navigationBarVisibilityChanged;
- (void)toolbarVisibilityChanged;
- (void)containerViewWillLayoutSubviews:(id)a0;
- (void)navigationBarFrameChanged;
- (void)toolbarFrameChanged;
- (id)initWithNavigationController:(id)a0;
- (void)updateTransitionControllerWithOperation:(long long)a0;
- (BOOL)shouldUseInteractionControllerForInteractiveTransition;
- (void)layoutContainerViewSemanticContentAttributeChanged:(id)a0;

@end
