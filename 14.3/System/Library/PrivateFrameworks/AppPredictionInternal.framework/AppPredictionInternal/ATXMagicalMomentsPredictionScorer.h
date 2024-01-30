@class NSCountedSet, NSArray, NSMutableDictionary, NSString, NSMutableOrderedSet;

@interface ATXMagicalMomentsPredictionScorer : NSObject {
    NSArray *_correlatedEvents;
    NSCountedSet *_relevantAppLaunches;
    unsigned long long _totalRelevantLaunchesForAllBundleIds;
    NSCountedSet *_globalAppLaunches;
    NSMutableDictionary *_relevanceWeightsByIdentifier;
    NSString *_topScoringIdentifier;
    NSMutableOrderedSet *_dateSetForDecay;
    NSMutableDictionary *_cumulativeScoresWithDecayedWeightsByIdentifier;
    double _totalScaledCumulativeScoresForAllBundleIds;
    NSMutableDictionary *_finalPredictionConfidences;
}

- (void).cxx_destruct;
- (id)startOfDayForDate:(id)a0;
- (id)initWithCorrelatedEvents:(id)a0 andGlobalAppLaunchCountedSet:(id)a1;
- (id)generatePredictions;
- (id)relevanceScoreWithRelevantLaunchCount:(unsigned long long)a0 globalLaunchCount:(unsigned long long)a1;
- (void)computeRelevanceScoresForAllRelevantBundleIds;
- (BOOL)subExpertHasObservedEnoughLaunchesForOneAppToMakePredictions;
- (BOOL)subExpertHasObservedEnoughLaunchesForMultipleAppsToMakePredictions;
- (unsigned long long)minimumNumberOfDaysOfObservationsRequiredForSubExpertToMakePredictions;
- (BOOL)subExpertHasWitnessedEnoughRelevantAppLaunches;
- (unsigned long long)minimumNumberOfGlobalObservationsOfBundleIdForMMScoring;
- (unsigned long long)minimumNumberOfRelevantObservationsOfBundleIdForMMScoring;
- (BOOL)subExpertCanMakeHighConfidencePredictionsForBundleIdGivenRelevantLaunchCount:(unsigned long long)a0 globalLaunchCount:(unsigned long long)a1;
- (double)minimumRelevanceWeightForMMScoring;
- (double)maximumRelevanceWeightForMMScoring;
- (id)getPredictionsFromFinalConfidences;
- (void)getRelevantAppLaunchCountsAndDateSetFromCorrelationData;
- (BOOL)subExpertCanMakeHighConfidencePredictions;
- (void)computeTimeDecayedCumulativeScores;
- (void)scaleAllScoresWithTopScoringFactor;
- (void)computeModelConfidences;
- (double)scalingFactorFromTopPrediction;
- (id)dateSetForDecay;
- (id)relevantAppLaunches;
- (unsigned long long)totalRelevantLaunchesForAllBundleIds;
- (id)relevanceWeightsByIdentifier;
- (id)cumulativeScoresWithDecayedWeightsByIdentifier;
- (id)topScoringIdentifier;

@end
