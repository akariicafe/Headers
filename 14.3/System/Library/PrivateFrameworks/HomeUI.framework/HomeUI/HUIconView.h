@class UIVisualEffect, NSString, UIVisualEffectView, HUIconContentView;
@protocol HFIconDescriptor;

@interface HUIconView : UIView <HUIconContentViewDelegate>

@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) HUIconContentView *currentIconContentView;
@property (nonatomic) double vibrancyEffectAnimationDuration;
@property (nonatomic) long long contentMode;
@property (nonatomic) unsigned long long iconSize;
@property (nonatomic) unsigned long long displayContext;
@property (nonatomic) BOOL disableContinuousAnimation;
@property (retain, nonatomic) UIVisualEffect *vibrancyEffect;
@property (readonly, nonatomic) id<HFIconDescriptor> iconDescriptor;
@property (readonly, nonatomic) unsigned long long displayStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id)contentContainerView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_defaultVibrancyEffect;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateWithIconDescriptor:(id)a0 displayStyle:(unsigned long long)a1 animated:(BOOL)a2;
- (void)setVibrancyEffect:(id)a0 animated:(BOOL)a1;
- (void)iconContentView:(id)a0 didChangeAspectRatio:(double)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentMode:(long long)a1;
- (void)_updateVisualEffectStateForVibrancyEffectChange:(BOOL)a0;
- (void)_updateVisualEffectStateForVibrancyEffectChange:(BOOL)a0 animated:(BOOL)a1;

@end
