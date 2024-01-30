@class LSCGainsPlist, NSDictionary, FigMetalContext;
@protocol MTLComputePipelineState, MTLTexture;

@interface LearnedNRMetalStage : NSObject {
    FigMetalContext *_metalContext;
    id<MTLComputePipelineState> _lumaChromaFullToRawTilePipelineState;
    id<MTLComputePipelineState> _rgbTileToLumaTileAndChromaFullPipelineState;
    id<MTLComputePipelineState> _lumaAddbackAndWriteToFullPipelineState;
    LSCGainsPlist *_lscGainsPlist;
    id<MTLTexture> _lscGainsTex;
    struct LearnedNRUniforms { void /* unknown type, empty encoding */ whiteBalanceGains; struct ColorSpaceConversionParameters { struct { void /* unknown type, empty encoding */ columns[3]; } cscMatrixFwd; struct { void /* unknown type, empty encoding */ columns[3]; } cscMatrix; struct { void /* unknown type, empty encoding */ columns[3]; } colorCorrectionMatrix; struct TransferFunctionParameters { float linearScale; float linearThreshold; float nonLinearScale; float nonLinearBias; float nonLinearPower; } transferFunctionFwd; struct TransferFunctionParameters { float linearScale; float linearThreshold; float nonLinearScale; float nonLinearBias; float nonLinearPower; } transferFunctionInv; float finalScaleFwd; float finalScale; BOOL outputToLinearYCbCr; BOOL clampNegativesToZero; BOOL applyColorCorrection; BOOL useGpuCSC; } cscParams; void /* unknown type, empty encoding */ lscScale; void /* unknown type, empty encoding */ lscOffset; float lscModulationWeight; float modulatedReadNoiseStd; float lumaAddBackWeight; float lumaAddBackBand0Weight; float lumaAddBackClipToSNR; float shotNoiseVar; float preNetworkScale; float postNetworkScale; BOOL rotateTile180; } _frameProperties;
    NSDictionary *_tuningParams;
}

+ (void)initialize;
+ (int)prewarmShadersWithCommandQueue:(id)a0;

- (void).cxx_destruct;
- (int)createRawTile:(SEL)a0 fromInputYuv:(struct __CVBuffer { } *)a1 tileStart:(struct __CVBuffer { } *)a2 cmdBuffer:(id *)a3;
- (int)writeRgbTile:(id)a0 toYuvBuffer:(SEL)a1 intermediateLumaBuffer:(struct __CVBuffer { } *)a2 intermediateDeltaBuffer:(struct __CVBuffer { } *)a3 srcYuvBuffer:(struct __CVBuffer { } *)a4 srcStart:(struct __CVBuffer { } *)a5 dstStart:(struct __CVBuffer { } *)a6 size:(id *)a7 cmdBuffer:(void /* unknown type, empty encoding */)a8;
- (id)initWithCommandQueue:(id)a0 cameraInfo:(id)a1 tuningParameters:(id)a2;
- (int)updateParametersFromMetadata:(id)a0 forNetworkVersion:(short)a1;
- (int)compileShaders;
- (void)_bindYuvBuffer:(struct __CVBuffer { } *)a0 toLumaTexture:(id *)a1 chromaTexture:(id *)a2 withUsage:(unsigned long long)a3;

@end
