@class _UIDatePickerContainerViewController, _UIDatePickerOverlayPlatterView, UIDatePicker, UIView;
@protocol _UIDatePickerOverlayPresentationDelegate;

@interface _UIDatePickerOverlayPresentation : NSObject

@property (retain, nonatomic) _UIDatePickerContainerViewController *containerViewController;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } resolvedSourceRect;
@property (retain, nonatomic) _UIDatePickerOverlayPlatterView *platterView;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (weak, nonatomic) id<_UIDatePickerOverlayPresentationDelegate> delegate;
@property (readonly, nonatomic) long long activeMode;
@property (readonly, nonatomic) BOOL isPresentingOverlay;
@property (nonatomic) BOOL ignoresPassthroughOnSourceView;
@property (readonly, weak, nonatomic) UIDatePicker *activeDatePicker;
@property (readonly, weak, nonatomic) UIView *sourceView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (nonatomic) BOOL defersAutomaticKeyboardAvoidanceAdjustments;
@property (nonatomic) long long alignment;
@property (nonatomic) long long overlayAnchor;
@property (retain, nonatomic) UIView *accessoryView;
@property (nonatomic) BOOL accessoryViewIgnoresDefaultInsets;

- (void)retargetCurrentPresentationToSourceView;
- (void)activateEmptyPresentationWithMode:(long long)a0 onDismiss:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dismissPresentationAnimated:(BOOL)a0;
- (id)initWithSourceView:(id)a0;
- (void)presentDatePicker:(id)a0 onDismiss:(id /* block */)a1;
- (void)setActiveMode:(long long)a0;
- (void)_presentNewDatePicker:(id)a0;
- (void)_transitionToDatePicker:(id)a0;
- (void)_prepareDatePickerPresentationWithCompletion:(id /* block */)a0;
- (void)animateDismissalWithAnimations:(id /* block */)a0 completion:(id /* block */)a1;
- (long long)_overlayAlignment;
- (struct _UIDatePickerOverlayPlatterLayout { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; })_computedLayoutForPlatterView:(id)a0;
- (void)animatePresentWithAnimations:(id /* block */)a0 completion:(id /* block */)a1;
- (void)animateTransitionWithAnimations:(id /* block */)a0 completion:(id /* block */)a1;
- (unsigned long long)_overlayAlignmentEdge;
- (double)_layoutArbiterAnchorAlignmentOffset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_adjustedFrameForInputSize:(struct CGSize { double x0; double x1; })a0 outputFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGPoint { double x0; double x1; })_adjustedAnchorPointForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 alignment:(unsigned long long)a1 anchorPoint:(struct CGPoint { double x0; double x1; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })resolvedSourceBounds;
- (struct CGPoint { double x0; double x1; })_normalizedSourcePointForAnchorPoint:(struct CGPoint { double x0; double x1; })a0 menuFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
