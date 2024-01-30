@class NSArray, ARConfiguration, ARWorldMap;

@interface ARCustomTechniquesConfiguration : ARConfiguration

@property (class, readonly, nonatomic) NSArray *supportedVideoFormats;

@property (copy, nonatomic) NSArray *techniques;
@property (readonly, nonatomic) ARWorldMap *initialWorldMap;
@property (copy, nonatomic) ARConfiguration *templateConfiguration;

+ (id)new;

- (long long)worldAlignment;
- (void)setCameraPosition:(long long)a0;
- (id)description;
- (id)initPrivate;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setVideoFormat:(id)a0;
- (id)imageSensorSettings;
- (id)imageSensorSettingsForUltraWide;
- (void)setCustomSensors:(id)a0;
- (BOOL)isLightEstimationEnabled;
- (void)setProvidesAudioData:(BOOL)a0;
- (void)ensureTechniqueAndCustomSensorCompatibility;
- (void)configureRecordingTechnique;
- (void)_updateCaptureSettings;

@end
