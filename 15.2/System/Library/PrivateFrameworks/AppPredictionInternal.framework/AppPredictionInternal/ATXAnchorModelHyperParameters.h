@class NSDictionary;

@interface ATXAnchorModelHyperParameters : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (double)idleTimeEndAnchorMinimumSecondsForBeingIdle;
- (double)minClassConditionalProbabilityForCandidateForPhase1;
- (double)minDurationForAnchorModelPredictionInSecondsForPhase3;
- (long long)minNumUniqueAnchorOccurrencesWithUniqueCandidateOccurrencesForHighConfidencePredictionForAnchor:(id)a0;
- (id)abGroup;
- (double)minPosteriorProbabilityForHighConfidencePredictionForAnchor:(id)a0;
- (double)minClassConditionalProbabilityForMediumConfidencePredictionForAnchor:(id)a0;
- (double)minValueForParameterKey:(id)a0;
- (double)highBlendingConfidenceScoreThreshold;
- (double)maxTrainingAgeInSecondsToConsiderForRetraining;
- (double)minPosteriorProbabilityForCandidateForPhase1;
- (double)maxValueForParameterKey:(id)a0;
- (double)minPosteriorProbabilityToIgnoreClassConditionalProbabilityForCandidateForPhase1;
- (double)maxDurationForAnchorModelPredictionInSecondsForPhase3;
- (long long)minUniqueAnchorOccurrencesForAnchorForPhase1;
- (double)minClassConditionalProbabilityForHighConfidencePredictionForAnchor:(id)a0;
- (long long)candidateClassifierTypeForPhase2;
- (void).cxx_destruct;
- (double)modelWeightForParameterKey:(id)a0;
- (double)ratioForLeafNodeDecision;
- (id)init;
- (double)maxSecondsSinceCandidateOccurrenceToConsiderCandidateForPrediction;
- (double)percentileForEndOffsetFromAnchorForPhase3;
- (double)percentileForStartOffsetFromAnchorForPhase3;
- (id)enabledAnchors;
- (double)mediumBlendingConfidenceScoreThreshold;
- (long long)minNumUniqueAnchorOccurrencesWithUniqueCandidateOccurrencesForMediumConfidencePredictionForAnchor:(id)a0;
- (double)minPosteriorProbabilityForMediumConfidencePredictionForAnchor:(id)a0;
- (double)secondsBeforeHistoricalStartDateToPredictCandidate;

@end
