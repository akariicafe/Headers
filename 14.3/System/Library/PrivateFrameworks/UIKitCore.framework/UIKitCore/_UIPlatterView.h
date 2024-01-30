@class NSValue, _UIPortalView, _UIShapeView, UIView, _UIPlatterSoftShadowView, _DUIPreview;

@interface _UIPlatterView : UIView

@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) _UIShapeView *platterMaskView;
@property (readonly, nonatomic) _UIShapeView *portalMaskView;
@property (retain, nonatomic) _UIPortalView *portalView;
@property (readonly, nonatomic) UIView *portalWrapperView;
@property (readonly, nonatomic) _UIPlatterSoftShadowView *shadowView;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } containerCounterScaleTransform;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } containerCounterRotationTransform;
@property (readonly, copy, nonatomic) _DUIPreview *preview;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } badgeLocation;
@property (nonatomic) BOOL constrainSize;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } contentOffset;
@property (nonatomic, getter=isLifted) BOOL lifted;
@property (nonatomic, getter=isBackgroundVisible) BOOL backgroundVisible;
@property (nonatomic, getter=isShadowVisible) BOOL shadowVisible;
@property (nonatomic) struct CGPoint { double x; double y; } offset;
@property (nonatomic) double orientationRotation;
@property (nonatomic) struct CGSize { double width; double height; } overrideSize;
@property (nonatomic) BOOL appliesOriginalRotation;
@property (nonatomic) double rotation;
@property (weak, nonatomic) UIView *sourceView;
@property (retain, nonatomic) UIView *componentView;
@property (nonatomic) double stackRotation;
@property (retain, nonatomic) NSValue *anchorPointValueToAdjustToOnMoveToWindow;
@property (nonatomic) BOOL constrainSizeWhenNotLifted;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } additionalTransform;
@property (readonly, nonatomic) struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } targetTransform;
@property (nonatomic) BOOL transformAppliedExternally;
@property (readonly, nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic, getter=isFlipped) BOOL flipped;
@property (nonatomic) BOOL precisionMode;

- (double)scaleFactor;
- (void).cxx_destruct;
- (id)initWithDUIPreview:(id)a0;
- (void)takeCounterTransformsToAddToContainer:(id)a0;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })scaleTransform;
- (id)initWithDUIPreview:(id)a0 imageComponent:(id)a1;
- (id)initWithPreview:(id)a0;
- (id)initWithDroppedItem:(id)a0;
- (void)setComponentViews:(id)a0;
- (void)_unmaskPlatterView;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateTransform;

@end
