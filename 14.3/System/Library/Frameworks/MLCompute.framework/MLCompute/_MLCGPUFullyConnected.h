@interface _MLCGPUFullyConnected : _MLCGPULayer

+ (void)setGradientComputeWeightsAndBiasOnly:(id)a0 deviceOps:(id)a1;
+ (id)layerWithDevice:(id)a0 weights:(id)a1 biasTerms:(id)a2 descriptor:(id)a3 neuronDescriptor:(id)a4;

- (id)initWithDevice:(id)a0 weights:(id)a1 biasTerms:(id)a2 descriptor:(id)a3 neuronDescriptor:(id)a4;

@end
