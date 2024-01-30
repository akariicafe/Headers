@class UIColor, NSString;

@interface SBLightPasscodeNumberPadButton : TPNumberPadLightStyleButton <SBUIPasscodeNumberPadButton>

@property (retain, nonatomic) UIColor *reduceTransparencyButtonColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })defaultSize;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })paddingOutsideRing;
+ (double)_numberPadButtonOuterCircleDiameter;
+ (BOOL)_shouldUseAlternativeCirlceViewAlphas;
+ (double)unhighlightedCircleViewAlpha;
+ (double)highlightedCircleViewAlpha;
+ (BOOL)usesTelephonyGlyphsWhereAvailable;

- (id)initForCharacter:(long long)a0;
- (void).cxx_destruct;
- (void)conformsToSBUIPasscodeNumberPadButton;
- (int)characterType;
- (id)stringCharacter;

@end
