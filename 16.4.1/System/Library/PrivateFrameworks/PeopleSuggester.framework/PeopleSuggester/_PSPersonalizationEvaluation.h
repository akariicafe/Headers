@class NSNumber, ODCurareEvaluationAndReportingModule, NSURL, NSString, NSMutableDictionary, NSDictionary, NSMutableArray, NSUserDefaults, MLModelConfiguration;
@protocol _DKKnowledgeQuerying;

@interface _PSPersonalizationEvaluation : NSObject

@property (retain, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore;
@property (retain, nonatomic) NSMutableDictionary *featureNameDict;
@property (retain, nonatomic) NSDictionary *selectedFeaturesConfig;
@property (retain, nonatomic) NSMutableArray *results;
@property (retain, nonatomic) MLModelConfiguration *adaptableModelConfiguration;
@property (retain, nonatomic) NSURL *intermediateCompiledModelURL;
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
@property (nonatomic) BOOL evaluateIsInvokedOnce;
@property (copy, nonatomic) id /* block */ shouldContinue;
@property (readonly, nonatomic) NSDictionary *recipe;
@property (retain, nonatomic) NSString *adaptableModelDeployPath;
@property (nonatomic) long long adaptationStrategy;
@property (retain, nonatomic) NSMutableDictionary *modelTagToHyperparameters;
@property (retain, nonatomic) NSMutableDictionary *modelTagToCandidateModel;

- (void).cxx_destruct;
- (void)setParametersForHyperparmeters:(id)a0;
- (id)_getDataStatistics:(id)a0 forData:(id)a1;
- (void)adaptMLModel:(id)a0 withMLModelType:(id)a1 withDataArray:(id)a2 modelConfiguration:(id)a3;
- (void)adaptMLModel:(id)a0 withTrainingData:(id)a1 modelConfiguration:(id)a2;
- (BOOL)cloneAdaptableModel:(id)a0 toFilePath:(id)a1 originalXgboostModelName:(id)a2 clonedXgboostModelName:(id)a3;
- (id)createMLArrayBatchProviderWithMLModelType:(id)a0 withDataArray:(id)a1;
- (id)createMLFeatureProviderArrayFromSingleShareEventData:(id)a0 forMLModel:(id)a1;
- (id)evaluateWithModel:(id)a0;
- (void)generateCandidateModels;
- (id)hyperparametersForCandidateModel:(id)a0;
- (id)initWithRecipe:(id)a0 knowledgeStore:(id)a1 shouldContinueBlock:(id /* block */)a2;
- (id)loadAdaptableModelUnderDirectory:(id)a0;
- (id)loadDefaultModel;
- (BOOL)performPrerequisitesBeforeAdaptationWithFeaturesConfigDeployPath:(id)a0;
- (id)personalizeModel:(id)a0;
- (id)processDataWithQuery:(id)a0 balanceNeed:(BOOL)a1;
- (id)runAdaptationAndEvaluation;
- (id)runAdaptationAndEvaluationWithFeaturesConfigDeployPath:(id)a0 adaptableModelDeployPath:(id)a1;
- (void)setLastDayOfAdaptation:(id)a0;
- (void)setParametersFromRecipe;
- (void)setParametersFromRecipeForCandidateModel:(id)a0;
- (void)updateAdaptableModelConfigWithUpdateType:(long long)a0 numTrees:(id)a1;
- (void)updateMLModelWithURL:(id)a0 withMLModelType:(id)a1 withDataArray:(id)a2 modelConfiguration:(id)a3;

@end
