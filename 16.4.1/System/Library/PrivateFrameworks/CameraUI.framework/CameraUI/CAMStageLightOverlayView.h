@class CAGradientLayer, CAMStageLightAnimator, UIImageView, CAShapeLayer, UIView;

@interface CAMStageLightOverlayView : UIView

@property (readonly, nonatomic) UIView *_tintView;
@property (readonly, nonatomic) UIImageView *_vignetteView;
@property (readonly, nonatomic) CAShapeLayer *_circleLayer;
@property (nonatomic, setter=_setActiveTimerID:) unsigned long long _activeTimerID;
@property (readonly, nonatomic) CAGradientLayer *_gradientLayer;
@property (retain, nonatomic, setter=_setAnimator:) CAMStageLightAnimator *_animator;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (nonatomic) long long orientation;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewportFrame;
@property (nonatomic) double bottomContentInset;

+ (BOOL)_useLargeLayoutForViewportSize:(struct CGSize { double x0; double x1; })a0;
+ (double)_circleDiameterForViewportSize:(struct CGSize { double x0; double x1; })a0 orientation:(long long)a1 screenScale:(double)a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })circleFrameForViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 orientation:(long long)a1 bottomContentInset:(double)a2 screenScale:(double)a3;

- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setActive:(BOOL)a0 animated:(BOOL)a1;
- (void)setVisible:(BOOL)a0 animated:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_circleFrameForOrientation:(long long)a0;
- (void)_updateAnimatorState;
- (void)_updateShadowViewsAnimated:(BOOL)a0;

@end
