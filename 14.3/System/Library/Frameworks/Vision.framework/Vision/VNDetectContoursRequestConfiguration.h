@interface VNDetectContoursRequestConfiguration : VNImageBasedRequestConfiguration

@property (nonatomic) float contrastAdjustment;
@property (nonatomic) BOOL detectsDarkOnLight;
@property (nonatomic) unsigned long long maximumImageDimension;
@property (nonatomic) BOOL inHierarchy;
@property (nonatomic) BOOL forceUseInputCVPixelBufferDirectly;

- (id)initWithRequestClass:(Class)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
