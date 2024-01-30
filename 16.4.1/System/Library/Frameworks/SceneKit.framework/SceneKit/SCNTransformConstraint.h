@interface SCNTransformConstraint : SCNConstraint

+ (BOOL)supportsSecureCoding;
+ (id)orientationConstraintInWorldSpace:(BOOL)a0 withBlock:(id /* block */)a1;
+ (id)positionConstraintInWorldSpace:(BOOL)a0 withBlock:(id /* block */)a1;
+ (id)transformConstraintInWorldSpace:(BOOL)a0 withBlock:(id /* block */)a1;

- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initTransformInWorld:(BOOL)a0 withBlock:(id /* block */)a1;
- (id)initOrientationInWorldSpace:(BOOL)a0 withBlock:(id /* block */)a1;
- (id)initPositionInWorld:(BOOL)a0 withBlock:(id /* block */)a1;

@end
