@class UIImageView, UIVisualEffectView, HUNonAnimatingTintImageView, HUDynamicStateAnimationApplier;

@interface HUFanIconContentView : HUIconContentView

@property (retain, nonatomic) UIImageView *baseView;
@property (retain, nonatomic) HUNonAnimatingTintImageView *bladesView;
@property (retain, nonatomic) UIVisualEffectView *baseVisualEffectView;
@property (retain, nonatomic) UIVisualEffectView *bladesVisualEffectView;
@property (nonatomic) unsigned long long rotationState;
@property (nonatomic) double rotationSpeed;
@property (retain, nonatomic) HUDynamicStateAnimationApplier *speedRampApplier;

- (void)setIconSize:(unsigned long long)a0;
- (void)layoutSubviews;
- (void)setVibrancyEffect:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateImages;
- (void)updateWithIconDescriptor:(id)a0 displayStyle:(unsigned long long)a1 animated:(BOOL)a2;
- (BOOL)wantsManagedVibrancyEffect;
- (void)setDisableContinuousAnimation:(BOOL)a0;
- (BOOL)shouldFlipForRTL;
- (void)_updateRotationAnimationFromState:(unsigned long long)a0 shouldRampSpeed:(BOOL)a1;
- (void)_updateVisualEffects;
- (void)_setBladesLayerSpeed:(float)a0;
- (void)_rampBladesLayerToRotationSpeedAnimated:(BOOL)a0;

@end
