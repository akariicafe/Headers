@interface NLPLearnerMontrealShadowEvaluator : NLPLearnerShadowEvaluator

+ (void)initialize;
+ (BOOL)isInTopKPredictions:(unsigned long long)a0 scores:(float *)a1 total:(unsigned long long)a2 topK:(unsigned long long)a3;

- (id)evaluateModel:(struct MontrealNeuralNetwork { } *)a0 onData:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (id)evaluateModel:(id)a0 onRecords:(id)a1 options:(id)a2 completion:(id /* block */)a3 error:(id *)a4;
- (id)prepareDataFromRecords:(id)a0 modelBundle:(id)a1 error:(id *)a2;

@end
