@class ARImageSensorSettings, NSString, ARWorldMap, NSSet, ARSceneReconstructionOptions;

@interface ARWorldTrackingConfiguration : ARConfiguration

@property (class, readonly, nonatomic) BOOL supportsUserFaceTracking;
@property (class, readonly, nonatomic) BOOL supportsAppClipCodeTracking;

@property (nonatomic) BOOL relocalizationEnabled;
@property (copy, nonatomic) NSString *slamConfiguration;
@property (nonatomic) double minVergenceAngle;
@property (nonatomic, getter=isMLModelEnabled) BOOL mlModelEnabled;
@property (nonatomic, getter=isLowQosSchedulingEnabled) BOOL lowQosSchedulingEnabled;
@property (nonatomic, getter=isAccuratePlaneExtentCheckEnabled) BOOL accuratePlaneExtentCheckEnabled;
@property (nonatomic) BOOL deliverRawSceneUnderstandingResults;
@property (nonatomic) BOOL shouldUseUltraWideIfAvailable;
@property (readonly, nonatomic) ARImageSensorSettings *imageSensorSettingsForUltraWide;
@property (nonatomic) BOOL depthTemporalSmoothingEnabled;
@property (nonatomic) BOOL depthOptimizedForStaticScene;
@property (nonatomic) struct ARSpatialMappingParameters { long long x0; long long x1; } spatialMappingParameters;
@property (retain, nonatomic) ARSceneReconstructionOptions *sceneReconstructionOptions;
@property (nonatomic) BOOL ignoreAppClipCodeURLLimitation;
@property (nonatomic) BOOL useSpatialMappingQualityMode;
@property (nonatomic) BOOL alwaysUsePrimaryCameraForTracking;
@property (nonatomic) BOOL recordForGeoTracking;
@property (nonatomic, getter=isAutoFocusEnabled) BOOL autoFocusEnabled;
@property (nonatomic) long long environmentTexturing;
@property (nonatomic) BOOL wantsHDREnvironmentTextures;
@property (nonatomic) unsigned long long planeDetection;
@property (retain, nonatomic) ARWorldMap *initialWorldMap;
@property (copy, nonatomic) NSSet *detectionImages;
@property (nonatomic) BOOL automaticImageScaleEstimationEnabled;
@property (nonatomic) long long maximumNumberOfTrackedImages;
@property (copy, nonatomic) NSSet *detectionObjects;
@property (nonatomic, getter=isCollaborationEnabled) BOOL collaborationEnabled;
@property (nonatomic, getter=userFaceTrackingEnabled) BOOL userFaceTrackingEnabled;
@property (nonatomic) BOOL appClipCodeTrackingEnabled;
@property (nonatomic) unsigned long long sceneReconstruction;

+ (BOOL)isSupported;
+ (id)new;
+ (id)supportedVideoFormats;
+ (BOOL)supportsFrameSemantics:(unsigned long long)a0;
+ (id)supportedVideoFormatsForUltraWide;
+ (id)_querySupportedVideoFormats;
+ (id)_querySupportedVideoFormatsForUserFaceTracking;
+ (id)_querySupportedVideoFormatsForUltraWide;
+ (id)supportedVideoFormatsForUserFaceTracking;
+ (BOOL)supportsSceneReconstruction:(unsigned long long)a0;
+ (BOOL)supportsFrontCameraFaceAnchors;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (long long)_depthPrioritization;
- (void)createTechniques:(id)a0;
- (id)parentImageSensorSettings;
- (id)imageSensorSettings;
- (id)secondaryTechniques;
- (BOOL)shouldUseUltraWide;
- (BOOL)shouldUseJasper;
- (BOOL)shouldEnableVisionDataForImageSensorSettings:(id)a0;
- (id)_trackingOptions;
- (id)imageSensorSettingsForUserFaceTracking;
- (void)setFrontCameraFaceAnchorsEnabled:(BOOL)a0;

@end
