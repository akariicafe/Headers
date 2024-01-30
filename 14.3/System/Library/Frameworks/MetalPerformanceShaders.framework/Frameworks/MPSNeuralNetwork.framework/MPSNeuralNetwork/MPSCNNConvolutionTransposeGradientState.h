@class MPSCNNConvolutionTranspose, MPSCNNConvolutionGradientState;

@interface MPSCNNConvolutionTransposeGradientState : MPSCNNConvolutionGradientState {
    long long _kernelOffsetX;
    long long _kernelOffsetY;
}

@property (readonly, nonatomic) MPSCNNConvolutionGradientState *convolutionGradientState;
@property (readonly, retain, nonatomic) MPSCNNConvolutionTranspose *convolutionTranspose;

+ (id)temporaryStateWithCommandBuffer:(id)a0 resourceList:(id)a1 convolutionTranspose:(id)a2 convolutionGradientState:(id)a3 weightsLayout:(unsigned int)a4;
+ (id)temporaryStateWithCommandBuffer:(id)a0 resourceList:(id)a1 convolutionTranspose:(id)a2 convolutionGradientState:(id)a3;

- (id)initWithResource:(id)a0;
- (void)dealloc;
- (id)convolution;
- (id)destinationImageDescriptorForSourceImages:(id)a0 sourceStates:(id)a1 forKernel:(id)a2 suggestedDescriptor:(id)a3;
- (id)initWithResource:(id)a0 weightsLayout:(unsigned int)a1;
- (id)initWithDevice:(id)a0 resourceList:(id)a1 convolution:(id)a2 weightsLayout:(unsigned int)a3;
- (id)initWithDevice:(id)a0 resourceList:(id)a1 convolution:(id)a2;
- (id)initWithDevice:(id)a0 resourceList:(id)a1 convolutionTranspose:(id)a2 convolutionGradientState:(id)a3;
- (id)initWithDevice:(id)a0 resourceList:(id)a1 convolutionTranspose:(id)a2 convolutionGradientState:(id)a3 weightsLayout:(unsigned int)a4;
- (unsigned long long)sourceWidth;
- (unsigned long long)sourceHeight;
- (id)debugDescription;

@end
