@interface SKPhysicsJointSliding : SKPhysicsJoint

@property (nonatomic) BOOL shouldEnableLimits;
@property (nonatomic) double lowerDistanceLimit;
@property (nonatomic) double upperDistanceLimit;

+ (BOOL)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)jointWithBodyA:(id)a0 bodyB:(id)a1 anchor:(struct CGPoint { double x0; double x1; })a2 axis:(struct CGVector { double x0; double x1; })a3;

@end
