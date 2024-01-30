@interface _PSBehaviorRuleRankingUtilities : NSObject

+ (id)getAdaptedCompiledMLModelPath;
+ (id)loadAdaptableModelConfig:(id)a0;
+ (id)loadMLModel:(id)a0 modelConfig:(id)a1;
+ (id)getDeployedAdaptableCompiledMLModelPath;
+ (id)batchPredictWithAdaptedMLModel:(id)a0 psConfigForAdaptableModel:(id)a1 featurizedRules:(id)a2;
+ (id)reformatFeaturesInFeaturizedBehaviorRuleArray:(id)a0;
+ (id)getTrialCompiledAdaptableMLModelPath;
+ (BOOL)copyFileFromURL:(id)a0 toURL:(id)a1;
+ (id)predictWithMLModel:(id)a0 featureDictArray:(id)a1;
+ (id)getZippedDefaultAdaptableModelPath;
+ (id)getAdaptedModelRecipeVersionFilePath;
+ (id)getDeployedCompiledMLModelPath;
+ (id)getArchivedDefaultAdaptableModelPath;
+ (id)batchPredictWithAdaptedMLModel:(id)a0 psConfigForAdaptableModel:(id)a1 featureDictArray:(id)a2;
+ (id)loadMLModelConfigurationWithConfigDict:(id)a0;
+ (id)getDeployedCompiledMLModelPathForContactRanker;
+ (id)unzipFileWithPath:(id)a0 toFileName:(id)a1 toFolderPath:(id)a2;
+ (id)getTrialCompiledMLModelPathForContactRanker;
+ (BOOL)copyZippedAdaptableModel:(id)a0;
+ (id)getTrialCompiledMLModelPath;
+ (BOOL)loadDeployedAdaptableModelUnderDirectory:(id)a0;
+ (id)reformatFeaturesInFeatureDictArray:(id)a0;
+ (id)batchPredictWithMLModel:(id)a0 featureArrayDict:(id)a1;
+ (BOOL)removeFolderAtPath:(id)a0;
+ (id)compileMLModelAtPath:(id)a0;
+ (id)getIntermediateAdaptableCompiledMLModel;

@end
