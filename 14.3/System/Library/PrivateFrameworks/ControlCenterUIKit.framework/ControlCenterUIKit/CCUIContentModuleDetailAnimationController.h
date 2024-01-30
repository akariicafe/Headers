@class UIViewPropertyAnimator, NSString, UIViewController;

@interface CCUIContentModuleDetailAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {
    UIViewController *_anchoringViewController;
}

@property (readonly, nonatomic, getter=isPresenting) BOOL presenting;
@property (readonly, nonatomic) UIViewPropertyAnimator *propertyAnimator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationEnded:(BOOL)a0;
- (void).cxx_destruct;
- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)performTransition:(id)a0;
- (id)_newPropertyAnimator;
- (id)_contentModuleContainingViewController;
- (id)initForPresenting:(BOOL)a0 anchoringViewController:(id)a1;

@end
