@interface _PSBehaviorRuleRankingUtilities : NSObject

+ (id)loadMLModelConfigurationWithConfigDict:(id)a0;
+ (id)getAdaptedModelRecipeVersionFilePath;
+ (id)getAdaptedCompiledMLModelPath;
+ (id)loadMLModel:(id)a0 modelConfig:(id)a1;
+ (id)getTrialCompiledMLModelPath;
+ (id)getDeployedCompiledMLModelPath;
+ (id)reformatFeaturesInFeaturizedBehaviorRuleArray:(id)a0;
+ (id)batchPredictWithMLModel:(id)a0 featureArrayDict:(id)a1;
+ (id)batchPredictWithAdaptedMLModel:(id)a0 psConfigForAdaptableModel:(id)a1 featurizedRules:(id)a2;
+ (id)loadAdaptableModelConfig:(id)a0;
+ (id)compileMLModelAtPath:(id)a0;
+ (BOOL)removeFolderAtPath:(id)a0;
+ (BOOL)copyFileFromURL:(id)a0 toURL:(id)a1;
+ (id)getTrialCompiledAdaptableMLModelPath;
+ (BOOL)copyZippedAdaptableModel:(id)a0;
+ (id)unzipFileWithPath:(id)a0 toFileName:(id)a1 toFolderPath:(id)a2;
+ (id)getDeployedAdaptableCompiledMLModelPath;
+ (id)getZippedDefaultAdaptableModelPath;
+ (id)getIntermediateAdaptableCompiledMLModel;
+ (id)getArchivedDefaultAdaptableModelPath;
+ (id)reformatFeaturesInFeatureDictArray:(id)a0;
+ (id)predictWithMLModel:(id)a0 featureDictArray:(id)a1;
+ (BOOL)loadDeployedAdaptableModelUnderDirectory:(id)a0;
+ (id)batchPredictWithAdaptedMLModel:(id)a0 psConfigForAdaptableModel:(id)a1 featureDictArray:(id)a2;

@end
