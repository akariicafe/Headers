@interface _MLCGPUConvolution : _MLCGPULayer

+ (BOOL)compileWithDevice:(id)a0 deviceOps:(id)a1 sourceTensors:(id)a2 resultTensor:(id)a3;
+ (id)layerWithDevice:(id)a0 weights:(id)a1 biasTerms:(id)a2 descriptor:(id)a3 neuronDescriptor:(id)a4;
+ (void)setGradientComputeWeightsAndBiasOnly:(id)a0 deviceOps:(id)a1;
+ (BOOL)setOptimizerDataForDevice:(id)a0 deviceOps:(id)a1 weights:(id)a2 bias:(id)a3;

- (id)initWithDevice:(id)a0 weights:(id)a1 biasTerms:(id)a2 descriptor:(id)a3 neuronDescriptor:(id)a4;

@end
