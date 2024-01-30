@interface ATXActionPredictionsHelpers : NSObject

+ (void)applyLogSoftmaxToPredictions:(id)a0;
+ (void)sortPredictions:(id)a0;
+ (void)applyLogOfLinearProbabilityTransformationToPredictions:(id)a0;
+ (void)applyJointLogProbabilityToActionPredictions:(id)a0 withAppActionTypePredictionScore:(double)a1;
+ (id)processCandidateActionPredictions:(id)a0 limit:(int)a1 predictionItemsToKeep:(struct vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> > { struct ATXPredictionItem *x0; struct ATXPredictionItem *x1; struct __compressed_pair<ATXPredictionItem *, std::__1::allocator<ATXPredictionItem> > { struct ATXPredictionItem *x0; } x2; } *)a2;
+ (id)limitTheNumberOfPredictions:(id)a0 withLimit:(int)a1;
+ (void)keepRandomPredictionItems:(id)a0 limit:(unsigned long long)a1 predictionItemsToKeep:(struct vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> > { struct ATXPredictionItem *x0; struct ATXPredictionItem *x1; struct __compressed_pair<ATXPredictionItem *, std::__1::allocator<ATXPredictionItem> > { struct ATXPredictionItem *x0; } x2; } *)a2;
+ (void)applyNormalizationToPredictions:(id)a0;
+ (id)sortedPredictions:(id)a0;

@end
