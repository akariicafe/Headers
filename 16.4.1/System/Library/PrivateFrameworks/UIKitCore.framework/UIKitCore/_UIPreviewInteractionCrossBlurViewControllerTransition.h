@class NSString, UITargetedPreview;

@interface _UIPreviewInteractionCrossBlurViewControllerTransition : NSObject <_UIPreviewInteractionViewControllerTransition> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _initialPlatterRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _finalPlatterRect;
}

@property (nonatomic, getter=isDismissTransition) BOOL dismissTransition;
@property (copy, nonatomic) UITargetedPreview *sourcePreview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performAppearanceTransitionFromView:(id)a0 toView:(id)a1 containerView:(id)a2;
- (void)performDisappearanceTransitionFromView:(id)a0 toView:(id)a1 containerView:(id)a2;
- (void)performTransitionFromView:(id)a0 toView:(id)a1 containerView:(id)a2;
- (void)prepareAppearanceTransitionFromView:(id)a0 toView:(id)a1 containerView:(id)a2;
- (void)prepareDisappearanceTransitionFromView:(id)a0 toView:(id)a1 containerView:(id)a2;
- (void)prepareTransitionFromView:(id)a0 toView:(id)a1 containerView:(id)a2;
- (void)transitionDidEnd:(BOOL)a0;

@end
