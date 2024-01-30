@protocol MTLDevice, MTLLibrary, MTLCommandQueue, MTLComputePipelineState;

@interface FrameUndistortionSession : NSObject <FramingSpaceManager> {
    int _cameraOrientation;
    id<MTLDevice> _metalDevice;
    id<MTLCommandQueue> _commandQueue;
    id<MTLLibrary> _library;
    id<MTLComputePipelineState> _pipelineComputeStates[4];
    struct __CVMetalTextureCache { } *_cvMetalTextureCacheRef;
}

@property (nonatomic) struct { int width; int height; } outputDimensions;
@property (nonatomic) int cameraOrientation;
@property (readonly, nonatomic) int numCCWRotationsFromInputToFramingSpace;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ gravity;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ normalizedOutputToSensorScalingCoefs; void /* unknown type, empty encoding */ normalizedOutputToSensorOffset; float mmFactor; struct { void /* unknown type, empty encoding */ columns[3]; } intrinsicMatrixT; struct { float c0; float c2; float c4; float c6; float c8; float c10; float c12; float c14; } inverseGeometricDistortionPolynomial; struct { float c0; float c2; float c4; float c6; float c8; float c10; float c12; float c14; } forwardGeometricDistortionPolynomial; } calibrationParams;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } framingSpaceBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } defaultFramingSpaceViewport;
@property (readonly, nonatomic) float maxWidth;

- (void)finish;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (int)_compileShaders;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeNewCoordinatesInOrientation:(int)a0 forViewportInCurrentOrientation:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (int)processBuffer:(struct __CVBuffer { } *)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 outputPixelBuffer:(struct __CVBuffer { } *)a2;
- (void)registerCalibrationData:(id)a0;
- (void)registerGravityX:(float)a0 y:(float)a1 z:(float)a2;
- (void)warpMetadataInInputImageCoordinatesToFramingSpace:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })warpRectInInputImageCoordinatesToFramingSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })projectRectInFramingSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toDisplayRectInFramingSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustDisplayRectToFitInFramingSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (float)getHeightForWidth:(float)a0;
- (float)getWidthForHeight:(float)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_framingSpaceBoundsLandscapeLeft;
- (float)_getHeightDerivativeForWidth:(float)a0 widthDerivative:(float)a1 outputAspectRatioInDeviceOrientation:(float)a2;
- (float)_getHeightForWidth:(float)a0 outputAspectRatioInDeviceOrientation:(float)a1;
- (float)_getWidthForHeight:(float)a0 outputAspectRatioInDeviceOrientation:(float)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_adjustDisplayRectToFitInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_projectRectInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toDisplayRectInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_warpRectInInputImageCoordinatesToFramingSpaceInLandscapeLeft:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 calibrationParameters:(struct { float x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x2; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x3; })a1;
- (void)_setShaderParametersForRotationNormalizedDisplayRect:(SEL)a0 gidToNormalizedOutput:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 calibrationParameters:(struct { float x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x2; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x3; })a2 commandEncoder:(id)a3;
- (float)getHeightDerivativeForWidth:(float)a0 widthDerivative:(float)a1;
- (void)initializeMetal;
- (int)_computeNumberOfCCWRotationsFromInputToFramingSpaceForOrientation:(int)a0;
- (int)_cachedTexturesFromPixelBuffer:(struct __CVBuffer { } *)a0 isOptimized:(BOOL)a1 textures:(struct { unsigned int x0; id x1[2]; } *)a2;
- (int)_getTransformShaderParameters:(unsigned long long)a0 isLuma:(BOOL)a1 pixelRatio:(unsigned int *)a2 pipelineIndexToUse:(int *)a3;
- (float)outputAspectRatioInDeviceOrientation;
- (int)_createComputePipelinesForShaders:(id)a0;
- (id)_compileComputeShader:(id)a0 pixelFormat:(unsigned long long)a1;

@end
