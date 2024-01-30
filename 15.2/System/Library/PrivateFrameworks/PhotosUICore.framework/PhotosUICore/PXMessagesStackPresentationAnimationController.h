@class PXMessagesStackView, NSString, PXPhotosGridStackTransitionHelper, UIViewPropertyAnimator;

@interface PXMessagesStackPresentationAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {
    double _transitionDuration;
    PXPhotosGridStackTransitionHelper *_transitionHelper;
    UIViewPropertyAnimator *_propertyAnimator;
}

@property (readonly, nonatomic) PXMessagesStackView *stackView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (id)interruptibleAnimatorForTransition:(id)a0;
- (void).cxx_destruct;
- (id)initWithStackView:(id)a0;

@end
