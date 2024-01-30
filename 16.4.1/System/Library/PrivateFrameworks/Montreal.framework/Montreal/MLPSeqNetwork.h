@class NSString, MLPLearningRateDecayHandler;

@interface MLPSeqNetwork : MLPNetwork <MLPLearningRateDecayHandlerDelegate>

@property (retain) MLPLearningRateDecayHandler *seqLearningRateDecayHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLayers:(id)a0;
- (id)computeInference:(id)a0;
- (float)computeLoss:(id)a0;
- (void)createLayerKernels;
- (void)decayHandler:(id)a0 didUpdateLearningRate:(float)a1;
- (unsigned long long)runInference:(id)a0 databatch:(id)a1 inferredResult:(id)a2 semaphore:(id)a3;
- (void)runTraining:(id)a0 databatch:(id)a1 iteration:(unsigned long long)a2 lossCallback:(id /* block */)a3 semaphore:(id)a4;
- (void)setOptimizerParams:(id)a0;

@end
