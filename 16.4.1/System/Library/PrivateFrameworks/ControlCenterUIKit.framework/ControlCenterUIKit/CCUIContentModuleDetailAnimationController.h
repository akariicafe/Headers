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
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (void)performTransition:(id)a0;
- (id)_contentModuleContainingViewController;
- (id)_newPropertyAnimator;
- (id)initForPresenting:(BOOL)a0 anchoringViewController:(id)a1;

@end
