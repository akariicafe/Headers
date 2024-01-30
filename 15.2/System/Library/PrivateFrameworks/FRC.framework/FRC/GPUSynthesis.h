@protocol MTLComputePipelineState;

@interface GPUSynthesis : FRCMetalBase {
    id<MTLComputePipelineState> _combine2Textures;
    id<MTLComputePipelineState> _postSmoothFilter;
    id<MTLComputePipelineState> _averageErrorMap;
    id<MTLComputePipelineState> _generateAlphaMap;
}

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)setupMetal;
- (id)initWithDevice:(id)a0 commmandQueue:(id)a1;
- (void)encodeCombineCmdToCommandBuffer:(id)a0 fromBuffer0:(id)a1 buffer1:(id)a2 best0:(id)a3 best1:(id)a4 map:(id)a5 normalized0:(id)a6 normalized1:(id)a7 alpha:(id)a8 flowStats0:(struct { struct { float x0; float x1; int x2; } x0; struct { float x0; float x1; int x2; } x1; float x2; float x3; } *)a9 flowStats1:(struct { struct { float x0; float x1; int x2; } x0; struct { float x0; float x1; int x2; } x1; float x2; float x3; } *)a10 toTexture:(id)a11;
- (void)encodeAlphaCmdToCommandBuffer:(id)a0 fromBuffer0:(id)a1 buffer1:(id)a2 toAlpha:(id)a3 timeScale:(float)a4 toNormalized0:(id)a5 toNormalized1:(id)a6;
- (void)encodePostSmoothFilterCmdToCommandBuffer:(id)a0 map:(id)a1 fromTexture:(id)a2 toTexture:(id)a3;
- (void)encodeAverageErrorCmdToCommandBuffer:(id)a0 minErrorMap0:(id)a1 minErrorMap1:(id)a2 avgErrorMap0:(id)a3 avgErrorMap1:(id)a4 width:(int)a5 height:(int)a6;

@end
