@interface VNDetectObjectAtPointRequestConfiguration : VNImageBasedRequestConfiguration

@property (nonatomic) struct CGPoint { double x; double y; } inputPoint;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestClass:(Class)a0;

@end
