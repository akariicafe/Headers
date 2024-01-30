@interface SGModelRules : NSObject

+ (id)_modelsAvailabeForMode:(unsigned long long)a0 objective:(unsigned long long)a1 language:(id)a2;
+ (void)loadBinaryClassificationModelFromMobileAssetForObjective:(unsigned long long)a0 language:(id)a1 withBlock:(id /* block */)a2;
+ (BOOL)shouldCollectTrainingDataForObjective:(unsigned long long)a0 language:(id)a1;

@end
