@class NSString, UIVisualEffectView, HUAnimatableFilterImageView;

@interface HULightbulbIconContentView : HUIconContentView

@property (nonatomic) double brightness;
@property (nonatomic, getter=isOn) BOOL on;
@property (copy, nonatomic) NSString *lastUsedIconIdentifier;
@property (retain, nonatomic) UIVisualEffectView *vibrantBaseEffectView;
@property (retain, nonatomic) UIVisualEffectView *vibrantOutlineEffectView;
@property (retain, nonatomic) HUAnimatableFilterImageView *vibrantBulbView;
@property (retain, nonatomic) HUAnimatableFilterImageView *coloredBulbView;
@property (retain, nonatomic) HUAnimatableFilterImageView *vibrantBaseView;
@property (retain, nonatomic) HUAnimatableFilterImageView *coloredBaseView;

- (void)setIconSize:(unsigned long long)a0;
- (void)layoutSubviews;
- (void)setVibrancyEffect:(id)a0;
- (void)setDisplayContext:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)_allImageViews;
- (void)_updateImages;
- (void)updateWithIconDescriptor:(id)a0 displayStyle:(unsigned long long)a1 animated:(BOOL)a2;
- (BOOL)wantsManagedVibrancyEffect;
- (void)_updateDisplayContextState;
- (void)_updateBulbState;
- (void)_updateVisualEffect;
- (long long)renderingModeForSubview:(id)a0 suggestedRenderingMode:(long long)a1;

@end
