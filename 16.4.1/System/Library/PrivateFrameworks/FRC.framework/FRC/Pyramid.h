@protocol MTLComputePipelineState, MTLBuffer;

@interface Pyramid : FRCMetalBase {
    id<MTLComputePipelineState> _subsampleKernel;
    id<MTLComputePipelineState> _residueKernel;
    id<MTLComputePipelineState> _residueInplaceKernel;
    id<MTLComputePipelineState> _shuffleConcatenateKernel;
    id<MTLComputePipelineState> _gaussianSubsampleKernel;
    id<MTLComputePipelineState> _blendKernel;
    id<MTLComputePipelineState> _featureBackwarpKernel;
    id<MTLComputePipelineState> _paddingKernel;
    id<MTLBuffer> _gaussianCoefficientBuffer;
}

- (void).cxx_destruct;
- (void)blendWarpedResidueForward:(struct __CVBuffer { } *)a0 backward:(struct __CVBuffer { } *)a1 withGridNetOutput:(struct __CVBuffer { } *)a2 timeScale:(float)a3 destination:(struct __CVBuffer { } *)a4 callback:(id /* block */)a5;
- (void)createResiduePyramidFromBuffer:(struct __CVBuffer { } *)a0 toBuffer:(struct __CVBuffer **)a1 levels:(unsigned long long)a2;
- (void)encodeAddBottomPaddingToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2;
- (void)encodeFeatureBackwarpToCommandBuffer:(id)a0 feature:(id)a1 forwardFlow:(id)a2 backwardFlow:(id)a3 timeScale:(float)a4 destination:(id)a5;
- (void)encodeLayerBlendToCommandBuffer:(id)a0 forwardResidue:(id)a1 backwardResidue:(id)a2 withBaseLayer:(id)a3 timeScale:(float)a4 destination:(id)a5;
- (void)encodeResidueInplaceToCommandBuffer:(id)a0 base:(id)a1 low:(id)a2;
- (void)encodeResiduePyramidToCommandBuffer:(id)a0 fromTexture:(id)a1 toTexture:(const id *)a2 levels:(unsigned long long)a3;
- (void)encodeResidueToCommandBuffer:(id)a0 base:(id)a1 low:(id)a2 destination:(id)a3;
- (void)encodeShuffleToCommandBuffer:(id)a0 full:(id)a1 quarter:(id)a2 destination:(id)a3;
- (void)encodeSubsampleTextureToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2 clampToEdge:(BOOL)a3;
- (id)initWithDevice:(id)a0 commmandQueue:(id)a1;

@end
