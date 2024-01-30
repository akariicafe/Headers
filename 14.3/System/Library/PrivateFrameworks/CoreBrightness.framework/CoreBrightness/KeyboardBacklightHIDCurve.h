@class NSDictionary;

@interface KeyboardBacklightHIDCurve : KeyboardBacklight

@property (readonly) NSDictionary *brightnessCurve;
@property (readonly) float maxCurveNits;
@property (readonly) float chicletCurveCoefficient;
@property (readonly) float chicletCurvePower;
@property (readonly) float level;
@property (readonly) float maxLevelPercentage;
@property (readonly) float maxCapableNits;
@property (readonly) float minCapableNits;

- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (id)description;
- (float)brightness;
- (void)setBrightness:(float)a0;
- (id)initWithQueue:(id)a0 device:(id)a1;
- (void)updateLuxToNitsCurve;
- (void)setBrightness:(float)a0 withFadeSpeed:(int)a1 commit:(BOOL)a2;
- (float)convertNitsToLevelPercentage:(float)a0;
- (void)getKeyboardBacklightPreferences;
- (void)storeKeyboardBacklightPreferences;
- (float)currentLuxToAmbient;
- (void)calculateLevelPercentageAtAmbient:(float)a0;
- (void)handleLuxUpdate:(float)a0;
- (float)maxUserLevel;
- (BOOL)isBrightnessCurveValid:(id)a0;
- (void)updateBrightnessCurve:(id)a0;
- (void)storeKeyboardBacklightCurveToPreferences;
- (float)currentLuxToNits;
- (float)perceptualBrightnessForLevel:(float)a0;
- (float)convertPWMPercentageToNits:(float)a0;

@end
