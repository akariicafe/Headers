@interface ARFaceTrackingConfiguration : ARConfiguration

@property (class, readonly, nonatomic) long long supportedNumberOfTrackedFaces;
@property (class, readonly, nonatomic) BOOL supportsWorldTracking;

@property (nonatomic) BOOL lowPower;
@property (nonatomic) long long maximumNumberOfTrackedFaces;
@property (nonatomic, getter=isWorldTrackingEnabled) BOOL worldTrackingEnabled;

+ (BOOL)isSupported;
+ (id)new;
+ (id)supportedVideoFormats;
+ (BOOL)supportsFrameSemantics:(unsigned long long)a0;
+ (id)supportedVideoFormatsForWorldTracking;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setLightEstimationEnabled:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void)setCameraPosition:(long long)a0;
- (void)createTechniques:(id)a0;
- (id)imageSensorSettingsForWorldTracking;
- (id)parentImageSensorSettings;
- (id)imageSensorSettingsForLowPower;
- (id)imageSensorSettings;
- (void)setMirroredFrameOutput:(BOOL)a0;
- (id)secondaryTechniques;
- (id)renderingTechnique;

@end
