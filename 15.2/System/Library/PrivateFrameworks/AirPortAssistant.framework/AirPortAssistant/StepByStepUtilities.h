@interface StepByStepUtilities : NSObject

+ (id)getProductLocalizedStringWithFormat:(id)a0 fromParamDict:(id)a1;
+ (long long)selectorChoiceToMatrixTag:(int)a0;
+ (long long)autoGuessRecommendationToMatrixTag:(id)a0;
+ (int)matrixTagToSelectorChoice:(long long)a0;
+ (id)nameForNetworkOrDevice:(id)a0;
+ (id)productIDForNetworkOrDevice:(id)a0;
+ (id)selectorChoiceToReplaceOption:(int)a0;
+ (void)formatRecommendation:(id)a0 fromParamDict:(id)a1 forStep:(int)a2 restoreString:(id *)a3 restoreSpecificString:(id *)a4 dontRecommendString:(id *)a5;
+ (unsigned int)getProductIDFromParamDict:(id)a0;
+ (int)getDeviceKindFromParamDict:(id)a0;
+ (id)findSourceBaseByName:(id)a0 fromParamDict:(id)a1;
+ (id)findSourceBaseByRadioName:(id)a0 fromParamDict:(id)a1;
+ (id)findSourceNetworkByName:(id)a0 fromParamDict:(id)a1;
+ (id)findSourceConfigByName:(id)a0 fromParamDict:(id)a1;

@end
