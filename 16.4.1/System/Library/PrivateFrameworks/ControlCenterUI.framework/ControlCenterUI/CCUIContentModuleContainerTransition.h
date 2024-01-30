@class NSString, CCUIContentModuleContainerViewController, UIViewPropertyAnimator, UITargetedPreview;

@interface CCUIContentModuleContainerTransition : NSObject <_UIClickPresentationTransition>

@property (weak, nonatomic) CCUIContentModuleContainerViewController *viewController;
@property (nonatomic, getter=isAppearanceTransition) BOOL appearanceTransition;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentRestOverrideFrame;
@property (copy, nonatomic) UITargetedPreview *sourcePreview;
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)performTransitionFromView:(id)a0 toView:(id)a1 containerView:(id)a2;
- (void)prepareTransitionFromView:(id)a0 toView:(id)a1 containerView:(id)a2;
- (void)transitionDidEnd:(BOOL)a0;

@end
