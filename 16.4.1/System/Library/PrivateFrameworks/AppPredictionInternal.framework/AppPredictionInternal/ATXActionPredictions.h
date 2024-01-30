@interface ATXActionPredictions : NSObject

+ (id)sortStageScores:(id)a0;
+ (void)setTVActionPredictionsConfidenceToLow:(id)a0;
+ (unsigned long long)numActionResultsWithOnlyPredictionItemForLogging:(id)a0;
+ (void)fetchDataAndUpdateContentAttributeSetForActions:(id)a0;
+ (id)_predictionsForConsumerSubType:(unsigned char)a0 thirdStageScoreLogger:(id)a1 multiStageScoreLogger:(id)a2 actionPredictionCandidates:(id)a3 remainingPredictionItems:(void *)a4 predictionsPerAppActionLimit:(id)a5;
+ (BOOL)actionScoreAboveThresholdOrWhitelistedAction:(id)a0 confidenceThreshold:(double)a1 actionKeyWhitelist:(id)a2 actionTypeWhitelist:(id)a3;
+ (id)_actionPredictionCandidatesForCandidateBundleIdentifiers:(id)a0 candidateActiontypes:(id)a1 firstStageScoreLogger:(id)a2 secondStageScoreLogger:(id)a3 multiStageScoreLogger:(id)a4 context:(id)a5 featureCache:(id)a6 remainingPredictionItems:(void *)a7;
+ (id)removeActionsBelowThresholdForActionPredictions:(id)a0 withThreshold:(double)a1 actionKeyWhitelist:(id)a2 actionTypeWhitelist:(id)a3;
+ (id)_predictionsForConsumerSubType:(unsigned char)a0 thirdStageScoreLogger:(id)a1 multiStageScoreLogger:(id)a2 context:(id)a3 actionPredictionCandidates:(id)a4 remainingPredictionItems:(void *)a5 predictionsPerAppActionLimit:(id)a6;
+ (id)_actionPredictionCandidatesForCandidateBundleIdentifiers:(id)a0 candidateActiontypes:(id)a1 firstStageScoreLogger:(id)a2 secondStageScoreLogger:(id)a3 multiStageScoreLogger:(id)a4 featureCache:(id)a5 remainingPredictionItems:(void *)a6;
+ (void)penalizeMultipleActionsPerAppAndKeepSorted:(id)a0;
+ (id)filterHighQualityActionResults:(id)a0 consumerSubType:(unsigned char)a1;
+ (id)scoredActionsWithoutLog:(id)a0;
+ (id)predictionsWithCandidateBundleIdentifiers:(id)a0 candidateActiontypes:(id)a1 consumerSubType:(unsigned char)a2 firstStageScoreLogger:(id)a3 secondStageScoreLogger:(id)a4 thirdStageScoreLogger:(id)a5 multiStageScoreLogger:(id)a6;
+ (id)actionResultsForCandidateBundleIdentifiers:(id)a0 candidateActiontypes:(id)a1 consumerSubType:(unsigned char)a2 firstStageScoreLogger:(id)a3 secondStageScoreLogger:(id)a4 thirdStageScoreLogger:(id)a5 multiStageScoreLogger:(id)a6 predictionsPerAppActionLimit:(id)a7;
+ (id)actionsFromActions:(id)a0 byMovingActionsWithBundleIdentifiers:(id)a1 toRemainingPredictionItems:(void *)a2;

- (id)init;

@end
