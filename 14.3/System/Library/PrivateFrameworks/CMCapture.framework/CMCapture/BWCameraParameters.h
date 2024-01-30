@class NSDictionary;

@interface BWCameraParameters : NSObject {
    NSDictionary *_meteorParameters;
    NSDictionary *_stereoDisparityParameters;
    NSDictionary *_landmarksParameters;
    NSDictionary *_learnedMattingParameters;
    NSDictionary *_coreImagePortraitFilterParameters;
}

@property (readonly, nonatomic) NSDictionary *cameraParameters;
@property (readonly, nonatomic) NSDictionary *cameraTuningParameters;
@property (readonly, nonatomic) NSDictionary *motionAttachmentsParameters;
@property (readonly, nonatomic) NSDictionary *videoStabilizationParameters;
@property (readonly, nonatomic) NSDictionary *stereoDisparityParameters;
@property (readonly, nonatomic) int meteorHeadroomProcessingType;

+ (id)sharedInstance;
+ (void)initialize;
+ (id)sensorIDStringFromModuleInfo:(id)a0;
+ (id)sensorIDStringFromMetadata:(id)a0;

- (int)disparityVersion;
- (int)disparityVersionForPortType:(id)a0 sensorIDString:(id)a1;
- (id)init;
- (void)dealloc;
- (unsigned int)landmarksConstellationPointCountForInferenceType:(int)a0;
- (id)portraitSceneMonitoringParametersForPortType:(id)a0 sensorIDString:(id)a1;
- (id)sensorIDDictionaryForStream:(id)a0;
- (int)coreImagePortraitFilterVersion;
- (int)learnedMattingVersion;
- (id)focalLengthCharacterizationForStream:(id)a0;
- (int)mattingVersionForPortType:(id)a0 sensorIDString:(id)a1;
- (BOOL)complementMatteSuppressionDecisionWithISPDetectedFaces;
- (int)focusPixelDisparityVersionForPortType:(id)a0 sensorIDString:(id)a1;
- (int)disparityRefinementTypeForPortType:(id)a0 sensorIDString:(id)a1;
- (int)portraitSceneMonitorVersionForPortType:(id)a0 sensorIDString:(id)a1;
- (id)sensorIDDictionaryForPortType:(id)a0 sensorIDString:(id)a1;
- (BOOL)panoramaRequiresLTMLockingForPortType:(id)a0 sensorIDString:(id)a1;
- (id)_initWithModelSpecificName:(id)a0;
- (BOOL)chromaticDefringingEnabledForSlomoForPortType:(id)a0 sensorIDString:(id)a1;
- (id)chromaticDefringingParametersForPortType:(id)a0 sensorIDString:(id)a1;
- (BOOL)chromaticDefringingEnabledForVideoForPortType:(id)a0 sensorIDString:(id)a1;
- (struct { unsigned short x0; unsigned short x1; unsigned short x2; })landmarksVersionForInferenceType:(int)a0;
- (int)sdofRenderingVersionForPortType:(id)a0 sensorIDString:(id)a1;

@end
