@class OFLinearGradientView, NSArray;

@interface OKWidgetLinearGradientView : OKWidgetView <OKWidgetLinearGradientViewProxyExports> {
    OFLinearGradientView *_gradientView;
    NSArray *_gradientColors;
    NSArray *_gradientLocations;
}

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;

- (BOOL)prepareForDisplay:(BOOL)a0;
- (id)valueForUndefinedKey:(id)a0;
- (id)initWithWidget:(id)a0;
- (void)dealloc;
- (id)settingObjectForKey:(id)a0;
- (BOOL)prepareForWarmup:(BOOL)a0;
- (BOOL)prepareForUnload:(BOOL)a0;
- (void)setAntialiasing:(BOOL)a0;
- (void)updateGradient;
- (id)settingGradientLocations;
- (void)setSettingGradientLocations:(id)a0;
- (id)settingGradientColors;
- (void)setSettingGradientColors:(id)a0;
- (BOOL)settingOpaque;
- (struct CGPoint { double x0; double x1; })settingStartPoint;
- (void)setSettingStartPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })settingEndPoint;
- (void)setSettingEndPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setSettingOpaque:(BOOL)a0;

@end
