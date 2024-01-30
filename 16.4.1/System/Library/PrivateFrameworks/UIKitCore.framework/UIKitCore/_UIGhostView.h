@class _UIPortalView, UIView;

@interface _UIGhostView : UIView

@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) _UIPortalView *portalView;

+ (id)ghostViewForView:(id)a0;

- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setHidden:(BOOL)a0;
- (id)initWithView:(id)a0;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
