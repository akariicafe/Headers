@class ARImageSensorSettings, NSSet, ARWorldMap;

@interface ARBodyTrackingConfiguration : ARConfiguration

@property (class, readonly, nonatomic) BOOL supportsAppClipCodeTracking;

@property (readonly, nonatomic) ARImageSensorSettings *imageSensorSettingsForUltraWide;
@property (nonatomic) BOOL ignoreAppClipCodeURLLimitation;
@property (nonatomic) BOOL alwaysUsePrimaryCameraForTracking;
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

+ (id)supportedVideoFormats;
+ (id)recommendedVideoFormatForHighResolutionFrameCapturing;
+ (id)recommendedVideoFormatFor4KResolution;
+ (id)supportedVideoFormatsForUltraWide;
+ (BOOL)supportsFrameSemantics:(unsigned long long)a0;
+ (BOOL)isSupported;
+ (id)new;
+ (id)_querySupportedVideoFormatsForUltraWide;
+ (BOOL)supportsUserFaceTracking;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)setVideoFormat:(id)a0;
- (BOOL)shouldUseJasper;
- (id)_trackingOptions;
- (void)createTechniques:(id)a0;
- (id)imageSensorSettings;
- (id)imageSensorSettingsForUserFaceTracking;
- (id)parentImageSensorSettings;
- (BOOL)shouldEnableVisionDataForImageSensorSettings:(id)a0;
- (BOOL)shouldUseUltraWide;

@end
