@interface ASVDampingDeceleration : ASVDeceleration

@property (nonatomic) float decelerationRate;

- (float)decelerationDelta;
- (id)initWithVelocity:(float)a0 minEndDelta:(float)a1 decelerationRate:(float)a2;

@end
