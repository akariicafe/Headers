@class NSMutableArray, _UIPortalView, UIPointerShape, UITargetedPreview, _UIPointerEffectTintView, UIView, _UILumaTrackingBackdropView;

@interface _UIPointerEffectPlatterView : UIView

@property (retain, nonatomic) UIView *contentSourceView;
@property (retain, nonatomic) UIView *shadowView;
@property (retain, nonatomic) _UIPortalView *contentPortalView;
@property (retain, nonatomic) _UIPointerEffectTintView *tintView;
@property (retain, nonatomic) _UILumaTrackingBackdropView *lumaTrackingView;
@property (retain, nonatomic) UIView *specularOverlayView;
@property (retain, nonatomic) NSMutableArray *accessoryPortals;
@property (retain, nonatomic) UIPointerShape *tintViewShape;
@property (copy, nonatomic) UITargetedPreview *targetedPreview;
@property (nonatomic) double shadowAlpha;
@property (nonatomic, getter=isTintDisabled) BOOL tintDisabled;
@property (nonatomic) long long tintMode;
@property (retain, nonatomic) UIView *specularHighlight;
@property (nonatomic) BOOL shouldMaskSpecularHighlight;
@property (nonatomic) BOOL useSoftShadow;
@property (nonatomic) BOOL geometryFrozen;
@property (nonatomic, getter=isPressed) BOOL pressed;
@property (copy, nonatomic) id /* block */ tintColorMatrixProvider;

- (void)layoutSubviews;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_ignoreRemoveAllAnimations;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithTargetedPreview:(id)a0 tintViewShape:(id)a1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_newTintView;
- (void)_updateContentMask;
- (void)_installAccessoryView:(id)a0;
- (id)_newShadowView;
- (void)_layoutTintView;
- (id)_newLumaTrackingViewForTintView:(id)a0;
- (id)_specularOverlayWithHighlightPortal:(id)a0 shouldMask:(BOOL)a1;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)_isEligibleForFocusOcclusion;

@end
