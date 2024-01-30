@class NSDictionary;

@interface FigCaptureCameraParameters : NSObject {
    NSDictionary *_commonDistortionCorrectionParameters;
    NSDictionary *_meteorParameters;
    NSDictionary *_stereoDisparityParameters;
    NSDictionary *_depthProcessingParameters;
    NSDictionary *_landmarksParameters;
    NSDictionary *_learnedMattingParameters;
    NSDictionary *_personSemanticsParameters;
    NSDictionary *_coreImagePortraitFilterParameters;
    NSDictionary *_commonDeepZoomParameters;
    NSDictionary *photoParameters;
}

@property (readonly, nonatomic) int meteorHeadroomProcessingType;
@property (readonly, nonatomic) NSDictionary *cameraParameters;
@property (readonly, nonatomic) NSDictionary *cameraTuningParameters;
@property (readonly, nonatomic) NSDictionary *motionAttachmentsParameters;
@property (readonly, nonatomic) NSDictionary *videoStabilizationParameters;
@property (readonly, nonatomic) NSDictionary *videoStabilizationSTFParameters;
@property (readonly, nonatomic) NSDictionary *stereoDisparityParameters;
@property (readonly, nonatomic) NSDictionary *commonNRFParameters;
@property (readonly, nonatomic) int nrfVersion;
@property (readonly, nonatomic) int distortionCorrectionVersion;
@property (readonly, nonatomic) NSDictionary *commonVideoGreenGhostMitigationParameters;
@property (readonly, nonatomic) int videoGreenGhostMitigationVersion;
@property (readonly, nonatomic) NSDictionary *photoEncoderParameters;
@property (readonly, nonatomic) int _cameraFeatureVersion;
@property (readonly, nonatomic) int deepZoomVersion;

+ (id)sharedInstance;
+ (void)initialize;
+ (int)videoDataMaxLossyCompressionLevel;
+ (id)sensorIDStringFromModuleInfo:(id)a0;
+ (int)stillImageMaxLossyCompressionLevel;
+ (int)previewMaxLossyCompressionLevel;
+ (int)movieFileMaxLossyCompressionLevelForPixelFormat:(unsigned int)a0;
+ (unsigned int)sensorIDFromSensorIDString:(id)a0;
+ (id)sdofTuningParametersForSensorIDDictionary:(id)a0 zoomFactor:(float)a1;
+ (id)sensorIDStringFromMetadata:(id)a0;

- (id)initWithModelSpecificName:(id)a0;
- (int)focusPixelDisparityVersionForPortType:(id)a0 sensorIDString:(id)a1;
- (id)initWithContentsOfFile:(id)a0;
- (int)depthProcessorVersion;
- (id)quadraSubPixelSwitchingParametersForPortType:(id)a0 sensorIDString:(id)a1;
- (id)actionCameraSceneMonitoringParametersForPortType:(id)a0 sensorIDString:(id)a1;
- (int)disparityRefinementTypeForPortType:(id)a0 sensorIDString:(id)a1 zoomFactor:(float)a2;
- (int)disparityVersion;
- (id)focalLengthCharacterizationForStream:(id)a0;
- (BOOL)portraitPreviewForegroundBlurEnabledForPortType:(id)a0 sensorIDString:(id)a1 zoomFactor:(float)a2;
- (id)chromaticDefringingParametersForPortType:(id)a0 sensorIDString:(id)a1;
- (int)mattingVersionForPortType:(id)a0 sensorIDString:(id)a1;
- (BOOL)complementMatteSuppressionDecisionWithISPDetectedFaces;
- (int)disparityVersionForPortType:(id)a0 sensorIDString:(id)a1;
- (id)sensorIDDictionaryForStream:(id)a0;
- (void)dealloc;
- (id)sensorIDDictionaryForPortType:(id)a0 sensorIDString:(id)a1;
- (int)learnedMattingVersion;
- (int)personSemanticsVersion;
- (int)videoStabilizationProcessorVersion;
- (id)cameraSettingParametersForPortType:(id)a0 sensorIDString:(id)a1;
- (BOOL)chromaticDefringingEnabledForSlomoForPortType:(id)a0 sensorIDString:(id)a1;
- (int)fsdNetStereoImagesAlignmentForPortType:(id)a0 sensorIDString:(id)a1;
- (id)init;
- (id)portraitSceneMonitoringParametersForPortType:(id)a0 sensorIDString:(id)a1 zoomFactor:(float)a2;
- (BOOL)chromaticDefringingEnabledForVideoForPortType:(id)a0 sensorIDString:(id)a1;
- (struct { unsigned short x0; unsigned short x1; unsigned short x2; })landmarksVersionForInferenceType:(int)a0;
- (int)portraitSceneMonitorVersionForPortType:(id)a0 sensorIDString:(id)a1 zoomFactor:(float)a2;
- (int)coreImagePortraitFilterVersion;
- (int)sdofRenderingVersionForPortType:(id)a0 sensorIDString:(id)a1 zoomFactor:(float)a2;
- (unsigned int)landmarksConstellationPointCountForInferenceType:(int)a0;
- (BOOL)panoramaRequiresLTMLockingForPortType:(id)a0 sensorIDString:(id)a1;

@end
