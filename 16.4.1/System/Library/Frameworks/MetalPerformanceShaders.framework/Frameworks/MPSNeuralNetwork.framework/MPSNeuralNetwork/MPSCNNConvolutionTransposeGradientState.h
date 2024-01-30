@class MPSCNNConvolutionTranspose, MPSCNNConvolutionGradientState;

@interface MPSCNNConvolutionTransposeGradientState : MPSCNNConvolutionGradientState {
    long long _kernelOffsetX;
    long long _kernelOffsetY;
}

@property (readonly, nonatomic) MPSCNNConvolutionGradientState *convolutionGradientState;
@property (readonly, retain, nonatomic) MPSCNNConvolutionTranspose *convolutionTranspose;

+ (id)temporaryStateWithCommandBuffer:(id)a0 resourceList:(id)a1 convolutionTranspose:(id)a2 convolutionGradientState:(id)a3;
+ (id)temporaryStateWithCommandBuffer:(id)a0 resourceList:(id)a1 convolutionTranspose:(id)a2 convolutionGradientState:(id)a3 weightsLayout:(unsigned int)a4;

- (id)initWithResource:(id)a0;
- (id)debugDescription;
- (void)dealloc;
- (id)destinationImageDescriptorForSourceImages:(id)a0 sourceStates:(id)a1 forKernel:(id)a2 suggestedDescriptor:(id)a3;
- (unsigned long long)sourceHeight;
- (unsigned long long)sourceWidth;
- (id)initWithResource:(id)a0 weightsLayout:(unsigned int)a1;
- (id)convolution;
- (id)initWithDevice:(id)a0 resourceList:(id)a1 convolution:(id)a2;
- (id)initWithDevice:(id)a0 resourceList:(id)a1 convolution:(id)a2 weightsLayout:(unsigned int)a3;
- (id)initWithDevice:(id)a0 resourceList:(id)a1 convolutionTranspose:(id)a2 convolutionGradientState:(id)a3;
- (id)initWithDevice:(id)a0 resourceList:(id)a1 convolutionTranspose:(id)a2 convolutionGradientState:(id)a3 weightsLayout:(unsigned int)a4;

@end
