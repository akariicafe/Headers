@interface OKWidgetLabelView : OKWidgetLabelViewProxy

+ (id)supportedSettings;

- (id)initWithWidget:(id)a0;
- (id)settingAttributedText;
- (void)setSettingAttributedText:(id)a0;
- (void)setSettingFontFileName:(id)a0;
- (void)setSettingBaselineAdjustment:(long long)a0;
- (long long)settingBaselineAdjustment;
- (id)settingTextShadowColor;
- (void)setSettingTextShadowColor:(id)a0;
- (struct CGSize { double x0; double x1; })settingTextShadowOffset;
- (void)setSettingTextShadowOffset:(struct CGSize { double x0; double x1; })a0;
- (long long)settingNumberOfLine;
- (void)setSettingNumberOfLines:(long long)a0;
- (BOOL)settingAdjustsFontSizeToFitWidth;
- (void)setSettingAdjustsFontSizeToFitWidth:(BOOL)a0;
- (long long)settingLineBreakMode;
- (void)setSettingLineBreakMode:(long long)a0;
- (float)settingMinimumScaleFactor;
- (void)setSettingMinimumScaleFactor:(float)a0;

@end
