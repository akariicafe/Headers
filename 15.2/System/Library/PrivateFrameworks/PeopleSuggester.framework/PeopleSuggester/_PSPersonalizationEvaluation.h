@class NSNumber, ODCurareEvaluationAndReportingModule, NSURL, NSString, NSMutableDictionary, NSDictionary, NSMutableArray, NSUserDefaults, MLModelConfiguration;
@protocol _DKKnowledgeQuerying;

@interface _PSPersonalizationEvaluation : NSObject

@property (retain, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore;
@property (retain, nonatomic) NSMutableArray *featureDateForAllShareEvents;
@property (retain, nonatomic) NSMutableArray *featureDateForShareEventsSinceLastAdaptation;
@property (retain, nonatomic) NSMutableDictionary *featureNameDict;
@property (retain, nonatomic) NSMutableArray *featureMatricesForAllShareEvents;
@property (retain, nonatomic) NSMutableArray *sampledFeatureVectors;
@property (retain, nonatomic) NSMutableDictionary *sampledFeatureVectorsForSplits;
@property (retain, nonatomic) NSDictionary *selectedFeaturesConfig;
@property (retain, nonatomic) NSMutableArray *results;
@property (retain, nonatomic) MLModelConfiguration *adaptableModelConfiguration;
@property (retain, nonatomic) NSURL *intermediateCompiledModelURL;
@property (retain, nonatomic) NSNumber *trainDataCount;
@property (retain, nonatomic) NSNumber *testDataCount;
@property (retain, nonatomic) NSNumber *batchSize;
@property (retain, nonatomic) NSNumber *topN;
@property (retain, nonatomic) NSNumber *epoc;
@property (retain, nonatomic) NSNumber *evaluationIterationCount;
@property (retain, nonatomic) NSNumber *testSplitPercent;
@property (retain, nonatomic) NSNumber *swapOK;
@property (retain, nonatomic) NSNumber *accuracyGainThresholdForSwap;
@property (retain, nonatomic) NSNumber *engagementRateGainThresholdForSwap;
@property (retain, nonatomic) NSNumber *minimumTestDataSizeForSwap;
@property (retain, nonatomic) NSNumber *numClasses;
@property (retain, nonatomic) NSNumber *numTrees;
@property (retain, nonatomic) NSNumber *maxDepth;
@property (retain, nonatomic) NSNumber *learningRate;
@property (retain, nonatomic) NSNumber *minChildWeight;
@property (retain, nonatomic) NSNumber *recipeID;
@property (retain, nonatomic) NSNumber *minSampleCountForAdaptation;
@property (retain, nonatomic) NSUserDefaults *psAdaptationDefaults;
@property (retain, nonatomic) ODCurareEvaluationAndReportingModule *curareEvaluationAndReporting;
@property (retain, nonatomic) NSMutableDictionary *modelTagToHyperparameters;
@property (retain, nonatomic) NSMutableDictionary *modelTagToCandidateModel;
@property (readonly, nonatomic) NSDictionary *recipe;
@property (retain, nonatomic) NSString *adaptableModelDeployPath;
@property (nonatomic) long long adaptationStrategy;

- (BOOL)isAdaptedModelCreated;
- (void).cxx_destruct;
- (unsigned long long)bucketedValue:(unsigned long long)a0;
- (id)loadDefaultModel;
- (id)runAdaptationAndEvaluationWithFeaturesConfigDeployPath:(id)a0 adaptableModelDeployPath:(id)a1;
- (void)setParametersFromRecipe;
- (void)processData;
- (id)processDataWithQuery:(id)a0;
- (id)createMLFeatureProviderArrayFromSingleShareEventData:(id)a0 forMLModel:(id)a1;
- (id)_getDataStatistics:(id)a0 forData:(id)a1;
- (void)adaptMLModel:(id)a0 withMLModelType:(id)a1 withDataArray:(id)a2 modelConfiguration:(id)a3;
- (id)createMLArrayBatchProviderWithMLModelType:(id)a0 withDataArray:(id)a1;
- (void)adaptMLModel:(id)a0 withTrainingData:(id)a1 modelConfiguration:(id)a2;
- (void)setParametersFromRecipeForCandidateModel:(id)a0;
- (id)loadAdaptableModelUnderDirectory:(id)a0;
- (void)updateMLModelWithURL:(id)a0 withMLModelType:(id)a1 withDataArray:(id)a2 modelConfiguration:(id)a3;
- (id)hyperparametersForCandidateModel:(id)a0;
- (void)setParametersForHyperparmeters:(id)a0;
- (void)updateAdaptableModelConfigWithUpdateType:(long long)a0 numTrees:(id)a1;
- (BOOL)performPrerequisitesBeforeAdaptationWithFeaturesConfigDeployPath:(id)a0;
- (void)generateCandidateModels;
- (BOOL)cloneAdaptableModel:(id)a0 toFilePath:(id)a1 originalXgboostModelName:(id)a2 clonedXgboostModelName:(id)a3;
- (id)createMLFeatureProviderInstanceForMLModelType:(id)a0 forFeatureVector:(id)a1;
- (id)createMLArrayBatchProviderOverDataSplitType:(id)a0 mlModelType:(id)a1;
- (id)measureTestAccuracyOf:(id)a0 againstTrueValuesOf:(id)a1 labelName:(id)a2;
- (void)adaptMLModel:(id)a0 overDataSplit:(id)a1 dataStartingIndex:(long long)a2 dataLength:(long long)a3;
- (id)engagementSimulationWithMLModel:(id)a0 mlModelType:(id)a1 labelName:(id)a2;
- (id)createMLArrayBatchProviderOverDataSplitType:(id)a0 mlModelType:(id)a1 dataStartingIndex:(long long)a2 dataLength:(long long)a3;
- (id)_getRecentUserData;
- (id)_getDataStatistics:(id)a0;
- (void)sampleFromDataWithSeed:(int)a0;
- (void)getSamplesWithTestSplitPercentWithSeed:(int)a0;
- (id)updateMLModelWithURL:(id)a0 overDataSplit:(id)a1;
- (id)evaluateClassicMLModel:(id)a0;
- (id)initWithRecipe:(id)a0 knowledgeStore:(id)a1;
- (void)setLastDayOfAdaptation:(id)a0;
- (id)runAdaptationAndEvaluation;
- (id)evaluateWithModel:(id)a0;
- (id)personalizeModel:(id)a0;
- (id)allUserDataDefault;
- (id)allUserDataAdapted;
- (id)personalize;
- (id)evaluateWithModel:(id)a0 dataArray:(id)a1 modelType:(unsigned long long)a2;

@end
