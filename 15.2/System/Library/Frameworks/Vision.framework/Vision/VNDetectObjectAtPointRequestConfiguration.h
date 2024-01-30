@interface VNDetectObjectAtPointRequestConfiguration : VNImageBasedRequestConfiguration

@property (nonatomic) struct CGPoint { double x; double y; } inputPoint;

- (id)initWithRequestClass:(Class)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
