@class TDEffectRenditionSpec, NSSet, TDEffectType;

@interface TDEffectComponent : NSManagedObject

@property (retain, nonatomic) TDEffectRenditionSpec *rendition;
@property (retain, nonatomic) NSSet *parameters;
@property (retain, nonatomic) TDEffectType *effectType;
@property (nonatomic) BOOL isEnabled;

+ (id)keyPathsForValuesAffectingCUIEffectParameterColor1;
+ (id)keyPathsForValuesAffectingCUIEffectParameterColor2;
+ (id)keyPathsForValuesAffectingCUIEffectParameterOpacity;
+ (id)keyPathsForValuesAffectingCUIEffectParameterOpacity2;
+ (id)keyPathsForValuesAffectingCUIEffectParameterBlurSize;
+ (id)keyPathsForValuesAffectingCUIEffectParameterOffset;
+ (id)keyPathsForValuesAffectingCUIEffectParameterAngle;
+ (id)keyPathsForValuesAffectingCUIEffectParameterBlendMode;
+ (id)keyPathsForValuesAffectingCUIEffectParameterSoftenSize;
+ (id)keyPathsForValuesAffectingCUIEffectParameterSpread;
+ (id)keyPathsForValuesAffectingCUIEffectParameterTintable;
+ (id)keyPathsForValuesAffectingCUIEffectParameterBevelStyle;

- (id)parameterOfType:(unsigned int)a0;
- (void)setEffectParametersFromPreset:(id)a0 atIndex:(unsigned long long)a1 withDocument:(id)a2;
- (void)updatePresetParameters:(id)a0 atIndex:(unsigned long long)a1;
- (void)addParametersToPreset:(id)a0;
- (id)CUIEffectParameterColor1;
- (id)CUIEffectParameterColor2;
- (id)CUIEffectParameterOpacity;
- (id)CUIEffectParameterOpacity2;
- (id)CUIEffectParameterBlurSize;
- (id)CUIEffectParameterOffset;
- (id)CUIEffectParameterAngle;
- (id)CUIEffectParameterBlendMode;
- (id)CUIEffectParameterSoftenSize;
- (id)CUIEffectParameterSpread;
- (id)CUIEffectParameterTintable;
- (id)CUIEffectParameterBevelStyle;

@end
