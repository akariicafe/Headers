@class NSDictionary, NSArray, BWSensorConfiguration;
@protocol BWStillImageProcessingStatusDelegate;

@interface BWUBNodeConfiguration : BWStillImageNodeConfiguration {
    int _stillImageFusionScheme;
    NSDictionary *_sensorConfigurationsByPortType;
    NSArray *_sensorConfigurations;
    BWSensorConfiguration *_jasperSensorConfiguration;
    unsigned int _figThreadPriority;
    BOOL _alwaysAllowModifyingInputBuffers;
    BOOL _inputIs10Bit;
    int _retainedBufferCount;
    int _outputBufferCount;
    int _minimumOutputBufferCount;
    int _maxNumberOfBurstCapturesAllowedInFlight;
    BOOL _outputPoolBackPressureEnabled;
    id<BWStillImageProcessingStatusDelegate> _referenceFrameSelectionDelegate;
    BOOL _deferredProcessingSupportEnabled;
    BOOL _deferredPhotoProcessorEnabled;
    BOOL _softISPSupportEnabled;
    BOOL _quadraProcessingSupportEnabled;
    unsigned int _sensorRawPixelFormat;
    struct { int width; int height; } _rawSensorDimensions;
    struct { int width; int height; } _ultraHighResolutionSensorRawDimensions;
    BOOL _ultraHighResolutionProcessingEnabled;
    BOOL _fusionSupportEnabled;
    BOOL _digitalFlashSupportEnabled;
    BOOL _deepFusionSyntheticsInNRSupportEnabled;
    BOOL _deepFusionWaitForPreprocessingToFinish;
    BOOL _deepFusionSupportEnabled;
    struct { int width; int height; } _deepFusionEnhancedResolutionDimensions;
    int _maxDeepFusionOutputCount;
    unsigned int _learnedNRMode;
    int _deepZoomVersion;
    float _gainMapMainImageDownscalingFactor;
    float _inferenceMainImageDownscalingFactor;
    NSDictionary *_providedInferenceAttachedMediaByMode;
    int _swfrVersion;
    BOOL _redEyeReductionEnabled;
    int _semanticRenderingVersion;
    int _semanticDevelopmentVersion;
    int _personSemanticsVersion;
    BOOL _semanticStyleRenderingEnabled;
    struct { int width; int height; } _outputDimensions;
    NSArray *_portTypesWithGeometricDistortionCorrectionEnabled;
    struct { int width; int height; } _geometricDistortionCorrectionExpandedImageDimensions;
    NSArray *_portTypesWithIntelligentDistortionCorrectionEnabled;
    int _intelligentDistortionCorrectionVersion;
    BOOL _intelligentDistortionCorrectionAppliesFinalDimensions;
    int _horizontalSensorBinningFactor;
    int _verticalSensorBinningFactor;
    int _greenGhostMitigationVersion;
    struct { int width; int height; } _disparityOutputDimensions;
    int _fsdNetStereoImagesAlignment;
    BOOL _demosaicedRawEnabled;
    unsigned int _demosaicedRawPixelFormat;
    NSDictionary *_rawColorCalibrationsByPortType;
    NSDictionary *_rawLensShadingCorrectionCoefficientsByPortType;
    BOOL _depthDataDeliveryEnabled;
    BOOL _generateLiDARDepth;
}

- (void)dealloc;

@end
