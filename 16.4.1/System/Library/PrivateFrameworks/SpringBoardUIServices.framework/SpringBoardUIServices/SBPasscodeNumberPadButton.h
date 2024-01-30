@class UIColor, NSString;

@interface SBPasscodeNumberPadButton : TPNumberPadDarkStyleButton <SBUIPasscodeNumberPadButton>

@property (retain, nonatomic) UIColor *reduceTransparencyButtonColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })defaultSize;
+ (int)_characterTypeForCharacter:(long long)a0;
+ (double)_numberPadButtonOuterCircleDiameter;
+ (BOOL)_shouldUseAlternativeCirlceViewAlphas;
+ (id)_stringCharacterForCharacter:(long long)a0;
+ (double)highlightedCircleViewAlpha;
+ (double)outerCircleDiameter;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })paddingOutsideRing;
+ (double)unhighlightedCircleViewAlpha;

- (void).cxx_destruct;
- (id)stringCharacter;
- (int)characterType;
- (void)conformsToSBUIPasscodeNumberPadButton;
- (id)initForCharacter:(long long)a0;

@end
