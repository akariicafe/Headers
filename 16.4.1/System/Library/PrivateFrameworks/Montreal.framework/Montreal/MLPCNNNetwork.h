@interface MLPCNNNetwork : MLPNetwork

- (id)initWithLayers:(id)a0;
- (id)computeInference:(id)a0;
- (float)computeLoss:(id)a0;
- (void)createLayerKernels;
- (unsigned long long)runInference:(id)a0 databatch:(id)a1 inferredResult:(id)a2 semaphore:(id)a3;
- (void)runTraining:(id)a0 databatch:(id)a1 iteration:(unsigned long long)a2 lossCallback:(id /* block */)a3 semaphore:(id)a4;
- (void)setOptimizerParams:(id)a0;

@end
