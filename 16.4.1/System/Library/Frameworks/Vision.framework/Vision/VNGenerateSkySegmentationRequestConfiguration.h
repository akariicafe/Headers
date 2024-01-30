@interface VNGenerateSkySegmentationRequestConfiguration : VNImageBasedRequestConfiguration

@property (nonatomic) long long qualityLevel;
@property (nonatomic) unsigned int outputPixelFormat;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestClass:(Class)a0;

@end
