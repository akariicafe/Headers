@interface PKPhysicsJointRevolute : PKPhysicsJoint {
    struct b2RevoluteJointDef { int type; void *userData; struct b2Body *bodyA; struct b2Body *bodyB; BOOL collideConnected; struct b2Vec2 { float x; float y; } localAnchorA; struct b2Vec2 { float x; float y; } localAnchorB; float referenceAngle; BOOL enableLimit; float lowerAngle; float upperAngle; BOOL enableMotor; float motorSpeed; float maxMotorTorque; } _jointDef;
    struct b2RevoluteJoint { void /* function */ **x0; int x1; struct b2Joint *x2; struct b2Joint *x3; struct b2JointEdge { struct b2Body *x0; struct b2Joint *x1; struct b2JointEdge *x2; struct b2JointEdge *x3; } x4; struct b2JointEdge { struct b2Body *x0; struct b2Joint *x1; struct b2JointEdge *x2; struct b2JointEdge *x3; } x5; struct b2Body *x6; struct b2Body *x7; BOOL x8; BOOL x9; void *x10; struct b2Vec2 { float x0; float x1; } x11; struct b2Vec2 { float x0; float x1; } x12; struct b2Vec3 { float x0; float x1; float x2; } x13; float x14; BOOL x15; float x16; float x17; BOOL x18; float x19; float x20; float x21; int x22; int x23; struct b2Vec2 { float x0; float x1; } x24; struct b2Vec2 { float x0; float x1; } x25; struct b2Vec2 { float x0; float x1; } x26; struct b2Vec2 { float x0; float x1; } x27; float x28; float x29; float x30; float x31; struct b2Mat33 { struct b2Vec3 { float x0; float x1; float x2; } x0; struct b2Vec3 { float x0; float x1; float x2; } x1; struct b2Vec3 { float x0; float x1; float x2; } x2; } x32; float x33; int x34; } *_joint;
}

@property (nonatomic) BOOL shouldEnableLimits;
@property (nonatomic) double lowerAngleLimit;
@property (nonatomic) double upperAngleLimit;
@property (nonatomic) double frictionTorque;
@property (nonatomic) double rotationSpeed;
@property (readonly) struct CGPoint { double x; double y; } anchor;

+ (id)jointWithBodyA:(id)a0 bodyB:(id)a1 anchor:(struct CGPoint { double x0; double x1; })a2;
+ (BOOL)supportsSecureCoding;

- (struct b2Joint { void /* function */ **x0; int x1; struct b2Joint *x2; struct b2Joint *x3; struct b2JointEdge { struct b2Body *x0; struct b2Joint *x1; struct b2JointEdge *x2; struct b2JointEdge *x3; } x4; struct b2JointEdge { struct b2Body *x0; struct b2Joint *x1; struct b2JointEdge *x2; struct b2JointEdge *x3; } x5; struct b2Body *x6; struct b2Body *x7; BOOL x8; BOOL x9; void *x10; } *)_joint;
- (void)create;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToRevoluteJoint:(id)a0;
- (void)set_joint:(struct b2Joint { void /* function */ **x0; int x1; struct b2Joint *x2; struct b2Joint *x3; struct b2JointEdge { struct b2Body *x0; struct b2Joint *x1; struct b2JointEdge *x2; struct b2JointEdge *x3; } x4; struct b2JointEdge { struct b2Body *x0; struct b2Joint *x1; struct b2JointEdge *x2; struct b2JointEdge *x3; } x5; struct b2Body *x6; struct b2Body *x7; BOOL x8; BOOL x9; void *x10; } *)a0;
- (struct b2JointDef { int x0; void *x1; struct b2Body *x2; struct b2Body *x3; BOOL x4; } *)_jointDef;
- (id)initWithBodyA:(id)a0 bodyB:(id)a1 anchor:(struct CGPoint { double x0; double x1; })a2;

@end
