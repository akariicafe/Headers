@class ARImageSensorSettings, NSSet;

@interface ARGeoTrackingConfiguration : ARConfiguration {
    double _posteriorVisualLocalizationCallInterval;
}

@property (class, readonly, nonatomic) BOOL supportsAppClipCodeTracking;

@property (nonatomic) double minVergenceAngle;
@property (nonatomic, getter=isMLModelEnabled) BOOL mlModelEnabled;
@property (nonatomic, getter=isLowQosSchedulingEnabled) BOOL lowQosSchedulingEnabled;
@property (nonatomic) BOOL shouldUseUltraWideIfAvailable;
@property (readonly, nonatomic) ARImageSensorSettings *imageSensorSettingsForUltraWide;
@property (nonatomic) BOOL depthOptimizedForStaticScene;
@property (nonatomic) BOOL alwaysUsePrimaryCameraForTracking;
@property (nonatomic) BOOL ignoreAppClipCodeURLLimitation;
@property (nonatomic) double visualLocalizationCallInterval;
@property (nonatomic) BOOL visualLocalizationUpdatesRequested;
@property (nonatomic) unsigned long long supportEnablementOptions;
@property (nonatomic) BOOL useLidarIfAvailable;
@property (nonatomic) long long worldAlignment;
@property (nonatomic) long long environmentTexturing;
@property (nonatomic) BOOL wantsHDREnvironmentTextures;
@property (nonatomic) unsigned long long planeDetection;
@property (copy, nonatomic) NSSet *detectionImages;
@property (nonatomic) BOOL automaticImageScaleEstimationEnabled;
@property (nonatomic) long long maximumNumberOfTrackedImages;
@property (copy, nonatomic) NSSet *detectionObjects;
@property (nonatomic) BOOL appClipCodeTrackingEnabled;

+ (id)supportedVideoFormats;
+ (id)recommendedVideoFormatForHighResolutionFrameCapturing;
+ (id)recommendedVideoFormatFor4KResolution;
+ (id)supportedVideoFormatsForUltraWide;
+ (BOOL)supportsFrameSemantics:(unsigned long long)a0;
+ (void)checkAvailabilityWithCompletionHandler:(id /* block */)a0;
+ (BOOL)verifyLocationPermissions;
+ (id)checkAvailabilityQueue;
+ (void)checkAvailabilityWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
+ (id)locationManagerQueue;
+ (BOOL)isSupportedWithOptions:(unsigned long long)a0;
+ (BOOL)isSupported;
+ (void)checkAvailabilityAtCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 completionHandler:(id /* block */)a1;
+ (id)new;
+ (void)checkAvailabilityAtCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 withOptions:(unsigned long long)a1 completionHandler:(id /* block */)a2;
+ (BOOL)_verifyLocationPermissionsWithLocationManager:(id)a0 handler:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)setVideoFormat:(id)a0;
- (void)setWorldAlignment:(long long)a0;
- (long long)worldAlignment;
- (long long)_depthPrioritization;
- (BOOL)shouldUseJasper;
- (id)_trackingOptions;
- (void)createTechniques:(id)a0;
- (id)imageSensorSettings;
- (id)parentImageSensorSettings;
- (BOOL)shouldEnableVisionDataForImageSensorSettings:(id)a0;
- (BOOL)shouldUseUltraWide;

@end
