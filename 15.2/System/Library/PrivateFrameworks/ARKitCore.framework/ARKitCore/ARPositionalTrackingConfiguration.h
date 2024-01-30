@class ARWorldMap;

@interface ARPositionalTrackingConfiguration : ARConfiguration

@property (nonatomic, getter=isRelocalizationEnabled) BOOL relocalizationEnabled;
@property (nonatomic, getter=isVIOFusionEnabled) BOOL vioFusionEnabled;
@property (nonatomic) unsigned long long planeDetection;
@property (retain, nonatomic) ARWorldMap *initialWorldMap;

+ (id)new;
+ (BOOL)isSupported;
+ (id)supportedVideoFormats;
+ (id)_querySupportedVideoFormats;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)createTechniques:(id)a0;
- (id)imageSensorSettings;
- (id)worldTrackingOptions;

@end
