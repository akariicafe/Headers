@class NSDictionary;

@interface ATXAnchorModelHyperParameters : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (double)minPosteriorProbabilityForHighConfidencePredictionForAnchor:(id)a0;
- (double)minClassConditionalProbabilityForHighConfidencePredictionForAnchor:(id)a0;
- (id)abGroup;
- (double)percentileForStartOffsetFromAnchorForPhase3;
- (double)secondsBeforeHistoricalStartDateToPredictCandidate;
- (long long)minUniqueAnchorOccurrencesForAnchorForPhase1;
- (double)minValueForParameterKey:(id)a0;
- (double)maxDurationForAnchorModelPredictionInSecondsForPhase3;
- (double)minClassConditionalProbabilityForMediumConfidencePredictionForAnchor:(id)a0;
- (double)maxSecondsSinceCandidateOccurrenceToConsiderCandidateForPrediction;
- (double)idleTimeEndAnchorMinimumSecondsForBeingIdle;
- (double)minClassConditionalProbabilityForCandidateForPhase1;
- (long long)candidateClassifierTypeForPhase2;
- (long long)minNumUniqueAnchorOccurrencesWithUniqueCandidateOccurrencesForMediumConfidencePredictionForAnchor:(id)a0;
- (double)minDurationForAnchorModelPredictionInSecondsForPhase3;
- (double)maxValueForParameterKey:(id)a0;
- (double)percentileForEndOffsetFromAnchorForPhase3;
- (id)init;
- (double)maxTrainingAgeInSecondsToConsiderForRetraining;
- (id)anchorsDisabledForHomescreen;
- (double)ratioForLeafNodeDecision;
- (long long)minNumUniqueAnchorOccurrencesWithUniqueCandidateOccurrencesForHighConfidencePredictionForAnchor:(id)a0;
- (double)modelWeightForParameterKey:(id)a0;
- (double)minPosteriorProbabilityToIgnoreClassConditionalProbabilityForCandidateForPhase1;
- (double)highBlendingConfidenceScoreThreshold;
- (double)minPosteriorProbabilityForCandidateForPhase1;
- (id)enabledAnchors;
- (void).cxx_destruct;
- (id)knownAnchorClasses;
- (double)minPosteriorProbabilityForMediumConfidencePredictionForAnchor:(id)a0;
- (double)mediumBlendingConfidenceScoreThreshold;

@end
