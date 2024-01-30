@class _UIPortalView, UIView, UITargetedPreview, _UIPlatterSoftShadowView;

@interface _UIHighlightPlatterView : UIView

@property (retain, nonatomic) UITargetedPreview *targetedPreview;
@property (retain, nonatomic) _UIPortalView *portalView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) _UIPlatterSoftShadowView *shadowView;
@property (nonatomic) double shadowAlpha;
@property (nonatomic) double backgroundAlpha;

- (void).cxx_destruct;
- (id)initWithTargetedPreview:(id)a0;

@end
