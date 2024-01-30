@protocol MTLComputePipelineState;

@interface Normalization : FRCMetalBase {
    id<MTLComputePipelineState> _statisticsPlanarKernel;
    id<MTLComputePipelineState> _statisticsPackedKernel;
    id<MTLComputePipelineState> _normalizePlanarToPlanarKernel;
    id<MTLComputePipelineState> _normalizePackedToPlanarKernel;
    id<MTLComputePipelineState> _denormalizeToPlanarKernel;
    id<MTLComputePipelineState> _denormalizeKernel;
    BOOL _useSIMDSum;
}

@property (nonatomic) BOOL selfNormalization;

- (id)init;
- (void).cxx_destruct;
- (void)setupMetal;
- (void)encodeDenormalizationToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2 params:(struct { float x0; float x1; int x2; })a3;
- (struct { float x0; float x1; })calcAnchorParamsFromNormParams:(struct { float x0; float x1; float x2[2]; float x3[2]; int x4; })a0 anchor:(int)a1;
- (struct { float x0; float x1; int x2; })calcDeNormParamsFromNormaParams:(struct { float x0; float x1; float x2[2]; float x3[2]; int x4; })a0 timeScale:(float)a1;
- (struct { float x0; float x1; })calcFrameStatistics:(struct __CVBuffer { } *)a0;
- (struct { float x0; float x1; })calcTextureStatistics:(id)a0;
- (void)denormalizeFrame:(struct __CVBuffer { } *)a0 destination:(struct __CVBuffer { } *)a1 params:(const struct { float x0; float x1; float x2[2]; float x3[2]; int x4; } *)a2 timeScale:(float)a3 callback:(id /* block */)a4;
- (void)encodeNormalizationToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2 params:(struct { float x0; float x1; })a3;
- (struct { float x0; float x1; float x2[2]; float x3[2]; int x4; })normalizeFramesFirstInput:(struct __CVBuffer { } *)a0 secondInput:(struct __CVBuffer { } *)a1 firstOutput:(struct __CVBuffer { } *)a2 secondOutput:(struct __CVBuffer { } *)a3 callback:(id /* block */)a4;
- (void)normalizeWithParmas:(struct { float x0; float x1; float x2[2]; float x3[2]; int x4; })a0 firstInput:(struct __CVBuffer { } *)a1 secondInput:(struct __CVBuffer { } *)a2 firstOutput:(struct __CVBuffer { } *)a3 secondOutput:(struct __CVBuffer { } *)a4;

@end
