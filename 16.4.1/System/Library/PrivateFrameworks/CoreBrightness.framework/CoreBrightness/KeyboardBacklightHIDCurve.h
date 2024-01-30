@class NSDictionary;

@interface KeyboardBacklightHIDCurve : KeyboardBacklight {
    int _color;
    float _curveVersion;
}

@property (readonly) NSDictionary *brightnessCurve;
@property (readonly) float maxCurveNits;
@property (readonly) float chicletCurveCoefficient;
@property (readonly) float chicletCurvePower;
@property float luxHysteresis;
@property (readonly) float level;
@property (readonly) float maxLevelPercentage;
@property (readonly) float maxCapableNits;
@property (readonly) float minCapableNits;

- (void)setBacklightLevel:(float)a0;
- (id)copyPropertyForKey:(id)a0;
- (void)setBrightness:(float)a0;
- (float)brightness;
- (int)color;
- (void)dealloc;
- (void)setColor:(int)a0;
- (id)description;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)initWithQueue:(id)a0;
- (BOOL)KBBrightnessLuxHysteresisPropertyHandler:(id)a0;
- (void)getKeyboardBacklightPreferences;
- (BOOL)KBBrightnessCurvePropertyHandler:(id)a0;
- (void)calculateLevelPercentageAtAmbient:(float)a0;
- (float)convertNitsToLevelPercentage:(float)a0;
- (float)convertPWMPercentageToNits:(float)a0;
- (float)currentLuxToAmbient;
- (float)currentLuxToNits;
- (id)defaultBrightnessCurve;
- (void)handleLuxUpdate:(float)a0;
- (id)initWithQueue:(id)a0 device:(id)a1;
- (BOOL)isBrightnessCurveValid:(id)a0;
- (float)maxUserLevel;
- (float)perceptualBrightnessForLevel:(float)a0;
- (void)reconfiguraSettingsForColor:(int)a0;
- (void)setBrightness:(float)a0 withFadeSpeed:(int)a1 commit:(BOOL)a2;
- (void)storeKeyboardBacklightCurveToPreferences;
- (void)storeKeyboardBacklightPreferences;
- (void)updateBrightnessCurve:(id)a0;
- (void)updateDefaultBrightnessCurve:(id)a0;
- (void)updateDefaultCurveForColor:(int)a0;
- (void)updateLuxToNitsCurve;

@end
