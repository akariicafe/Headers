@class IdcContentPreservingWarping, NSArray, NSDictionary, NSString, FigMetalContext, IntelligentDistortionCorrection_Utilities, EdgeDrawingLineDetector;
@protocol MTLCommandQueue, MTLBuffer, MTLTexture;

@interface FigIntelligentDistortionCorrectionProcessorV1 : NSObject <FigIntelligentDistortionCorrectionProcessor> {
    FigMetalContext *_metalContext;
    struct { id<MTLBuffer> buffer; unsigned long long offset; unsigned long long size; unsigned long long subModuleOffset; unsigned long long subModuleSize; unsigned long long roiDataOffset; unsigned long long gatingCounters; } _sharedMetalBuffer;
    struct { void /* unknown type, empty encoding */ segmentationMaskDimensions; } _currentMax;
    struct { IntelligentDistortionCorrection_Utilities *processor; } _idcUtilities;
    struct { EdgeDrawingLineDetector *processor; struct { unsigned int capacity; unsigned int count; unsigned long long offset; id<MTLBuffer> buffer; } results; } _edgeDrawingLineDetector;
    struct { IdcContentPreservingWarping *processor; struct { id<MTLBuffer> buffer; unsigned int commandStatus[4]; } executionErrorInformation; } _contentPreservingWarping;
    struct { BOOL disableStationaryDeviceDetection; BOOL disableGating; } _defaultWrites;
    float _minDistanceToEdge;
    BOOL _isShaderHarvesting;
    BOOL _areAllShadersCompiled;
    struct { id<MTLTexture> undistortedSegmentationMask; id<MTLTexture> extendedMesh; id<MTLTexture> invertedMesh; } _textures;
    struct { void /* unknown type, empty encoding */ finalImageDimensions; float pixelSize; void /* unknown type, empty encoding */ opticalCenterOffset; struct { float c0; float c2; float c4; float c6; float c8; float c10; float c12; float c14; } gdcForwardPolynomial; struct { float c0; float c2; float c4; float c6; float c8; float c10; float c12; float c14; } gdcInversePolynomial; BOOL doUndistortion; struct { unsigned int maskGatingThreshold; unsigned int maximumFaceRectangleThreshold; unsigned int minimumFaceRectangleThreshold; unsigned int centerRadiusThreshold; float centerRadiusScale; unsigned int centerMaskThreshold; } classifier; float barrelDistortionPolynomial[6]; struct { struct { int x0; int y0; int x1; int y1; int width; int height; } full; struct { int x0; int y0; int x1; int y1; int width; int height; } valid; struct { int x0; int y0; int x1; int y1; int width; int height; } sensor; struct { int x0; int y0; int x1; int y1; int width; int height; } crop; } inputImageDimensions; struct { struct { int x0; int y0; int x1; int y1; int width; int height; } full; } outputImageDimensions; struct { int x0; int y0; int x1; int y1; int width; int height; } segmentationMaskBoundingRectangle; struct { unsigned int downscaleFactor; float gradientMagnitudeThreshold; unsigned int gradientNormalizationRadius; unsigned int anchorScanInterval; unsigned int lineFitInitialLength; float lineFitErrorThreshold; float lineMergeDeviationThreshold; float lineMergeDistanceThreshold; unsigned int minimumLineLength; unsigned int segmentationMaskDilationRadius; } lineDetector; struct { float esWeight1; float esWeight2; float edWeight; float elWeight; unsigned int pareDownConstant; unsigned int segmentationMaskErosionRadius; } contentPreservingWarping; BOOL applyAdjustedEsWeights; unsigned int numCurveOptions; struct { float coefficients[7]; } curveOptions[10]; unsigned int numClassificationOptions; struct { BOOL gated; int curveOption; float distortionTarget; } classificationOptions[10]; float curveFalloffMu; float curveFalloffSigma; } _bundleConfiguration;
    void /* unknown type, empty encoding */ _transformCenterMeshDimensions;
    struct { id<MTLTexture> inputImageTexture; id<MTLTexture> inputSegmentationMaskTexture; id<MTLTexture> outputImageTexture; id<MTLTexture> processedSegmentationMaskTexture; unsigned long long inputImagePixelFormat; unsigned long long outputImagePixelFormat; BOOL cpwDataValid; BOOL bundleConfigurationParametersValid; unsigned int subProcessIntelligentDistortionErrorCode; unsigned int correctionTypeSelectionCode; } _rt;
}

@property (retain, nonatomic) NSDictionary *tuningParameters;
@property (retain, nonatomic) NSDictionary *cameraInfoByPortType;
@property (nonatomic) BOOL processIntelligentDistortionCorrection;
@property (nonatomic) BOOL processGeometricDistortionCorrection;
@property (nonatomic) BOOL applyZoom;
@property (nonatomic) BOOL generateMask;
@property (nonatomic) struct __CVBuffer { } *inputImage;
@property (nonatomic) struct __CVBuffer { } *lowResSegmentationMask;
@property (nonatomic) struct __CVBuffer { } *outputImage;
@property (retain, nonatomic) NSDictionary *inputImageMetadataDictionary;
@property (retain, nonatomic) NSArray *faceObservations;
@property (nonatomic) BOOL deviceWasStationaryDuringCapture;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inputImageCropRect;
@property (nonatomic) struct { int width; int height; } finalImageDimensions;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } outputValidBufferRect;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } globalTransform;
@property (readonly, nonatomic) BOOL globalTransformIsValid;
@property (readonly, nonatomic) BOOL zoomWasApplied;
@property (nonatomic) BOOL withTemporalConsistency;
@property (readonly, nonatomic) unsigned int makernoteEntry;
@property (readonly, nonatomic) int correctionType;
@property (readonly, nonatomic) int gdcSource;
@property (retain, nonatomic) id<MTLCommandQueue> metalCommandQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)prewarm;
- (int)resetState;
- (int)purgeResources;
- (int)process;
- (int)finishProcessing;
- (int)setup;
- (int)translateError:(int)a0;
- (void).cxx_destruct;
- (id)init;
- (int)prepareToProcess:(unsigned int)a0;
- (void)dealloc;
- (int)applyExistingCorrectionToSecondaryAsset:(struct __CVBuffer { } *)a0 outputPixelBuffer:(struct __CVBuffer { } *)a1;
- (int)getAdjustedGDCInformation:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; float x1[4]; int x2; int x3; struct CGPoint { double x0; double x1; } x4; } *)a0;
- (id)getParametersListName;
- (int)determineWorkingBufferRequirements:(struct { unsigned long long x0; } *)a0 maximumInputImageWidth:(unsigned int)a1 maximumInputImageHeight:(unsigned int)a2 maximumSegmentationMaskWidth:(unsigned int)a3 maximumSegmentationMaskHeight:(unsigned int)a4;
- (int)setSharedMetalBuffer:(id)a0 offset:(unsigned long long)a1 size:(unsigned long long)a2;
- (int)memoryAllocationHandler:(struct { unsigned long long x0; } *)a0 memoryAllocationParameters:(struct { unsigned int x0; unsigned int x1; })a1 sharedMetalBuffer:(id)a2 sharedMetalBufferOffset:(unsigned long long)a3 sharedMetalBufferSize:(unsigned long long)a4;
- (int)compilerShaders;
- (int)prepareInputImagePixelBuffer:(struct { struct { int x0; int x1; int x2; int x3; int x4; int x5; } x0; struct { int x0; int x1; int x2; int x3; int x4; int x5; } x1; struct { int x0; int x1; int x2; int x3; int x4; int x5; } x2; struct { int x0; int x1; int x2; int x3; int x4; int x5; } x3; } *)a0;
- (int)prepareSegmentationMaskPixelBuffer:(struct { int x0; int x1; int x2; int x3; int x4; int x5; } *)a0;
- (int)prepareOutputImagePixelBuffer:(struct { struct { int x0; int x1; int x2; int x3; int x4; int x5; } x0; } *)a0;
- (int)computeCorrectionType;
- (int)subProcessIntelligentDistortion:(id)a0 cpwProcessingErrors:(struct { int x0; int x1; int x2; int x3; int x4; int x5; } *)a1;
- (void)buildMakernoteEntry:(int)a0 cpwProcessingErrors:(struct { int x0; int x1; int x2; int x3; int x4; int x5; } *)a1 idcApplied:(BOOL)a2;
- (int)undistortSegmentationMask;
- (int)mapPixelFormat:(struct __CVBuffer { } *)a0 format:(unsigned long long *)a1;
- (float)convertPercentageParameter:(unsigned int)a0;
- (void)isShaderHarvesting:(id)a0;

@end
