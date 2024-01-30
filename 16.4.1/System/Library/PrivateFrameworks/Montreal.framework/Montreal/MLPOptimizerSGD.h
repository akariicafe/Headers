@class MPSVector;

@interface MLPOptimizerSGD : MLPOptimizer

@property (retain) MPSVector *momentum;

- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)a0 inputGradientVector:(id)a1 inputValuesVector:(id)a2;
- (id)initWithNetwork:(id)a0 momentum:(id /* block */)a1;
- (void)updateLearningRate:(float)a0;

@end
