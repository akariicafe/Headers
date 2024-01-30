@interface KeyboardBacklightHIDCurveNits : KeyboardBacklightHIDCurve

@property (readonly) float level;

- (void)dealloc;
- (float)brightness;
- (void)setBrightness:(float)a0;
- (id)initWithQueue:(id)a0 device:(id)a1;
- (float)maxLevelPercentage;
- (void)setBrightness:(float)a0 withFadeSpeed:(int)a1 commit:(BOOL)a2;
- (float)convertNitsToLevelPercentage:(float)a0;
- (float)maxCapableNits;
- (float)minCapableNits;

@end
