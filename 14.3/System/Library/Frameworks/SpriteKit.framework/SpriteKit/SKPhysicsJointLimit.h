@interface SKPhysicsJointLimit : SKPhysicsJoint

@property (nonatomic) double maxLength;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)jointWithBodyA:(id)a0 bodyB:(id)a1 anchorA:(struct CGPoint { double x0; double x1; })a2 anchorB:(struct CGPoint { double x0; double x1; })a3;
+ (BOOL)supportsSecureCoding;

@end
