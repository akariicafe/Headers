@class UIColor, NSArray, UIBlurEffect;

@interface _SFBarTheme : NSObject {
    UIColor *_preferredControlsTintColor;
}

@property (class, readonly, nonatomic) BOOL canTintPrivateStyles;
@property (class, readonly, nonatomic) BOOL prefersThemeColorEffect;

@property (readonly, nonatomic) BOOL backdropIsDark;
@property (readonly, nonatomic) BOOL backdropIsTinted;
@property (readonly, nonatomic) long long tintStyle;
@property (readonly, nonatomic) UIColor *controlsTintColor;
@property (readonly, nonatomic) UIColor *preferredBarTintColor;
@property (readonly, nonatomic) UIColor *platterProgressBarTintColor;
@property (readonly, nonatomic) long long overrideUserInterfaceStyle;
@property (readonly, nonatomic) UIBlurEffect *backdropEffect;
@property (readonly, nonatomic) NSArray *backdropEffects;
@property (readonly, nonatomic) NSArray *backdropAdjustmentEffects;
@property (readonly, nonatomic) _SFBarTheme *fallbackTheme;

+ (id)themeWithBarTintStyle:(long long)a0;
+ (id)themeWithTheme:(id)a0;
+ (id)themeWithBarTintStyle:(long long)a0 preferredBarTintColor:(id)a1 controlsTintColor:(id)a2;
+ (id)backdropEffectForStyle:(long long)a0;
+ (BOOL)backdropIsDarkForStyle:(long long)a0;
+ (id)controlsTintColorForStyle:(long long)a0;

- (id)initWithBarTintStyle:(long long)a0 preferredBarTintColor:(id)a1 controlsTintColor:(id)a2;
- (void)applyBackdropEffectsToView:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
