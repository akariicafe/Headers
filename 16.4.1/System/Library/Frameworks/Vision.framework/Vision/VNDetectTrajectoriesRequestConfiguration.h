@interface VNDetectTrajectoriesRequestConfiguration : VNStatefulRequestConfiguration

@property (nonatomic) long long trajectoryLength;
@property (nonatomic) float objectMinimumNormalizedRadius;
@property (nonatomic) float objectMaximumNormalizedRadius;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } targetFrameTime;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestClass:(Class)a0;

@end
