@interface ATXActionPredictionsHelpers : NSObject

+ (void)sortPredictions:(id)a0;
+ (void)applyNormalizationToPredictions:(id)a0;
+ (id)sortedPredictions:(id)a0;
+ (void)applyLogSoftmaxToPredictions:(id)a0;
+ (void)keepRandomPredictionItems:(id)a0 limit:(unsigned long long)a1 predictionItemsToKeep:(void *)a2;
+ (id)limitTheNumberOfPredictions:(id)a0 withLimit:(int)a1;
+ (void)applyLogOfLinearProbabilityTransformationToPredictions:(id)a0;
+ (id)processCandidateActionPredictions:(id)a0 limit:(int)a1 predictionItemsToKeep:(void *)a2;
+ (void)applyJointLogProbabilityToActionPredictions:(id)a0 withAppActionTypePredictionScore:(double)a1;

@end
