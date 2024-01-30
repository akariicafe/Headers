@class NSDictionary;

@interface ATXAnchorModelHyperParameters : NSObject {
    NSDictionary *_parameters;
}

- (id)init;
- (long long)minNumUniqueAnchorOccurrencesWithUniqueCandidateOccurrencesForHighConfidencePredictionForAnchor:(id)a0;
- (void).cxx_destruct;
- (double)mediumBlendingConfidenceScoreThreshold;
- (double)ratioForLeafNodeDecision;
- (double)maxSecondsSinceCandidateOccurrenceToConsiderCandidateForPrediction;
- (long long)minUniqueAnchorOccurrencesForAnchorForPhase1;
- (double)highBlendingConfidenceScoreThreshold;
- (double)minPosteriorProbabilityForMediumConfidencePredictionForAnchor:(id)a0;
- (double)minPosteriorProbabilityForCandidateForPhase1;
- (double)maxDurationForAnchorModelPredictionInSecondsForPhase3;
- (double)minPosteriorProbabilityToIgnoreClassConditionalProbabilityForCandidateForPhase1;
- (double)percentileForEndOffsetFromAnchorForPhase3;
- (double)minClassConditionalProbabilityForCandidateForPhase1;
- (id)abGroup;
- (double)minClassConditionalProbabilityForMediumConfidencePredictionForAnchor:(id)a0;
- (double)minPosteriorProbabilityForHighConfidencePredictionForAnchor:(id)a0;
- (double)idleTimeEndAnchorMinimumSecondsForBeingIdle;
- (id)enabledAnchors;
- (double)minDurationForAnchorModelPredictionInSecondsForPhase3;
- (long long)candidateClassifierTypeForPhase2;
- (double)minClassConditionalProbabilityForHighConfidencePredictionForAnchor:(id)a0;
- (long long)minNumUniqueAnchorOccurrencesWithUniqueCandidateOccurrencesForMediumConfidencePredictionForAnchor:(id)a0;
- (double)maxTrainingAgeInSecondsToConsiderForRetraining;
- (double)percentileForStartOffsetFromAnchorForPhase3;
- (double)secondsBeforeHistoricalStartDateToPredictCandidate;

@end
