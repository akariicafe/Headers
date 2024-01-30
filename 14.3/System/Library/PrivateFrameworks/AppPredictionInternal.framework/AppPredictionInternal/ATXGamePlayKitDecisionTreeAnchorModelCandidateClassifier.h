@class NSString, ATXGamePlayKitDecisionTree, ATXAnchorModelHyperParameters;
@protocol ATXAnchorModelDataStoreWrapperProtocol;

@interface ATXGamePlayKitDecisionTreeAnchorModelCandidateClassifier : ATXNaivePositiveAnchorModelCandidateClassifier <ATXAnchorModelCandidateClassifierProtocol> {
    id<ATXAnchorModelDataStoreWrapperProtocol> _storeWrapper;
    ATXGamePlayKitDecisionTree *_tree;
    ATXAnchorModelHyperParameters *_hyperParameters;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *treeDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configureKeyedArchiver:(id)a0;
+ (void)configureKeyedUnarchiver:(id)a0;

- (BOOL)checkAndReportDecodingFailureIfNeededForBOOL:(BOOL)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)tree;
- (void).cxx_destruct;
- (id)featureNames;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithCoder:(id)a0;
- (void)train;
- (id)trainingData;
- (id)labelKey;
- (void)encodeWithCoder:(id)a0;
- (id)classifyCandidateForAnchorOccurrence:(id)a0 trainingResult:(id)a1;
- (long long)classifierType;
- (id)initWithCandidateId:(id)a0 candidateType:(id)a1 anchor:(id)a2 hyperParameters:(id)a3 dataStoreWrapper:(id)a4;
- (id)initWithCandidateId:(id)a0 candidateType:(id)a1 anchor:(id)a2 tree:(id)a3 hyperParameters:(id)a4 dataStoreWrapper:(id)a5;
- (id)initWithCandidateId:(id)a0 candidateType:(id)a1 anchor:(id)a2;
- (id)trainDecisionTree;
- (id)trainingFeatureVectorsFromTrainingData:(id)a0;
- (id)trainingLabelsFromTrainingData:(id)a0;
- (id)indicesToKeepInTrainingAfterRemovingDuplicateFeatureVectorsWithConflictingLabels:(id)a0 labels:(id)a1;
- (id)stringFeaturesToReplaceWithUnk;
- (id)featureVectorFromFeatureDictionary:(id)a0;
- (id)predictWhenNoTreeInitialized;
- (id)inferenceFeatureDictForAnchorOccurrence:(id)a0 trainingResult:(id)a1;
- (id)candidateFeaturesWithAnchorOccurrence:(id)a0 trainingResult:(id)a1;
- (id)anchorFeaturesWithAnchorOccurrence:(id)a0;
- (id)candidateFeaturesForActionCandidateOnAnchorOccurrenceDate:(id)a0 cachedLaunchHistory:(id)a1;
- (id)candidateFeaturesForAppCandidateOnAnchorOccurrenceDate:(id)a0 cachedLaunchHistory:(id)a1;
- (BOOL)shouldComputeLaunchHistoryCounts;
- (void)setRecentAppLaunchCountsFromAppInfoManager:(id)a0 anchorOccurrenceDate:(id)a1;
- (id)initWithCandidateId:(id)a0 candidateType:(id)a1 anchor:(id)a2 hyperParameters:(id)a3;

@end
