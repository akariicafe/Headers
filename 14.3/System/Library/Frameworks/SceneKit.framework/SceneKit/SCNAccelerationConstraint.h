@interface SCNAccelerationConstraint : SCNConstraint {
    float _maximumLinearVelocity;
    float _maximumLinearAcceleration;
    float _decelerationDistance;
    float _damping;
}

@property (nonatomic) double maximumLinearAcceleration;
@property (nonatomic) double maximumLinearVelocity;
@property (nonatomic) double decelerationDistance;
@property (nonatomic) double damping;

+ (BOOL)supportsSecureCoding;
+ (id)accelerationConstraint;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
