@interface OKWidgetLabelViewProxy : OKWidgetView <OKWidgetLabelViewProxyExports> {
    id _label;
}

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;

- (BOOL)prepareForDisplay:(BOOL)a0;
- (id)valueForUndefinedKey:(id)a0;
- (id)label;
- (id)initWithWidget:(id)a0;
- (void)dealloc;
- (id)settingObjectForKey:(id)a0;
- (BOOL)prepareForWarmup:(BOOL)a0;
- (BOOL)prepareForUnload:(BOOL)a0;
- (id)layoutSettingsKeys;
- (id)settingFontName;
- (void)setSettingFontName:(id)a0;
- (float)settingFontSize;
- (void)setSettingFontSize:(float)a0;
- (id)settingTextColor;
- (void)setSettingTextColor:(id)a0;
- (void)setSettingTextBackgroundColor:(id)a0;
- (long long)settingTextAlignment;
- (void)setSettingTextAlignment:(long long)a0;
- (id)settingText;
- (void)setSettingText:(id)a0;

@end
