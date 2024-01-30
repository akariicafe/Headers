@interface VNDetectScreenGazeRequestConfiguration : VNStatefulRequestConfiguration

@property (nonatomic) long long temporalSmoothingFrameCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestClass:(Class)a0;

@end
