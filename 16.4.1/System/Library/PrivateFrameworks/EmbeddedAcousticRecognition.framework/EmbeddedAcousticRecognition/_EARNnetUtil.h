@interface _EARNnetUtil : NSObject

+ (void)initialize;
+ (id)doBackPropWithNnetModelFile:(id)a0 inputFeatureVector:(id)a1 inputTargetVector:(id)a2 inputLearningRate:(float)a3 inputFreezeComponents:(id)a4 inputNumLocalIterations:(int)a5 inputGradNormFactor:(float)a6 inputGradNormType:(id)a7 inputBatchSize:(float)a8 inputObjectiveFunction:(id)a9 outTrainingLoss:(float *)a10 outModelLayersUpdated:(id *)a11;
+ (id)doBackPropWithNnetModelFile:(id)a0 inputFeatureVector:(id)a1 inputTargetVector:(id)a2 inputLearningRate:(float)a3 inputFreezeComponents:(id)a4 inputNumLocalIterations:(int)a5 inputGradNormFactor:(float)a6 inputGradNormType:(id)a7 inputBatchSize:(float)a8 inputObjectiveFunction:(id)a9 outTrainingLosses:(id *)a10 outModelLayersUpdated:(id *)a11;

@end
