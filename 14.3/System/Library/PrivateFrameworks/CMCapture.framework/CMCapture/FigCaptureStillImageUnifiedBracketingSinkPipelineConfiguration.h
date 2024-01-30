@class NSDictionary, NSArray;

@interface FigCaptureStillImageUnifiedBracketingSinkPipelineConfiguration : FigCaptureBaseStillImageSinkPipelineConfiguration {
    NSDictionary *_geometricDistortionCorrectionEnabledByPortType;
}

@property (nonatomic) unsigned int pipelineStagePriority;
@property (nonatomic) unsigned int inferencePriority;
@property (nonatomic) int deviceType;
@property (retain, nonatomic) NSDictionary *sensorIDStringsByPortType;
@property (retain, nonatomic) NSDictionary *baseZoomFactorsByPortType;
@property (nonatomic) int redEyeReductionVersion;
@property (nonatomic) int semanticRenderingVersion;
@property (nonatomic) int semanticDevelopmentVersion;
@property (retain, nonatomic) NSArray *portTypesWithGeometricDistortionCorrectionEnabled;
@property (nonatomic) BOOL intelligentDistortionCorrectionEnabled;
@property (nonatomic) int intelligentDistortionCorrectionVersion;
@property (nonatomic) unsigned int demosaicedRawPixelFormat;
@property (retain, nonatomic) NSDictionary *rawColorCalibrationsByPortType;
@property (retain, nonatomic) NSDictionary *rawLensShadingCorrectionCoefficientsByPortType;
@property (nonatomic) BOOL deferredProcessingSupported;
@property (nonatomic) BOOL deferredPhotoProcessorEnabled;
@property (nonatomic) BOOL adjustablePortraitLightingEffectStrengthSupported;
@property (nonatomic) BOOL deepFusionSupported;
@property (nonatomic) BOOL responsiveShutterSupported;
@property (nonatomic) BOOL fastCapturePrioritizationEnabled;
@property (nonatomic) BOOL captureTimePhotosCurationSupported;
@property (nonatomic) BOOL supportsCameraCalibrationDataWithoutDepthForBravoConstituentPhoto;
@property (nonatomic) int depthDataType;
@property (nonatomic) BOOL sifrStillImageCaptureEnabledIfAvailable;
@property (nonatomic) float gainMapMainImageDownscalingFactor;
@property (retain, nonatomic) NSArray *enabledSemanticSegmentationMatteURNs;
@property (retain, nonatomic) NSDictionary *cameraInfoByPortType;

- (void)dealloc;

@end
