@class ARImageSensorSettings, NSSet, ARWorldMap;

@interface ARBodyTrackingConfiguration : ARConfiguration

@property (class, readonly, nonatomic) BOOL supportsAppClipCodeTracking;

@property (readonly, nonatomic) ARImageSensorSettings *imageSensorSettingsForUltraWide;
@property (nonatomic) BOOL ignoreAppClipCodeURLLimitation;
@property (nonatomic, getter=isLowQosSchedulingEnabled) BOOL lowQosSchedulingEnabled;
@property (nonatomic, getter=isAutoFocusEnabled) BOOL autoFocusEnabled;
@property (retain, nonatomic) ARWorldMap *initialWorldMap;
@property (nonatomic) long long environmentTexturing;
@property (nonatomic) BOOL wantsHDREnvironmentTextures;
@property (nonatomic) unsigned long long planeDetection;
@property (copy, nonatomic) NSSet *detectionImages;
@property (nonatomic) BOOL automaticImageScaleEstimationEnabled;
@property (nonatomic) BOOL automaticSkeletonScaleEstimationEnabled;
@property (nonatomic) long long maximumNumberOfTrackedImages;
@property (nonatomic) BOOL appClipCodeTrackingEnabled;

+ (BOOL)isSupported;
+ (id)new;
+ (id)supportedVideoFormats;
+ (BOOL)supportsFrameSemantics:(unsigned long long)a0;
+ (id)supportedVideoFormatsForUltraWide;
+ (BOOL)supportsUserFaceTracking;
+ (id)_querySupportedVideoFormatsForUltraWide;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)userFaceTrackingEnabled;
- (void)createTechniques:(id)a0;
- (id)parentImageSensorSettings;
- (id)imageSensorSettings;
- (BOOL)shouldUseUltraWide;
- (BOOL)shouldUseJasper;
- (BOOL)shouldEnableVisionDataForImageSensorSettings:(id)a0;
- (id)_trackingOptions;
- (id)imageSensorSettingsForUserFaceTracking;

@end
