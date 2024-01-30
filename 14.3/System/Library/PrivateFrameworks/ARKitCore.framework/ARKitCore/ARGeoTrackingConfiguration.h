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
@property (nonatomic) long long worldAlignment;
@property (nonatomic) long long environmentTexturing;
@property (nonatomic) BOOL wantsHDREnvironmentTextures;
@property (nonatomic) unsigned long long planeDetection;
@property (copy, nonatomic) NSSet *detectionImages;
@property (nonatomic) BOOL automaticImageScaleEstimationEnabled;
@property (nonatomic) long long maximumNumberOfTrackedImages;
@property (copy, nonatomic) NSSet *detectionObjects;
@property (nonatomic) BOOL appClipCodeTrackingEnabled;

+ (BOOL)isSupported;
+ (id)new;
+ (id)supportedVideoFormats;
+ (BOOL)supportsFrameSemantics:(unsigned long long)a0;
+ (id)locationManagerQueue;
+ (BOOL)_verifyLocationPermissionsWithLocationManager:(id)a0 handler:(id)a1;
+ (BOOL)isSupportedWithOptions:(unsigned long long)a0;
+ (void)checkAvailabilityWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
+ (id)checkAvailabilityQueue;
+ (void)checkAvailabilityAtCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 withOptions:(unsigned long long)a1 completionHandler:(id /* block */)a2;
+ (id)supportedVideoFormatsForUltraWide;
+ (BOOL)verifyLocationPermissions;
+ (void)checkAvailabilityWithCompletionHandler:(id /* block */)a0;
+ (void)checkAvailabilityAtCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 completionHandler:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setWorldAlignment:(long long)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (long long)_depthPrioritization;
- (void)createTechniques:(id)a0;
- (long long)worldAlignment;
- (id)parentImageSensorSettings;
- (id)imageSensorSettings;
- (BOOL)shouldUseUltraWide;
- (BOOL)shouldUseJasper;
- (BOOL)shouldEnableVisionDataForImageSensorSettings:(id)a0;
- (id)_trackingOptions;

@end
