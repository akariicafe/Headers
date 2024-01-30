@interface VNImageBlurScoreRequestConfiguration : VNImageBasedRequestConfiguration

@property (nonatomic) unsigned long long maximumIntermediateSideLength;
@property (nonatomic) unsigned long long blurDeterminationMethod;

- (id)initWithRequestClass:(Class)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
