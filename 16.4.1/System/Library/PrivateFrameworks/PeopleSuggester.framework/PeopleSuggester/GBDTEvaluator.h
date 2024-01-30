@interface GBDTEvaluator : NSObject

+ (void)initialize;

- (id)_computeFirstOrderGradientsWithTargets:(id)a0 predictions:(id)a1 positiveSampleWeight:(id)a2;
- (id)_computePredictionsFromModelWithInputVectors:(id)a0 currentModel:(id)a1 error:(id *)a2;
- (id)_computeSecondOrderGradientsWithTargets:(id)a0 predictions:(id)a1 positiveSampleWeight:(id)a2;
- (id)_computeSumOfGradientsLeftAndRightOfSplitWithFeature:(int)a0 threshold:(float)a1 inputVectors:(id)a2 gradients:(id)a3;
- (id)_differenceArrayWithArray:(id)a0;
- (id)_evaluateResultWithGradients:(id)a0 questions:(id)a1 inputVectors:(id)a2 reportGradientsBothSidesOfSplit:(BOOL)a3 reportNodeSumGradients:(BOOL)a4 reportPerFeatureResultDifference:(BOOL)a5 reportPerNodeResultDifference:(BOOL)a6;
- (id)_findNodeSamplesWithDecisionPath:(id)a0 inputVectors:(id)a1 gradients:(id)a2;
- (float)_firstOrderGradientWithPrediction:(float)a0 label:(float)a1;
- (id)_l1NormWithArray:(id)a0;
- (id)_l2NormWithArray:(id)a0;
- (id)_makeKeysWithInputVectors:(id)a0;
- (float)_secondOrderGradientWithPrediction:(float)a0;
- (float)_sigmoidWithValue:(float)a0;
- (id)_sumAbsoluteErrorWithPredictions:(id)a0 targets:(id)a1;
- (id)_sumAccuratePredictionsWithPredictions:(id)a0 targets:(id)a1;
- (id)_translateResultWithTranslateVector:(id)a0 result:(id)a1;
- (id)_weightResultWithWeightVector:(id)a0 result:(id)a1;
- (id)evaluateWithModelURL:(id)a0 dataSource:(id)a1 processDataReturnDict:(id)a2 error:(id *)a3;

@end
