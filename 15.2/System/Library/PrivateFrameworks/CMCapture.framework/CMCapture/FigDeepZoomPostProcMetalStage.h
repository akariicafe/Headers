@class FigMetalContext;
@protocol MTLComputePipelineState, MTLTexture, MTLBuffer;

@interface FigDeepZoomPostProcMetalStage : NSObject {
    FigMetalContext *_metalContext;
    id<MTLComputePipelineState> _pipelineStates[16];
    id<MTLTexture> _tileSourceLPLuma;
    id<MTLTexture> _tileSourceLPChroma;
    id<MTLTexture> _tileSourceLuma;
    id<MTLTexture> _tileSourceChroma;
    id<MTLTexture> _tileEnhancedLuma;
    id<MTLTexture> _tileEnhancedChroma;
    id<MTLTexture> _tileEnhancedLFLuma;
    id<MTLTexture> _tileEnhancedLFChroma;
    id<MTLTexture> _tileLuma1Flipped;
    id<MTLTexture> _tileChroma1Flipped;
    id<MTLTexture> _tileLumaTemp1;
    id<MTLTexture> _tileChromaTemp1;
    id<MTLBuffer> _lumaGainLUTBuffer;
    id<MTLTexture> _tileOutputLuma;
    id<MTLTexture> _tileOutputChroma;
    id<MTLTexture> _tileResidual;
    struct { unsigned int tileWidth; unsigned int tileHeight; unsigned int downsampleWidth; unsigned int downsampleHeight; } _params;
    struct { float lumaGainCoefX[4]; float lumaGainCoefY[4]; } _controlParams;
    float _lumaGainLUT[256];
}

- (void).cxx_destruct;
- (void)dealloc;
- (int)_compileShaders;
- (id)initWithMetalContext:(id)a0 withTileConfiguration:(struct { } *)a1;
- (int)processTileFrom:(id)a0 with:(id)a1 to:(id)a2 commandBuffer:(id)a3;
- (int)configureLumaGainLUT:(struct { float x0[4]; float x1[4]; } *)a0;
- (int)_allocateResourcesTileWidth:(unsigned int)a0 tileHeight:(unsigned int)a1;
- (int)_convertYUV444To420:(id)a0 outputLuma:(id)a1 outputChroma:(id)a2 cmdEnc:(id)a3;
- (int)_assembleResidual:(id)a0 sourceChroma:(id)a1 sourceLPLuma:(id)a2 sourceLPChroma:(id)a3 residual:(id)a4 enhancedLuma:(id)a5 enhancedChroma:(id)a6 cmdEnc:(id)a7;
- (int)_removeLowFreqDiffYUV:(id)a0 sourceChroma:(id)a1 enhancedLuma:(id)a2 enhancedChroma:(id)a3 cmdEnc:(id)a4;
- (int)_applyGaussianFilterRowYUV420:(id)a0 texInputChroma:(id)a1 texOutputLuma:(id)a2 texOutputChroma:(id)a3 kernelSize:(unsigned int)a4 width:(unsigned int)a5 height:(unsigned int)a6 cmdEnc:(id)a7;
- (int)_computeDetailsLumaChroma:(id)a0 texChroma:(id)a1 texLowFreqLuma:(id)a2 texLowFreqChroma:(id)a3 texDetailsLuma:(id)a4 texDetailsChroma:(id)a5 cmdEnc:(id)a6;
- (int)_computeDetailsMaxYUV:(id)a0 texDetailsChroma:(id)a1 texDetailsMaxLuma:(id)a2 texDetailsMaxChroma:(id)a3 cmdEnc:(id)a4;
- (int)_computeDetailsGainMap:(id)a0 texSourceDetailsChroma:(id)a1 texEnhancedDetailsLuma:(id)a2 texEnhancedDetailsChroma:(id)a3 texGainMapLuma:(id)a4 texGainMapChroma:(id)a5 cmdEnc:(id)a6;
- (int)_adjustLumaGainMap:(id)a0 texLumaGainMap:(id)a1 cmdEnc:(id)a2;
- (int)_modulateStrength:(id)a0 texEnhancedDetailsChroma:(id)a1 texGainMapLuma:(id)a2 texGainMapChroma:(id)a3 texEnhancedLFLuma:(id)a4 texEnhancedLFChroma:(id)a5 texOutputLuma:(id)a6 texOutputChroma:(id)a7 cmdEnc:(id)a8;
- (void)_releaseBuffer;
- (int)_applyGaussianFilterRowGather:(id)a0 texOutput:(id)a1 kernelSize:(unsigned int)a2 width:(unsigned int)a3 height:(unsigned int)a4 isLuma:(BOOL)a5 cmdEnc:(id)a6;

@end
