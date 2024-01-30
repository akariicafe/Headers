@interface ARInternalFaceTrackingConfiguration : ARConfiguration

@property (nonatomic) long long maximumNumberOfTrackedFaces;
@property (nonatomic) BOOL useAlternativeResources;

+ (BOOL)isSupported;
+ (id)new;
+ (id)supportedVideoFormats;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setLightEstimationEnabled:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void)setCameraPosition:(long long)a0;
- (void)createTechniques:(id)a0;
- (id)imageSensorSettings;
- (void)setMirroredFrameOutput:(BOOL)a0;
- (id)renderingTechnique;

@end
