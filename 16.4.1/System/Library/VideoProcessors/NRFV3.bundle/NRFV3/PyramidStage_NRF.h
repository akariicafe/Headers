@class FigMetalContext, PyramidStorage_NRF, FigM2MController;
@protocol MTLHeap, MTLBuffer;

@interface PyramidStage_NRF : NSObject {
    struct PyramidStageConfiguration { BOOL use_m2m; BOOL do_sync_at_end; BOOL compensate_gpu_shift; BOOL supportFP16; } _conf;
    PyramidStorage_NRF *_pyr;
    FigM2MController *_m2mController;
    FigMetalContext *_metal;
    id<MTLHeap> _uniformsHeap;
    id<MTLBuffer> _uniforms_Y[20];
    id<MTLBuffer> _uniforms_UV[20];
    BOOL _forceHW;
    int _band0ColorSpace;
    struct ColorSpaceConversionParameters { struct { void /* unknown type, empty encoding */ columns[3]; } cscMatrixFwd; struct { void /* unknown type, empty encoding */ columns[3]; } cscMatrix; struct { void /* unknown type, empty encoding */ columns[3]; } colorCorrectionMatrix; struct TransferFunctionParameters { float linearScale; float linearThreshold; float nonLinearScale; float nonLinearBias; float nonLinearPower; } transferFunctionFwd; struct TransferFunctionParameters { float linearScale; float linearThreshold; float nonLinearScale; float nonLinearBias; float nonLinearPower; } transferFunctionInv; float finalScaleFwd; float finalScale; float chromaBias; BOOL outputToLinearYCbCr; BOOL clampNegativesToZero; BOOL applyColorCorrection; BOOL useGpuCSC; } _colorSpaceConversionParameters;
}

@property (readonly, nonatomic) BOOL useM2M;

+ (int)prewarmShaders:(id)a0;

- (int)runM2MWithFilters:(struct PyramidFilterParams { int x0; float x1; float x2; } *)a0;
- (void)setColorSpace:(int)a0 withParams:(const struct ColorSpaceConversionParameters { struct { void /* unknown type, empty encoding */ x0[3]; } x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1; struct { void /* unknown type, empty encoding */ x0[3]; } x2; struct TransferFunctionParameters { float x0; float x1; float x2; float x3; float x4; } x3; struct TransferFunctionParameters { float x0; float x1; float x2; float x3; float x4; } x4; float x5; float x6; float x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; } *)a1;
- (id)initWithOptions:(id)a0 context:(id)a1;
- (int)runWithFilters:(struct PyramidFilterParams { int x0; float x1; float x2; } *)a0;
- (int)setResourcesWithPyramid:(id)a0;
- (int)runGPUWithFilters:(struct PyramidFilterParams { int x0; float x1; float x2; } *)a0 doShift:(BOOL)a1;
- (void).cxx_destruct;

@end
