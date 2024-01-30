@class UIColor, NSString;

@interface SBPasscodeNumberPadButton : TPNumberPadDarkStyleButton <SBUIPasscodeNumberPadButton>

@property (retain, nonatomic) UIColor *reduceTransparencyButtonColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })defaultSize;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })paddingOutsideRing;
+ (double)_numberPadButtonOuterCircleDiameter;
+ (int)_characterTypeForCharacter:(long long)a0;
+ (id)_stringCharacterForCharacter:(long long)a0;
+ (BOOL)_shouldUseAlternativeCirlceViewAlphas;
+ (double)outerCircleDiameter;
+ (double)unhighlightedCircleViewAlpha;
+ (double)highlightedCircleViewAlpha;

- (id)initForCharacter:(long long)a0;
- (void).cxx_destruct;
- (void)conformsToSBUIPasscodeNumberPadButton;
- (int)characterType;
- (id)stringCharacter;

@end
