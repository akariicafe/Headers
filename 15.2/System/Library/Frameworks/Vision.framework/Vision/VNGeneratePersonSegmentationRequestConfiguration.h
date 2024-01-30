@interface VNGeneratePersonSegmentationRequestConfiguration : VNStatefulRequestConfiguration

@property (nonatomic) unsigned long long qualityLevel;
@property (nonatomic) unsigned int outputPixelFormat;

- (id)initWithRequestClass:(Class)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
