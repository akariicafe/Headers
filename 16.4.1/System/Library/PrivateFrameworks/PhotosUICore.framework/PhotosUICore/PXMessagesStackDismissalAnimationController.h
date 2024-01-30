@class PXMessagesStackView, NSString, PXPhotosGridStackTransitionHelper, UIViewPropertyAnimator, UIViewController;
@protocol UIViewControllerInteractiveTransitioning;

@interface PXMessagesStackDismissalAnimationController : NSObject <PXPhotosGridEdgeSwipeInteractiveDismissalDelegate, UIViewControllerAnimatedTransitioning> {
    double _transitionDuration;
    PXPhotosGridStackTransitionHelper *_transitionHelper;
    UIViewPropertyAnimator *_propertyAnimator;
}

@property (readonly, nonatomic) PXMessagesStackView *stackView;
@property (readonly, nonatomic) UIViewController *dismissingViewController;
@property (readonly, nonatomic) id<UIViewControllerInteractiveTransitioning> interactionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (id)interruptibleAnimatorForTransition:(id)a0;
- (void).cxx_destruct;
- (id)initWithStackView:(id)a0 dismissingViewController:(id)a1;
- (void)runTransitionAnimation:(id)a0;

@end
