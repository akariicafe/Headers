@class NSArray, _UIRoundedRectShadowView, UIView, _UIGrabber;
@protocol UIDropShadowViewDelegate;

@interface UIDropShadowView : UIView

@property (readonly, nonatomic) BOOL supportsShadow;
@property (readonly, nonatomic) long long independentCorners;
@property (readonly, weak, nonatomic) UIView *firstCornerClippingDescendant;
@property (readonly, nonatomic) NSArray *cornerClippingDescendants;
@property (readonly, nonatomic) UIView *deepestClippingView;
@property (readonly, nonatomic) _UIGrabber *_topGrabber;
@property (readonly, nonatomic) _UIGrabber *_bottomGrabber;
@property (readonly, nonatomic) BOOL _hasCreatedGrabbers;
@property (readonly, nonatomic) _UIRoundedRectShadowView *magicShadowView;
@property (nonatomic) struct UIRectCornerRadii { double topLeft; double bottomLeft; double bottomRight; double topRight; } environmentMatchingCornerRadii;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *overlayView;
@property (nonatomic, setter=_setHasGrabber:) BOOL _hasGrabber;
@property (nonatomic, setter=_setGrabberAlpha:) double _grabberAlpha;
@property (nonatomic, setter=_setGrabberSpacing:) double _grabberSpacing;
@property (nonatomic, setter=_setGrabberEdge:) long long _grabberEdge;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentTouchInsets;
@property (weak, nonatomic) id<UIDropShadowViewDelegate> _delegate;
@property (nonatomic) BOOL masksTopCornersOnly;

- (void)didFinishRotation;
- (void)setMagicShadowAlpha:(double)a0;
- (void)didMoveToWindow;
- (void)willBeginRotationWithOriginalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 newBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_layoutGrabbers;
- (void)_grabberPrimaryAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 independentCorners:(long long)a1 supportsShadow:(BOOL)a2 stylesSheetsAsCards:(BOOL)a3;
- (void)updateCornerClippingViews;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_isGrabber:(id)a0;
- (void).cxx_destruct;

@end
