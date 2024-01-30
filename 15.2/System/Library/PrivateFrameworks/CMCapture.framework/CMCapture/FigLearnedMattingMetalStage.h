@class FigMetalContext;
@protocol MTLComputePipelineState;

@interface FigLearnedMattingMetalStage : NSObject {
    FigMetalContext *_metalContext;
    id<MTLComputePipelineState> _createTileKernel;
    id<MTLComputePipelineState> _pasteTileKernel;
    id<MTLComputePipelineState> _copyTextureKernel;
    id<MTLComputePipelineState> _clearTextureKernel;
    struct __CVMetalTextureCache { } *_textureCache;
}

- (id)initWithMetalContext:(id)a0;
- (void)finishProcessing;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (int)_compileShaders;
- (id)_textureFromPixelBuffer:(struct __CVBuffer { } *)a0 usage:(unsigned long long)a1;
- (id)_runKernel:(id)a0 sourceTexture:(id)a1 destinationTexture:(id)a2 gridSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3 setParamsBlock:(id /* block */)a4;
- (int)clearBuffer:(struct __CVBuffer { } *)a0;
- (int)createTileFrom:(SEL)a0 to:(struct __CVBuffer { } *)a1 withStart:(struct __CVBuffer { } *)a2 outCommandBuffer:(id *)a3;
- (int)createTileFrom:(id)a0 to:(SEL)a1 withStart:(struct __CVBuffer { } *)a2 withScale:(struct __CVBuffer { } *)a3 outCommandBuffer:(id *)a4;
- (int)pasteTileFrom:(id)a0 to:(SEL)a1 withStart:(struct __CVBuffer { } *)a2 withNoOverlapStart:(struct __CVBuffer { } *)a3 withNoOverlapEnd:(id *)a4 outCommandBuffer:(void /* unknown type, empty encoding */)a5;
- (int)copyBufferFrom:(struct __CVBuffer { } *)a0 to:(struct __CVBuffer { } *)a1 outCommandBuffer:(id *)a2;

@end
