@class NSString, MPSCNNConvolution;
@protocol MTLBuffer;

@interface MPSCNNConvolutionGradientState : MPSNNGradientState <MPSImageSizeEncodingState> {
    BOOL _initialized;
    id<MTLBuffer> _intermediateWeightsBuffer;
    id<MTLBuffer> _intermeidateBiasesBuffer;
    unsigned long long _numReductionBlocks;
    BOOL _needReductionInN;
    BOOL _needReductionInXY;
    unsigned int _weightsLayout;
    unsigned long long _dimSizeN;
}

@property (readonly, nonatomic) unsigned long long numberOfWeightGradients;
@property (readonly, nonatomic) unsigned long long numberOfBiasGradients;
@property (readonly, nonatomic) id<MTLBuffer> gradientForWeights;
@property (readonly, nonatomic) id<MTLBuffer> gradientForBiases;
@property (readonly, retain, nonatomic) MPSCNNConvolution *convolution;
@property (readonly, nonatomic) unsigned int gradientForWeightsLayout;
@property (readonly, nonatomic) unsigned long long sourceWidth;
@property (readonly, nonatomic) unsigned long long sourceHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)temporaryStateWithCommandBuffer:(id)a0 resourceList:(id)a1 convolution:(id)a2;
+ (id)temporaryStateWithCommandBuffer:(id)a0 resourceList:(id)a1 convolution:(id)a2 weightsLayout:(unsigned int)a3;

- (id)initWithResource:(id)a0;
- (void)dealloc;
- (id)destinationImageDescriptorForSourceImages:(id)a0 sourceStates:(id)a1 forKernel:(id)a2 suggestedDescriptor:(id)a3;
- (id)initWithResource:(id)a0 weightsLayout:(unsigned int)a1;
- (id)initWithDevice:(id)a0 resourceList:(id)a1 convolution:(id)a2;
- (id)initWithDevice:(id)a0 resourceList:(id)a1 convolution:(id)a2 weightsLayout:(unsigned int)a3;

@end
