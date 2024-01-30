@class UIColor, NSArray, UIBlurEffect;

@interface _SFBarTheme : NSObject {
    UIColor *_preferredControlsTintColor;
}

@property (readonly, nonatomic) BOOL backdropIsDark;
@property (readonly, nonatomic) BOOL backdropIsTinted;
@property (readonly, nonatomic) unsigned long long tintStyle;
@property (readonly, nonatomic) UIColor *controlsTintColor;
@property (readonly, nonatomic) UIColor *preferredBarTintColor;
@property (readonly, nonatomic) long long overrideUserInterfaceStyle;
@property (readonly, nonatomic) UIBlurEffect *backdropEffect;
@property (readonly, nonatomic) NSArray *backdropAdjustmentEffects;
@property (readonly, nonatomic) _SFBarTheme *fallbackTheme;

+ (id)themeWithBarTintStyle:(unsigned long long)a0 preferredBarTintColor:(id)a1 controlsTintColor:(id)a2;
+ (id)themeWithBarTintStyle:(unsigned long long)a0;
+ (id)themeWithTheme:(id)a0;

- (void).cxx_destruct;
- (id)initWithBarTintStyle:(unsigned long long)a0 preferredBarTintColor:(id)a1 controlsTintColor:(id)a2;
- (void)applyBackdropEffectsToView:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
