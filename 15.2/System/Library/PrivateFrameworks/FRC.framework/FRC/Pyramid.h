@protocol MTLComputePipelineState, MTLBuffer;

@interface Pyramid : FRCMetalBase {
    id<MTLComputePipelineState> _subsampleKernel;
    id<MTLComputePipelineState> _residueKernel;
    id<MTLComputePipelineState> _shuffleConcatenateKernel;
    id<MTLComputePipelineState> _gaussianSubsampleKernel;
    id<MTLComputePipelineState> _blendKernel;
    id<MTLBuffer> _gaussianCoefficientBuffer;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 commmandQueue:(id)a1;
- (void)createResiduePyramidFromTexture:(id)a0 toTexture:(const id *)a1 levels:(unsigned long long)a2 callback:(id /* block */)a3;
- (void)encodeSubsampleTextureToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2 clampToEdge:(BOOL)a3;
- (void)encodeResidueToCommandBuffer:(id)a0 base:(id)a1 low:(id)a2 destination:(id)a3;
- (void)createResiduePyramidFromBuffer:(struct __CVBuffer { } *)a0 toBuffer:(struct __CVBuffer **)a1 levels:(unsigned long long)a2;
- (void)encodeShuffleToCommandBuffer:(id)a0 full:(id)a1 quarter:(id)a2 destination:(id)a3;
- (void)blendWarpedResidueForward:(struct __CVBuffer { } *)a0 backward:(struct __CVBuffer { } *)a1 withGridNetOutput:(struct __CVBuffer { } *)a2 destination:(struct __CVBuffer { } *)a3 callback:(id /* block */)a4;

@end
