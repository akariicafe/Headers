@interface TPNumberPadLightStyleButton : TPNumberPadButton

+ (double)unhighlightedCircleViewAlpha;
+ (double)highlightedCircleViewAlpha;
+ (BOOL)usesTelephonyGlyphsWhereAvailable;
+ (id)imageForCharacter:(long long)a0;
+ (id)imageForCharacter:(long long)a0 highlighted:(BOOL)a1;

- (id)buttonColor;
- (id)defaultColor;

@end
