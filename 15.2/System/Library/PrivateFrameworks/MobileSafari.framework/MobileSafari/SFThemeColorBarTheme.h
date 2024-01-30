@class UIColor, NSString, UIBlurEffect, UITraitCollection;

@interface SFThemeColorBarTheme : _SFBarTheme

@property (readonly, nonatomic) UIColor *themeColor;
@property (readonly, nonatomic) UIColor *overrideTintColor;
@property (readonly, nonatomic) long long userInterfaceStyle;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic) BOOL appliesDarkeningOverlay;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (retain, nonatomic) UIBlurEffect *overrideBackdropEffect;

+ (BOOL)canTintPrivateStyles;
+ (BOOL)prefersThemeColorEffect;

- (id)backdropEffects;
- (id)initWithBarTintStyle:(long long)a0 preferredBarTintColor:(id)a1 controlsTintColor:(id)a2;
- (id)backdropEffect;
- (void)applyBackdropEffectsToView:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
