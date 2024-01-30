@class FigDeepZoomPostProcMetalStage, FigMetalContext;
@protocol MTLComputePipelineState, MTLTexture;

@interface FigDeepZoomMetalStage : NSObject {
    FigMetalContext *_metalContext;
    struct __CVMetalTextureCache { } *_cvMetalTextureCacheRef;
    id<MTLComputePipelineState> _clearTexturePipelineState;
    id<MTLComputePipelineState> _tileCutPipelineState;
    id<MTLComputePipelineState> _tilePastePipelineState;
    struct __CVBuffer { } *_tileOutputEnhancedPixelBuffer;
    struct __CVBuffer { } *_tileInputWeightsPixelBuffer;
    id<MTLTexture> _tileInputWeightsTexture;
    FigDeepZoomPostProcMetalStage *_deepZoomPostProcStage;
}

- (void)finishProcessing;
- (void).cxx_destruct;
- (void)dealloc;
- (int)_compileShaders;
- (int)clearBuffer:(struct __CVBuffer { } *)a0;
- (id)initWithMetalContext:(id)a0 withTileConfiguration:(struct { } *)a1;
- (int)configurePostProcess:(struct { float x0[4]; float x1[4]; } *)a0;
- (int)cutTileFrom:(struct __CVBuffer { } *)a0 to:(struct __CVBuffer { } *)a1 params:(struct { struct { } x0; } *)a2 outCommandBuffer:(id *)a3;
- (int)pasteTileFrom:(struct __CVBuffer { } *)a0 with:(struct __CVBuffer { } *)a1 to:(struct __CVBuffer { } *)a2 params:(struct { struct { } x0; } *)a3 outCommandBuffer:(id *)a4;
- (id)_cachedTexturesFromPixelBuffer:(struct __CVBuffer { } *)a0 usage:(unsigned long long)a1;
- (int)_computeWeights:(struct __CVBuffer { } *)a0 tileConfig:(struct { } *)a1;

@end
