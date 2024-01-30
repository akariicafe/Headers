@interface ARInternalFaceTrackingConfiguration : ARConfiguration

@property (nonatomic) long long maximumNumberOfTrackedFaces;
@property (nonatomic) BOOL useAlternativeResources;

+ (id)supportedVideoFormats;
+ (BOOL)isSupported;
+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)setLightEstimationEnabled:(BOOL)a0;
- (void)setCameraPosition:(long long)a0;
- (void)createTechniques:(id)a0;
- (id)imageSensorSettings;
- (id)renderingTechnique;
- (void)setMirroredFrameOutput:(BOOL)a0;

@end
