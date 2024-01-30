@class _UIPassthroughScrollInteraction, UIView, _UIDatePickerOverlayPresentation;

@interface _UIDatePickerContainerView : UIView

@property (retain, nonatomic) _UIDatePickerOverlayPresentation *presentation;
@property (retain, nonatomic) _UIPassthroughScrollInteraction *passthroughInteraction;
@property (nonatomic) BOOL lastHitTestWasPassedThrough;
@property (retain, nonatomic) UIView *contentView;

- (BOOL)isTransparentFocusItem;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (void)didMoveToWindow;

@end
