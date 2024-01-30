@class ARWorldMap;

@interface ARPositionalTrackingConfiguration : ARConfiguration

@property (nonatomic, getter=isRelocalizationEnabled) BOOL relocalizationEnabled;
@property (nonatomic, getter=isVIOFusionEnabled) BOOL vioFusionEnabled;
@property (nonatomic) unsigned long long planeDetection;
@property (retain, nonatomic) ARWorldMap *initialWorldMap;

+ (id)supportedVideoFormats;
+ (BOOL)isSupported;
+ (id)new;
+ (id)_querySupportedVideoFormats;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)createTechniques:(id)a0;
- (id)imageSensorSettings;
- (id)worldTrackingOptions;

@end
