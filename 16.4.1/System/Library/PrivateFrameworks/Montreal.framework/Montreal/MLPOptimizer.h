@class MLPNetwork, MPSNNOptimizer;

@interface MLPOptimizer : NSObject

@property (readonly) MPSNNOptimizer *mpsOptimizer;
@property (readonly, weak) MLPNetwork *network;

+ (id)optimizerWithNetwork:(id)a0 momentum:(id /* block */)a1 velocity:(id /* block */)a2;

- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)a0 inputGradientMatrix:(id)a1 inputValuesMatrix:(id)a2;
- (void)encodeToCommandBuffer:(id)a0 inputGradientVector:(id)a1 inputValuesVector:(id)a2;
- (id)initWithNetwork:(id)a0 mpsOptimizer:(id)a1;
- (void)updateLearningRate:(float)a0;

@end
