@class NSString, CCUIContentModuleDetailAnimationController, UIViewPropertyAnimator, UITargetedPreview, UIViewController;

@interface CCUIContentModuleDetailClickPresentationTransition : NSObject <_UIClickPresentationTransition>

@property (readonly, nonatomic) UIViewController *presentedViewController;
@property (readonly, nonatomic) CCUIContentModuleDetailAnimationController *animationController;
@property (copy, nonatomic) UITargetedPreview *sourcePreview;
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)performTransitionFromView:(id)a0 toView:(id)a1 containerView:(id)a2;
- (void)transitionDidEnd:(BOOL)a0;
- (id)initWithPresentedViewController:(id)a0 animationController:(id)a1;

@end
