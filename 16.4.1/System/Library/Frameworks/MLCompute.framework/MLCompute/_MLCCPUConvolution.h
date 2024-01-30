@interface _MLCCPUConvolution : _MLCCPULayer

+ (BOOL)compileWithDevice:(id)a0 deviceOps:(id)a1 sourceTensors:(id)a2 resultTensor:(id)a3 convolutionTranspose:(BOOL)a4;
+ (id)createBNNSNDArrayDescriptorForDescriptor:(id)a0 biasDelta:(id)a1 dataType:(int)a2;
+ (id)createBNNSNDArrayDescriptorForDescriptor:(id)a0 weightsDelta:(id)a1 fullyConnected:(BOOL)a2 dataType:(int)a3;
+ (id)layerWithDevice:(id)a0 weights:(id)a1 biasTerms:(id)a2 convolutionDescriptor:(id)a3 neuronDescriptor:(id)a4;

- (id)initWithDevice:(id)a0 weights:(id)a1 biasTerms:(id)a2 convolutionDescriptor:(id)a3 neuronDescriptor:(id)a4;

@end
