@class PyramidStorage_NRF, RegPyrFusionShaders, FigMetalContext;
@protocol MTLTexture, MTLBuffer, MTLHeap;

@interface RegPyrFusion : NSObject {
    FigMetalContext *_metal;
    id<MTLBuffer> _pyrHomographyTeleIsRef[20];
    id<MTLBuffer> _pyrHomographyWideIsRef[20];
    unsigned int _pyrWidths[20];
    unsigned int _pyrHeights[20];
    RegPyrFusionShaders *_shaders;
    id<MTLHeap> _uniformsHeap;
    struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; } x1; struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; } x2; } *_teleIsRefCalibData;
    struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; } x1; struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; } x2; } *_wideIsRefCalibData;
    id<MTLBuffer> _pyrScaleParamLevel0[2];
    id<MTLBuffer> _pyrRoiScaleLevel0[2];
    id<MTLBuffer> _pyrScaleParams[20];
    PyramidStorage_NRF *_refPyr;
    PyramidStorage_NRF *_nonRefPyr;
}

@property (readonly, nonatomic) id<MTLTexture> shiftMap;
@property (readonly, nonatomic) id<MTLTexture> confidenceMap;

+ (int)prewarmShaders:(id)a0;
+ (void)prewarmRenderers:(id)a0;
+ (void)calculatePyramidDimensions:(float)a0 pyrWidths:(int *)a1 pyrHeights:(int *)a2 topLevelIndex:(int)a3 maxDim:(int)a4 minDim:(int)a5;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (int)registerImagesWithReferenceImg:(id)a0 nonRefImage:(id)a1 refTexlvl1:(id)a2 nonRefTexlvl1:(id)a3 shiftMap:(id)a4 confidenceMap:(id)a5;
- (void)scaleHomographyUsingCalib:(struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; } x1; struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; } x2; } *)a0 to:(id *)a1;
- (int)setupPyramidScalersUsingCalib;
- (int)initialDownScaleWithCommandBuffer:(id)a0 renderPassDesc:(id)a1 refTex:(id)a2 nonRefTex:(id)a3 refTexOut:(id)a4 nonRefTexOut:(id)a5 refCamType:(int)a6;
- (int)bilinearScaleWithCommandBuffer:(id)a0 renderPassDesc:(id)a1 refTexIn:(id)a2 refTexOut:(id)a3 nonRefTexIn:(id)a4 nonRefTexOut:(id)a5 pyrLevel:(int)a6;
- (int)generateDerivativesWithCommandBuffer:(id)a0 renderPassDesc:(id)a1 inputTex:(id)a2 outputTex:(id)a3;
- (int)basicSearchWithCommandBuffer:(id)a0 renderPassDesc:(id)a1 refDerivTex:(id)a2 nonRefDerivTex:(id)a3 prevShiftMap:(id)a4 nextShiftMap:(id)a5 homography:(id)a6 pyrLevel:(int)a7;
- (int)smoothShiftMapWithCommandBuffer:(id)a0 renderPassDesc:(id)a1 input:(id)a2 output:(id)a3;
- (int)selectionWithCommandBuffer:(id)a0 renderPassDesc:(id)a1 refDerivTex:(id)a2 nonRefDerivTex:(id)a3 prevShiftMap:(id)a4 nextShiftMap:(id)a5 homography:(id)a6 pyrLevel:(int)a7;
- (int)fusionWithCommandBuffer:(id)a0 refTex:(id)a1 refDerivTex:(id)a2 nonRefDerivTex:(id)a3 prevShiftMap:(id)a4 nextShiftMap:(id)a5 homography:(id)a6 pyrLevel:(int)a7;
- (int)confidenceMapWithCommandBuffer:(id)a0 renderPassDesc:(id)a1 shiftMap:(id)a2 confidenceOut:(id)a3;

@end
