@class UIVisualEffect;
@protocol HFIconDescriptor, HUIconContentViewDelegate;

@interface HUIconContentView : UIView

@property (nonatomic) long long renderingMode;
@property (retain, nonatomic) id<HFIconDescriptor> iconDescriptor;
@property (nonatomic) long long primaryState;
@property (nonatomic) double aspectRatio;
@property (retain, nonatomic) UIVisualEffect *vibrancyEffect;
@property (weak, nonatomic) id<HUIconContentViewDelegate> delegate;
@property (nonatomic) unsigned long long iconSize;
@property (nonatomic) unsigned long long displayContext;
@property (nonatomic) BOOL disableContinuousAnimation;
@property (readonly, nonatomic) unsigned long long displayStyle;

+ (id)iconImageNamed:(id)a0 withSize:(unsigned long long)a1 displayStyle:(unsigned long long)a2;
+ (Class)iconContentViewClassForIconDescriptor:(id)a0;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDisplayStyle:(unsigned long long)a0;
- (BOOL)wantsManagedVibrancyEffect;
- (id)managedVisualEffectViews;
- (void)updateWithIconDescriptor:(id)a0 displayStyle:(unsigned long long)a1 animated:(BOOL)a2;
- (void)invalidateRenderingMode;
- (long long)renderingModeForSubview:(id)a0 suggestedRenderingMode:(long long)a1;
- (BOOL)shouldFlipForRTL;
- (void)_updateOverrideRenderingModeForSubviewsOfView:(id)a0;

@end
