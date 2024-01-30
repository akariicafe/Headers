@class NSDictionary, NSArray;

@interface FigCaptureStillImageUnifiedBracketingSinkPipelineConfiguration : FigCaptureBaseStillImageSinkPipelineConfiguration <NSSecureCoding> {
    int swfrVersion;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int stillImageSinkPipelineProcessingMode;
@property (nonatomic) unsigned int pipelineStagePriority;
@property (nonatomic) unsigned int inferencePriority;
@property (nonatomic) int deviceType;
@property (nonatomic) BOOL deviceHasFlash;
@property (nonatomic) struct { int width; int height; } rawSensorDimensions;
@property (nonatomic) struct { int width; int height; } outputStillImageDimensions;
@property (retain, nonatomic) NSDictionary *sensorIDStringsByPortType;
@property (retain, nonatomic) NSDictionary *baseZoomFactorsByPortType;
@property (nonatomic) int swfrVersion;
@property (nonatomic) int redEyeReductionVersion;
@property (nonatomic) int semanticRenderingVersion;
@property (nonatomic) int semanticDevelopmentVersion;
@property (nonatomic) BOOL semanticStyleRenderingEnabled;
@property (nonatomic) int dcProcessorVersion;
@property (retain, nonatomic) NSArray *portTypesWithGeometricDistortionCorrectionEnabled;
@property (retain, nonatomic) NSArray *portTypesWithIntelligentDistortionCorrectionEnabled;
@property (nonatomic) BOOL gdcInDCProcessorSupported;
@property (nonatomic) struct { int width; int height; } gdcInDCProcessorOutputCropDimensions;
@property (nonatomic) int greenGhostMitigationVersion;
@property (nonatomic) int deepZoomVersion;
@property (nonatomic) unsigned int demosaicedRawPixelFormat;
@property (retain, nonatomic) NSDictionary *rawColorCalibrationsByPortType;
@property (retain, nonatomic) NSDictionary *rawLensShadingCorrectionCoefficientsByPortType;
@property (nonatomic) BOOL deferredProcessingSupported;
@property (nonatomic) BOOL adjustablePortraitLightingEffectStrengthSupported;
@property (nonatomic) BOOL deepFusionSupported;
@property (nonatomic) struct { int width; int height; } deepFusionEnhancedResolutionDimensions;
@property (nonatomic) BOOL learnedNRSupported;
@property (nonatomic) BOOL responsiveShutterSupported;
@property (nonatomic) BOOL fastCapturePrioritizationEnabled;
@property (nonatomic) BOOL captureTimePhotosCurationSupported;
@property (nonatomic) int depthDataType;
@property (nonatomic) int pearlModuleType;
@property (nonatomic) BOOL sifrStillImageCaptureEnabledIfAvailable;
@property (nonatomic) float gainMapMainImageDownscalingFactor;
@property (nonatomic) float ubInferenceMainImageDownscalingFactor;
@property (retain, nonatomic) NSArray *enabledSemanticSegmentationMatteURNs;
@property (retain, nonatomic) NSArray *supportedSemanticSegmentationMatteURNs;
@property (nonatomic) int maxLossyCompressionLevel;
@property (retain, nonatomic) NSDictionary *cameraInfoByPortType;
@property (nonatomic) BOOL highQualityPhotoCaptureForVideoFormatEnabled;
@property (nonatomic) BOOL softISPSupported;
@property (nonatomic) unsigned int sensorRawPixelFormat;
@property (nonatomic) BOOL quadraProcessingSupportEnabled;
@property (nonatomic) struct { int width; int height; } ultraHighResolutionSensorRawDimensions;
@property (nonatomic) BOOL ultraHighResolutionProcessingEnabled;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;

@end
