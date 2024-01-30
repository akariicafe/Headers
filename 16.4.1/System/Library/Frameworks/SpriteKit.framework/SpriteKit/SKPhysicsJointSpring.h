@interface SKPhysicsJointSpring : SKPhysicsJoint

@property (nonatomic) double damping;
@property (nonatomic) double frequency;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)supportsSecureCoding;
+ (id)jointWithBodyA:(id)a0 bodyB:(id)a1 anchorA:(struct CGPoint { double x0; double x1; })a2 anchorB:(struct CGPoint { double x0; double x1; })a3;

@end
