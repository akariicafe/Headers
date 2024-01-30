@class OFLinearGradientView, NSArray;

@interface OKWidgetLinearGradientView : OKWidgetView <OKWidgetLinearGradientViewProxyExports> {
    OFLinearGradientView *_gradientView;
    NSArray *_gradientColors;
    NSArray *_gradientLocations;
}

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (BOOL)prepareForDisplay:(BOOL)a0;
- (id)initWithWidget:(id)a0;
- (void)dealloc;
- (id)settingObjectForKey:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)updateGradient;
- (struct CGPoint { double x0; double x1; })settingEndPoint;
- (BOOL)prepareForUnload:(BOOL)a0;
- (BOOL)prepareForWarmup:(BOOL)a0;
- (void)setAntialiasing:(BOOL)a0;
- (void)setSettingEndPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setSettingGradientColors:(id)a0;
- (void)setSettingGradientLocations:(id)a0;
- (void)setSettingOpaque:(BOOL)a0;
- (void)setSettingStartPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)settingGradientColors;
- (id)settingGradientLocations;
- (BOOL)settingOpaque;
- (struct CGPoint { double x0; double x1; })settingStartPoint;

@end
