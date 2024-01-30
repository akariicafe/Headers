@class UIColor;

@interface _SFNavigationBarTheme : _SFBarTheme

@property (readonly, nonatomic) long long platterOverrideUserInterfaceStyle;
@property (readonly, nonatomic) long long platterTextFieldOverrideUserInterfaceStyle;
@property (readonly, nonatomic) long long platterKeyboardOverrideAppearance;
@property (readonly, nonatomic) BOOL backdropIsExtreme;
@property (readonly, nonatomic) BOOL backdropIsRed;
@property (readonly, nonatomic) BOOL backdropIsGreen;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) UIColor *secureTextColor;
@property (readonly, nonatomic) UIColor *warningTextColor;
@property (readonly, nonatomic) UIColor *annotationTextColor;
@property (readonly, nonatomic) UIColor *progressBarTintColor;
@property (readonly, nonatomic) BOOL platterBackdropIsDark;
@property (readonly, nonatomic) UIColor *platterTextColor;
@property (readonly, nonatomic) UIColor *platterSecureTextColor;
@property (readonly, nonatomic) UIColor *platterWarningTextColor;
@property (readonly, nonatomic) UIColor *platterAnnotationTextColor;
@property (readonly, nonatomic) UIColor *platterPlaceholderTextColor;
@property (readonly, nonatomic) UIColor *platterSelectionColor;

- (id)initWithBarTintStyle:(long long)a0 preferredBarTintColor:(id)a1 controlsTintColor:(id)a2;
- (id)URLAccessoryButtonTintColorForInputMode:(unsigned long long)a0;
- (id)platterTextColorForPlatterAlpha:(double)a0;
- (id)platterWarningTextColorForPlatterAlpha:(double)a0;
- (void).cxx_destruct;
- (id)_colorForPlatterTextColor:(id)a0 regularColor:(id)a1 withPlatterAlpha:(double)a2;
- (id)annotationTextColorForPlatterAlpha:(double)a0;
- (id)platterSecureTextColorForPlatterAlpha:(double)a0;

@end
