@interface ATXAnchorModelPredictionScorer : NSObject

+ (double)normalizeValue:(double)a0 parameterKey:(id)a1;
+ (double)predictedProbabilityFromNormalizedClassConditionalProbability:(double)a0 posteriorProbability:(double)a1 minutesAfterAnchor:(double)a2 standardDeviation:(double)a3 uniqueOccurrences:(double)a4;

- (double)scoreForTrainingResult:(id)a0;

@end
