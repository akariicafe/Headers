@class NSString, NSArray, FocalPlaneRestriction, MattingTuningParameters, NSDictionary, FocalPlane, FigMetalContext, MattingSolver, MPSImageBilinearScale;
@protocol MTLTexture, MTLComputePipelineState, MattingFilter;

@interface FigMatting : NSObject <ImageBufferProcessor> {
    FigMetalContext *_metalContext;
    id<MattingFilter> _mattingFilter1;
    id<MattingFilter> _mattingFilter2;
    FocalPlane *_focalPlane;
    FocalPlaneRestriction *_focalPlaneRestriction;
    MattingSolver *_mattingSolver;
    MattingSolver *_disparitySolver;
    id<MTLTexture> _inputBGRA;
    id<MTLTexture> _inputBGRABilinearDownsampledToSegmentationAndConstraintsRes;
    id<MTLTexture> _inputDisparity;
    id<MTLTexture> _inputSegmentation;
    id<MTLTexture> _outputRefinedDisparity;
    id<MTLTexture> _outputMatte;
    id<MTLTexture> _inputDepth;
    id<MTLTexture> _solverConstraints;
    id<MTLTexture> _refinedSegmentation;
    id<MTLTexture> _refinedDisparity;
    id<MTLComputePipelineState> _copyTextureKernel;
    MPSImageBilinearScale *_bilinearScale;
    unsigned int _currentRefinementWidth;
    unsigned int _currentRefinementHeight;
    unsigned int _currentSegmentationWidth;
    unsigned int _currentSegmentationHeight;
    unsigned int _currentDisparityWidth;
    unsigned int _currentDisparityHeight;
    unsigned int _currentImageWidth;
    unsigned int _currentImageHeight;
    MattingTuningParameters *_mattingTuningParameters;
    int _disparityRefinementVersion;
    struct { float zeroShiftPercentile; float preprocessingAlphaThreshold; float preprocessingAmplitude; float preprocessingExponent; float preprocessingGamma; float preprocessingMinFactor; float preprocessingMaxFactor; float radius; float subsampling; float epsilon; unsigned int iterations; } _disparityRefinementConfig;
}

@property (nonatomic) struct __CVBuffer { } *imagePixelBuffer;
@property (nonatomic) struct __CVBuffer { } *inputSegmentationPixelBuffer;
@property (nonatomic) struct __CVBuffer { } *inputDisparityPixelBuffer;
@property (nonatomic) struct __CVBuffer { } *inputDepthPixelBuffer;
@property (nonatomic) struct __CVBuffer { } *inputSemanticsHairPixelBuffer;
@property (nonatomic) struct __CVBuffer { } *inputSemanticsSkinPixelBuffer;
@property (nonatomic) struct __CVBuffer { } *inputSemanticsTeethPixelBuffer;
@property (nonatomic) struct __CVBuffer { } *inputSemanticsGlassesPixelBuffer;
@property (nonatomic) struct __CVBuffer { } *inputSemanticsSkyPixelBuffer;
@property (nonatomic) struct __CVBuffer { } *outputRefinedDisparityPixelBuffer;
@property (nonatomic) struct __CVBuffer { } *outputMattePixelBuffer;
@property (nonatomic) struct __CVBuffer { } *outputSemanticsHairPixelBuffer;
@property (nonatomic) struct __CVBuffer { } *outputSemanticsSkinPixelBuffer;
@property (nonatomic) struct __CVBuffer { } *outputSemanticsTeethPixelBuffer;
@property (nonatomic) struct __CVBuffer { } *outputSemanticsGlassesPixelBuffer;
@property (nonatomic) struct __CVBuffer { } *outputSemanticsSkyPixelBuffer;
@property (retain, nonatomic) NSDictionary *options;
@property (nonatomic) struct { unsigned int inputImageWidth; unsigned int inputImageHeight; unsigned int inputDisparityWidth; unsigned int inputDisparityHeight; unsigned int segmentationWidth; unsigned int segmentationHeight; unsigned int enabledOutputs; int tuningConfiguration; } config;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } syntheticFocusRectangle;
@property (copy, nonatomic) NSArray *faceLandmarks;
@property (copy, nonatomic) NSArray *faceSegments;
@property (nonatomic) int exifOrientation;
@property (retain, nonatomic) NSDictionary *tuningParameters;
@property (retain, nonatomic) NSDictionary *cameraInfoByPortType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)FigMattingOutputToShortString:(unsigned int)a0;

- (int)prewarm;
- (int)_compileShadersWithLibrary:(id)a0;
- (id)_createTextureOfSize:(struct CGSize { double x0; double x1; })a0 withFormat:(unsigned long long)a1;
- (int)prewarmWithTuningParameters:(id)a0;
- (int)resetState;
- (int)finishScheduling;
- (int)setup;
- (int)finishProcessing;
- (int)prepareToProcess:(unsigned int)a0;
- (int)_allocateResources:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; })a0;
- (void)dealloc;
- (int)processFocalPlaneAndSolverOnly;
- (int)purgeResources;
- (int)_encodeCopyTextureOn:(id)a0 sourceTexture:(id)a1 destinationTexture:(id)a2;
- (int)process;
- (id)init;
- (id)initWithCommandQueue:(id)a0;
- (int)_prewarmMPSKernels;
- (void).cxx_destruct;

@end
