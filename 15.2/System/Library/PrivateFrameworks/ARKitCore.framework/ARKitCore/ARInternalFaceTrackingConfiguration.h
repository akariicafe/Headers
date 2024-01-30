@interface ARInternalFaceTrackingConfiguration : ARConfiguration

@property (nonatomic) long long maximumNumberOfTrackedFaces;
@property (nonatomic) BOOL useAlternativeResources;

+ (id)new;
+ (BOOL)isSupported;
+ (id)supportedVideoFormats;

- (void)setLightEstimationEnabled:(BOOL)a0;
- (void)setCameraPosition:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)createTechniques:(id)a0;
- (id)imageSensorSettings;
- (void)setMirroredFrameOutput:(BOOL)a0;
- (id)renderingTechnique;

@end
