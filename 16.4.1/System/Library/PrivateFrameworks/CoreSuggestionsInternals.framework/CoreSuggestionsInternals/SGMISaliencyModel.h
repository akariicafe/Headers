@interface SGMISaliencyModel : NSObject

+ (id)defaultModel;
+ (id)getSaliencyOutputOf:(id)a0 forArray:(id)a1;
+ (long long)ruleBasedInferenceFor:(id)a0;
+ (long long)ruleBasedInferenceFor:(id)a0 config:(id)a1;
+ (id)saliencyForFeatureVector:(id)a0;
+ (double)saliencyThreshold;

@end
