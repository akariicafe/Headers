@class NSArray, _UIRoundedRectShadowView, UIView, _UIGrabber;

@interface UIDropShadowView : UIView

@property (readonly, nonatomic) BOOL supportsShadowAndGrabber;
@property (readonly, nonatomic) long long independentCorners;
@property (readonly, weak, nonatomic) UIView *firstCornerClippingDescendant;
@property (readonly, nonatomic) NSArray *cornerClippingDescendants;
@property (readonly, nonatomic) UIView *deepestClippingView;
@property (readonly, nonatomic) _UIRoundedRectShadowView *magicShadowView;
@property (nonatomic) struct UIRectCornerRadii { double topLeft; double bottomLeft; double bottomRight; double topRight; } environmentMatchingCornerRadii;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *overlayView;
@property (readonly, nonatomic) _UIGrabber *grabber;
@property (nonatomic) double grabberTopSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentTouchInsets;
@property (nonatomic) BOOL masksTopCornersOnly;

- (void).cxx_destruct;
- (void)setMagicShadowAlpha:(double)a0;
- (void)willBeginRotationWithOriginalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 newBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 independentCorners:(long long)a1 supportsShadowAndGrabber:(BOOL)a2 stylesSheetsAsCards:(BOOL)a3;
- (void)didFinishRotation;

@end
