@interface _PSBehaviorRuleRankingUtilities : NSObject

+ (id)batchPredictWithAdaptedMLModel:(id)a0 psConfigForAdaptableModel:(id)a1 featureDictArray:(id)a2;
+ (id)batchPredictWithAdaptedMLModel:(id)a0 psConfigForAdaptableModel:(id)a1 featurizedRules:(id)a2;
+ (id)batchPredictWithMLModel:(id)a0 featureArrayDict:(id)a1;
+ (id)compileMLModelAtPath:(id)a0;
+ (BOOL)copyFileFromURL:(id)a0 toURL:(id)a1;
+ (BOOL)copyZippedAdaptableModel:(id)a0;
+ (id)getAdaptedCompiledMLModelPath;
+ (id)getAdaptedModelRecipeVersionFilePath;
+ (id)getArchivedDefaultAdaptableModelPath;
+ (id)getDeployedAdaptableCompiledMLModelPath;
+ (id)getDeployedCompiledMLModelPath;
+ (id)getDeployedCompiledMLModelPathForContactRanker;
+ (id)getIntermediateAdaptableCompiledMLModel;
+ (id)getTrialCompiledAdaptableMLModelPath;
+ (id)getTrialCompiledMLModelPath;
+ (id)getTrialCompiledMLModelPathForContactRanker;
+ (id)getZippedDefaultAdaptableModelPath;
+ (id)loadAdaptableModelConfig:(id)a0;
+ (BOOL)loadDeployedAdaptableModelUnderDirectory:(id)a0;
+ (id)loadMLModel:(id)a0 modelConfig:(id)a1;
+ (id)loadMLModelConfigurationWithConfigDict:(id)a0;
+ (id)predictWithMLModel:(id)a0 featureDictArray:(id)a1;
+ (id)reformatFeaturesInFeatureDictArray:(id)a0;
+ (id)reformatFeaturesInFeaturizedBehaviorRuleArray:(id)a0;
+ (BOOL)removeFolderAtPath:(id)a0;
+ (id)unzipFileWithPath:(id)a0 toFileName:(id)a1 toFolderPath:(id)a2;

@end
