@class NSDictionary, NSArray;

@interface FigCaptureStillImageUnifiedBracketingSinkPipelineConfiguration : FigCaptureBaseStillImageSinkPipelineConfiguration {
    NSDictionary *_geometricDistortionCorrectionEnabledByPortType;
}

@property (nonatomic) unsigned int pipelineStagePriority;
@property (nonatomic) unsigned int inferencePriority;
@property (nonatomic) int deviceType;
@property (nonatomic) struct { int width; int height; } rawSensorDimensions;
@property (nonatomic) struct { int width; int height; } outputStillImageDimensions;
@property (retain, nonatomic) NSDictionary *sensorIDStringsByPortType;
@property (retain, nonatomic) NSDictionary *baseZoomFactorsByPortType;
@property (nonatomic) int redEyeReductionVersion;
@property (nonatomic) int semanticRenderingVersion;
@property (nonatomic) int semanticDevelopmentVersion;
@property (nonatomic) BOOL semanticStyleRenderingEnabled;
@property (retain, nonatomic) NSArray *portTypesWithGeometricDistortionCorrectionEnabled;
@property (nonatomic) BOOL intelligentDistortionCorrectionEnabled;
@property (nonatomic) int dcProcessorVersion;
@property (nonatomic) BOOL gdcInDCProcessorSupported;
@property (nonatomic) struct { int width; int height; } gdcInDCProcessorOutputCropDimensions;
@property (nonatomic) int greenGhostMitigationVersion;
@property (nonatomic) int deepZoomVersion;
@property (nonatomic) unsigned int demosaicedRawPixelFormat;
@property (retain, nonatomic) NSDictionary *rawColorCalibrationsByPortType;
@property (retain, nonatomic) NSDictionary *rawLensShadingCorrectionCoefficientsByPortType;
@property (nonatomic) BOOL deferredProcessingSupported;
@property (nonatomic) BOOL deferredPhotoProcessorEnabled;
@property (nonatomic) BOOL adjustablePortraitLightingEffectStrengthSupported;
@property (nonatomic) BOOL deepFusionSupported;
@property (nonatomic) BOOL learnedNRSupported;
@property (nonatomic) BOOL responsiveShutterSupported;
@property (nonatomic) BOOL fastCapturePrioritizationEnabled;
@property (nonatomic) BOOL captureTimePhotosCurationSupported;
@property (nonatomic) BOOL supportsCameraCalibrationDataWithoutDepthForBravoConstituentPhoto;
@property (nonatomic) int depthDataType;
@property (nonatomic) int pearlModuleType;
@property (nonatomic) BOOL sifrStillImageCaptureEnabledIfAvailable;
@property (nonatomic) float gainMapMainImageDownscalingFactor;
@property (retain, nonatomic) NSArray *enabledSemanticSegmentationMatteURNs;
@property (retain, nonatomic) NSArray *supportedSemanticSegmentationMatteURNs;
@property (nonatomic) int maxLossyCompressionLevel;
@property (retain, nonatomic) NSDictionary *cameraInfoByPortType;
@property (nonatomic) BOOL highQualityPhotoCaptureForVideoFormatEnabled;

- (void)dealloc;

@end
