@interface TPNumberPadDynamicButton : TPNumberPadButton

@property (class, readonly, nonatomic) long long currentStyle;

+ (double)unhighlightedCircleViewAlpha;
+ (double)highlightedCircleViewAlpha;
+ (BOOL)usesTelephonyGlyphsWhereAvailable;
+ (id)imageForCharacter:(long long)a0;
+ (id)imageForCharacter:(long long)a0 highlighted:(BOOL)a1;

- (id)initForCharacter:(long long)a0;
- (id)buttonColor;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateCurrentStyleIfNecessaryFromStyle:(long long)a0;

@end
