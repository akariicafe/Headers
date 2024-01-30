@class FigCalibrationMetadata, NSString, DupDownscaleHalfConvert, FigRegToolboxGPU, NSArray, NSDictionary, Calibration, NSMutableDictionary, FigMetalContext;

@interface FigCalibration : NSObject <ImageBufferProcessor> {
    DupDownscaleHalfConvert *_downscaler;
    Calibration *_calibration;
    struct __CVBuffer { } *_auxiliaryImageFull;
    struct __CVBuffer { } *_referenceImageFull;
    FigRegToolboxGPU *_keypointDetRtb;
    struct { float x0; float x1; float x2; float x3; float x4; float x5; } *_keypointListRtb;
    unsigned int _keypointGridWidth;
    unsigned int _keypointGridHeight;
    unsigned int _keypointsCount;
    unsigned int _inputImageWidth;
    unsigned int _inputImageHeight;
    unsigned int _scalerOutputWidth;
    unsigned int _scalerOutputHeight;
    unsigned int _auxiliaryPaddedWidthMax;
    unsigned int _auxiliaryPaddedHeightMax;
    struct __CVBuffer { } *_referenceImageLow;
    struct __CVBuffer { } *_referenceImageLowLumaOnly;
    struct __CVBuffer { } *_auxiliaryImageLow;
    struct __CVBuffer { } *_auxiliaryImageCropped;
    NSDictionary *_auxiliaryMeta;
    NSDictionary *_referenceMeta;
    double *_adaptiveCorrectionKeypointsReferenceDistorted;
    double *_adaptiveCorrectionKeypointsAuxiliaryDistorted;
    NSArray *_portsToConfig;
    NSMutableDictionary *_calibrationTuningParameters;
    BOOL _isPrewarming;
    struct { float distortPolynomCoefficients[8]; float undistortPolynomCoefficients[8]; float centerX; float centerY; float originalImageWidth; float originalImageHeight; float pixelSize; float homography[9]; float inverseHomography[9]; BOOL forceIdentityHomography; BOOL convertToRGBA; float disparityScalingFactor; } _gdcParametersReference;
    struct { float distortPolynomCoefficients[8]; float undistortPolynomCoefficients[8]; float centerX; float centerY; float originalImageWidth; float originalImageHeight; float pixelSize; float homography[9]; float inverseHomography[9]; BOOL forceIdentityHomography; BOOL convertToRGBA; float disparityScalingFactor; } _gdcParametersAuxiliary;
}

@property (readonly, nonatomic) FigCalibrationMetadata *calibrationMetadata;
@property (retain, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) FigMetalContext *metalContext;
@property (nonatomic) struct opaqueCMSampleBuffer { } *referenceSampleBuffer;
@property (nonatomic) struct opaqueCMSampleBuffer { } *auxiliarySampleBuffer;
@property (nonatomic) struct { unsigned long long inputImageWidth; unsigned long long inputImageHeight; float maxPaddingFactor; unsigned int keypointGridWidth; unsigned int keypointGridHeight; } calibrationConfig;
@property (retain, nonatomic) NSDictionary *tuningParameters;
@property (retain, nonatomic) NSDictionary *cameraInfoByPortType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)releaseResources;
- (int)prewarm;
- (int)resetState;
- (int)purgeResources;
- (int)prewarmWithTuningParameters:(id)a0;
- (int)process;
- (int)finishProcessing;
- (int)setup;
- (void).cxx_destruct;
- (id)init;
- (int)prepareToProcess:(unsigned int)a0;
- (BOOL)allocateResources:(struct { unsigned long long x0; unsigned long long x1; float x2; unsigned int x3; unsigned int x4; } *)a0;
- (void)dealloc;
- (BOOL)allocateResources;
- (id)initWithCommandQueue:(id)a0;
- (BOOL)isImageFullResolution:(struct __CVBuffer { } *)a0;
- (BOOL)isImageScalerOutputResolution:(struct __CVBuffer { } *)a0;
- (BOOL)_extractAndRunSanityChecks;
- (id)selectTuningParametersForCapture;
- (int)_downscaleReference:(struct __CVBuffer { } *)a0 auxiliary:(struct __CVBuffer { } *)a1 referenceMagnification:(float)a2 gainToApplyToReference:(float)a3;
- (int)_detectKeypoints:(float)a0;
- (void)fillShiftMapMetadataWithCalModel:(struct CalModel { double x0[2]; double x1[2]; double x2[2]; double x3[12]; } *)a0 referenceGDC:(struct { float x0[8]; float x1[8]; float x2; float x3; float x4; float x5; float x6; float x7[9]; float x8[9]; BOOL x9; BOOL x10; float x11; } *)a1 auxiliaryGDC:(struct { float x0[8]; float x1[8]; float x2; float x3; float x4; float x5; float x6; float x7[9]; float x8[9]; BOOL x9; BOOL x10; float x11; } *)a2;

@end
