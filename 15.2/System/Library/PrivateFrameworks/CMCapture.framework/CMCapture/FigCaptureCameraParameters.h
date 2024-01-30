@class NSDictionary;

@interface FigCaptureCameraParameters : NSObject {
    NSDictionary *_meteorParameters;
    NSDictionary *_stereoDisparityParameters;
    NSDictionary *_depthProcessingParameters;
    NSDictionary *_landmarksParameters;
    NSDictionary *_learnedMattingParameters;
    NSDictionary *_personSemanticsParameters;
    NSDictionary *_coreImagePortraitFilterParameters;
}

@property (class, readonly, nonatomic) int previewMaxLossyCompressionLevel;
@property (class, readonly, nonatomic) int videoDataMaxLossyCompressionLevel;
@property (class, readonly, nonatomic) int stillImageMaxLossyCompressionLevel;

@property (readonly, nonatomic) int meteorHeadroomProcessingType;
@property (readonly, nonatomic) NSDictionary *cameraParameters;
@property (readonly, nonatomic) NSDictionary *cameraTuningParameters;
@property (readonly, nonatomic) NSDictionary *motionAttachmentsParameters;
@property (readonly, nonatomic) NSDictionary *videoStabilizationParameters;
@property (readonly, nonatomic) NSDictionary *videoStabilizationSTFParameters;
@property (readonly, nonatomic) NSDictionary *stereoDisparityParameters;
@property (readonly, nonatomic) NSDictionary *commonNRFParameters;

+ (id)sharedInstance;
+ (void)initialize;
+ (float)stillImageLossyCompressionFootPrintMultiplierFor422SubSampling:(BOOL)a0 isTenBit:(BOOL)a1;
+ (id)sensorIDStringFromModuleInfo:(id)a0;
+ (float)previewLossyCompressionFootPrintMultiplierFor422SubSampling:(BOOL)a0 isTenBit:(BOOL)a1;
+ (id)sensorIDStringFromMetadata:(id)a0;
+ (int)movieFileMaxLossyCompressionLevelFor422PixelFormat:(BOOL)a0 isTenBit:(BOOL)a1;
+ (float)videoDataLossyCompressionFootPrintMultiplierFor422SubSampling:(BOOL)a0 isTenBit:(BOOL)a1;
+ (float)movieFileLossyCompressionFootPrintMultiplierFor422SubSampling:(BOOL)a0 isTenBit:(BOOL)a1;

- (id)deepZoomParametersForPortType:(id)a0 sensorIDString:(id)a1;
- (int)videoStabilizationProcessorType;
- (id)initWithModelSpecificName:(id)a0;
- (int)disparityRefinementTypeForPortType:(id)a0 sensorIDString:(id)a1;
- (int)sdofRenderingVersionForPortType:(id)a0 sensorIDString:(id)a1;
- (BOOL)chromaticDefringingEnabledForVideoForPortType:(id)a0 sensorIDString:(id)a1;
- (int)learnedMattingVersion;
- (int)fsdNetStereoImagesAlignmentForPortType:(id)a0 sensorIDString:(id)a1;
- (int)coreImagePortraitFilterVersion;
- (id)initWithContentsOfFile:(id)a0;
- (int)personSemanticsVersion;
- (id)sensorIDDictionaryForPortType:(id)a0 sensorIDString:(id)a1;
- (int)disparityVersionForPortType:(id)a0 sensorIDString:(id)a1;
- (id)sensorIDDictionaryForStream:(id)a0;
- (id)focalLengthCharacterizationForStream:(id)a0;
- (int)disparityVersion;
- (int)focusPixelDisparityVersionForPortType:(id)a0 sensorIDString:(id)a1;
- (id)chromaticDefringingParametersForPortType:(id)a0 sensorIDString:(id)a1;
- (int)depthProcessorVersion;
- (id)init;
- (struct { unsigned short x0; unsigned short x1; unsigned short x2; })landmarksVersionForInferenceType:(int)a0;
- (BOOL)chromaticDefringingEnabledForSlomoForPortType:(id)a0 sensorIDString:(id)a1;
- (BOOL)panoramaRequiresLTMLockingForPortType:(id)a0 sensorIDString:(id)a1;
- (int)mattingVersionForPortType:(id)a0 sensorIDString:(id)a1;
- (unsigned int)landmarksConstellationPointCountForInferenceType:(int)a0;
- (int)videoStabilizationProcessorVersion;
- (void)dealloc;
- (BOOL)complementMatteSuppressionDecisionWithISPDetectedFaces;
- (int)portraitSceneMonitorVersionForPortType:(id)a0 sensorIDString:(id)a1;
- (id)portraitSceneMonitoringParametersForPortType:(id)a0 sensorIDString:(id)a1;

@end
