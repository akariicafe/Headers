@class PyramidStorage_NRF, FigMetalContext;
@protocol MTLTexture, MTLBuffer, MTLHeap;

@interface DenoiseRemixStage : NSObject {
    PyramidStorage_NRF *_pyr;
    PyramidStorage_NRF *_noiseMapPyramid;
    PyramidStorage_NRF *_sharpeningPyramid;
    id<MTLTexture> _localGainMapTex;
    id<MTLBuffer> _uniforms[20];
    id<MTLBuffer> _roiTxUniform;
    FigMetalContext *_metal;
    id<MTLHeap> _uniformsHeap;
    struct DenoiseRemixStageOptions { int lgaAlgorithm; BOOL enableBandZeroDenoising; BOOL enableBilateralRegression; BOOL enableLoGOffset; BOOL enableLowVarSharpening; BOOL enableNoiseMap; BOOL enableGdFlatness; BOOL enableDefringingStage; BOOL enableGreenGhostBrightLightStage; } _options;
}

+ (void)prewarmRenderers:(id)a0;
+ (void)prewarmOneShader:(id)a0 entryToParse:(id)a1 denoisingOptions:(struct DenoiseRemixStageOptions { int x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; } *)a2;
+ (int)prewarmShaders:(id)a0 tuningParameters:(id)a1 plistEntryName:(id)a2;

- (void)releaseResources;
- (void).cxx_destruct;
- (BOOL)dumpIntermediateData:(id)a0 counter:(int)a1;
- (int)setUniforms:(struct AmbnrConfiguration { struct NoiseModel { float x0; float x1; float x2; } x0; struct DenoiseAndSharpening { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; float x27; float x28; BOOL x29; BOOL x30; BOOL x31; BOOL x32; BOOL x33; float x34; int x35; float x36; int x37; BOOL x38; BOOL x39; float x40; float x41; float x42; float x43; float x44; float x45; float x46; struct { float x0; float x1; float x2; } x47; struct { float x0; float x1; float x2; } x48; } x1; struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; BOOL x19; BOOL x20; BOOL x21; float x22; BOOL x23; float x24; float x25; float x26; int x27; float x28; } x2; float x3; float x4; } *)a0;
- (BOOL)dumpParamsToFile:(id)a0;
- (BOOL)loadParamsFromFile:(id)a0;
- (id)initWithContext:(id)a0 options:(const struct DenoiseRemixStageOptions { int x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; } *)a1 numPyrLevels:(int)a2;
- (int)run:(id)a0 skinMask:(id)a1 skyMask:(id)a2 maskExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (int)runShader:(const id *)a0 shader:(id)a1 desc:(id)a2 uniforms:(id)a3 uniforms2:(id)a4 uniforms3:(id)a5;
- (int)setResourcesWithOutputPyramid:(id)a0 noiseMapPyramid:(id)a1 sharpeningPyramid:(id)a2 localGainMapTex:(id)a3;

@end
