@class NSString, CinematicFramingSessionOptions;
@protocol MTLDevice, MTLLibrary, MTLCommandQueue, MTLComputePipelineState;

@interface FrameUndistortionSession : NSObject <FramingSpaceManager> {
    int _cameraOrientation;
    BOOL _firstGravityVectorRegistered;
    id<MTLDevice> _metalDevice;
    id<MTLCommandQueue> _commandQueue;
    id<MTLLibrary> _library;
    id<MTLComputePipelineState> _pipelineComputeStates[2];
    struct __CVMetalTextureCache { } *_cvMetalTextureCacheRef;
    struct { struct { void /* unknown type, empty encoding */ topLeft; void /* unknown type, empty encoding */ topRight; void /* unknown type, empty encoding */ bottomLeft; void /* unknown type, empty encoding */ bottomRight; } corners; } _backProjectedFramingSpaceViewport;
}

@property (readonly, nonatomic) struct { int width; int height; } outputDimensions;
@property (readonly, nonatomic) int mode;
@property (readonly, nonatomic) NSString *portType;
@property (readonly, nonatomic) int numCCWRotationsFromInputToFramingSpace;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ gravity;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ normalizedOutputToSensorScalingCoefs; void /* unknown type, empty encoding */ normalizedOutputToSensorOffset; float mmFactor; int distortionCalibrationValidMaxRadiusInPixels; struct { void /* unknown type, empty encoding */ columns[3]; } intrinsicMatrixT; struct { float c0; float c2; float c4; float c6; float c8; float c10; float c12; float c14; } inverseGeometricDistortionPolynomial; struct { float c0; float c2; float c4; float c6; float c8; float c10; float c12; float c14; } forwardGeometricDistortionPolynomial; } calibrationParams;
@property (readonly, nonatomic) float additionalCameraRotation;
@property (readonly, nonatomic) int sensorID;
@property (nonatomic) unsigned int exifOrientation;
@property (nonatomic) int outputType;
@property (readonly, nonatomic) struct { struct { } x0; } backProjectedFramingSpaceViewport;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[3]; } normalizedFramingSpaceLandscapeLeftToInputImageTransformMatrix;
@property (readonly, nonatomic) BOOL imageTransformIsValid;
@property (nonatomic) int cameraOrientation;
@property (nonatomic) BOOL cameraOrientationCorrectionEnabled;
@property (retain, nonatomic) CinematicFramingSessionOptions *options;
@property (readonly, nonatomic) BOOL isFrontCamera;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } outputROI;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } framingSpaceBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } defaultFramingSpaceViewport;
@property (readonly, nonatomic) float maxWidth;

- (void)finish;
- (int)_compileShaders;
- (void)dealloc;
- (void).cxx_destruct;
- (void)initializeMetal;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_adjustDisplayRectToFitInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (int)_cachedTexturesFromPixelBuffer:(struct __CVBuffer { } *)a0 textures:(struct { unsigned int x0; id x1[2]; } *)a1;
- (id)_compileComputeShader:(id)a0 pixelFormat:(unsigned long long)a1;
- (int)_computeNumberOfCCWRotationsFromInputToFramingSpaceForOrientation:(int)a0;
- (int)_createComputePipelinesForShaders:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_framingSpaceBoundsLandscapeLeft;
- (float)_getHeightDerivativeForWidth:(float)a0 widthDerivative:(float)a1 outputAspectRatioInDeviceOrientation:(float)a2;
- (float)_getHeightForWidth:(float)a0 outputAspectRatioInDeviceOrientation:(float)a1;
- (int)_getTransformShaderParameters:(unsigned long long)a0 pipelineIndexToUse:(int *)a1;
- (float)_getWidthForHeight:(float)a0 outputAspectRatioInDeviceOrientation:(float)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_projectRectInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toDisplayRectInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_setShaderParametersForRotationNormalizedDisplayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 outputROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 calibrationParameters:(struct { float x0; int x1; struct { void /* unknown type, empty encoding */ x0[3]; } x2; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x3; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x4; })a2 commandEncoder:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_warpRectInInputImageCoordinatesToFramingSpaceInLandscapeLeft:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 calibrationParameters:(struct { float x0; int x1; struct { void /* unknown type, empty encoding */ x0[3]; } x2; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x3; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x4; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustDisplayRectToFitInFramingSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeNewCoordinatesInOrientation:(int)a0 forViewportInCurrentOrientation:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })defaultFramingSpaceViewport:(float)a0;
- (float)getHeightDerivativeForWidth:(float)a0 widthDerivative:(float)a1;
- (float)getHeightForWidth:(float)a0;
- (float)getWidthForHeight:(float)a0;
- (id)initWithOutputDimensions:(struct { int x0; int x1; })a0 mode:(int)a1 portType:(id)a2;
- (float)outputAspectRatioInDeviceOrientation;
- (int)processBuffer:(struct __CVBuffer { } *)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 outputPixelBuffer:(struct __CVBuffer { } *)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })projectRectInFramingSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toDisplayRectInFramingSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct { struct { } x0; })projectRectInFramingSpaceLandscapeLeftToInputImageCoordinates:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct { struct { } x0; })projectRectInInputImageToFramingSpaceLandscapeLeftCoordinates:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)registerAdditionalCameraRotation:(float)a0;
- (int)registerCalibrationData:(id)a0;
- (void)registerGravityX:(float)a0 y:(float)a1 z:(float)a2;
- (void)registerOutputType:(int)a0;
- (void)registerSensorID:(int)a0;
- (void)warpMetadataInInputImageCoordinatesToFramingSpace:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })warpRectInInputImageCoordinatesToFramingSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (int)zRotationsFromNaturalOrientationForCamera:(int)a0;

@end
