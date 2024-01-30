@class ARWorldMap;

@interface ARPositionalTrackingConfiguration : ARConfiguration

@property (nonatomic, getter=isRelocalizationEnabled) BOOL relocalizationEnabled;
@property (nonatomic, getter=isVIOFusionEnabled) BOOL vioFusionEnabled;
@property (nonatomic) unsigned long long planeDetection;
@property (retain, nonatomic) ARWorldMap *initialWorldMap;

+ (BOOL)isSupported;
+ (id)new;
+ (id)supportedVideoFormats;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)createTechniques:(id)a0;
- (id)imageSensorSettings;
- (id)worldTrackingOptions;

@end
