@class NSArray, ARConfiguration, ARWorldMap;

@interface ARCustomTechniquesConfiguration : ARConfiguration

@property (class, readonly, nonatomic) NSArray *supportedVideoFormats;

@property (copy, nonatomic) NSArray *techniques;
@property (readonly, nonatomic) ARWorldMap *initialWorldMap;
@property (copy, nonatomic) ARConfiguration *templateConfiguration;

+ (id)new;

- (id)initPrivate;
- (void)setVideoFormat:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)setCameraPosition:(long long)a0;
- (long long)worldAlignment;
- (id)imageSensorSettings;
- (id)imageSensorSettingsForUltraWide;
- (void)setCustomSensors:(id)a0;
- (BOOL)isLightEstimationEnabled;
- (void)setProvidesAudioData:(BOOL)a0;
- (void)ensureTechniqueAndCustomSensorCompatibility;
- (void)configureRecordingTechnique;
- (void)_updateCaptureSettings;

@end
