@class UIView, NSString, MTMaterialView;

@interface MediaControlsPresentationController : UIPreviewPresentationController <UIGestureRecognizerDelegate>

@property (retain, nonatomic) MTMaterialView *materialView;
@property (weak, nonatomic) UIView *presentingView;
@property (nonatomic) struct CGPoint { double x; double y; } sourcePoint;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_backgroundEffectForTraitCollection:(id)a0 interactive:(BOOL)a1;

- (void)dismissalTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (BOOL)shouldPresentInFullscreen;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void)presentationTransitionWillBegin;
- (void).cxx_destruct;
- (void)_dismissTap:(id)a0;

@end
