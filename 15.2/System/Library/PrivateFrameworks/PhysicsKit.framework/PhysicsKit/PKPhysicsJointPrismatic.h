@interface PKPhysicsJointPrismatic : PKPhysicsJoint {
    struct b2PrismaticJointDef { int type; void *userData; struct b2Body *bodyA; struct b2Body *bodyB; BOOL collideConnected; struct b2Vec2 { float x; float y; } localAnchorA; struct b2Vec2 { float x; float y; } localAnchorB; struct b2Vec2 { float x; float y; } localAxisA; float referenceAngle; BOOL enableLimit; float lowerTranslation; float upperTranslation; BOOL enableMotor; float maxMotorForce; float motorSpeed; } _jointDef;
    struct b2PrismaticJoint { void /* function */ **x0; int x1; struct b2Joint *x2; struct b2Joint *x3; struct b2JointEdge { struct b2Body *x0; struct b2Joint *x1; struct b2JointEdge *x2; struct b2JointEdge *x3; } x4; struct b2JointEdge { struct b2Body *x0; struct b2Joint *x1; struct b2JointEdge *x2; struct b2JointEdge *x3; } x5; struct b2Body *x6; struct b2Body *x7; BOOL x8; BOOL x9; void *x10; struct b2Vec2 { float x0; float x1; } x11; struct b2Vec2 { float x0; float x1; } x12; struct b2Vec2 { float x0; float x1; } x13; struct b2Vec2 { float x0; float x1; } x14; float x15; struct b2Vec3 { float x0; float x1; float x2; } x16; float x17; float x18; float x19; float x20; float x21; BOOL x22; BOOL x23; int x24; int x25; int x26; struct b2Vec2 { float x0; float x1; } x27; struct b2Vec2 { float x0; float x1; } x28; float x29; float x30; float x31; float x32; struct b2Vec2 { float x0; float x1; } x33; struct b2Vec2 { float x0; float x1; } x34; float x35; float x36; float x37; float x38; struct b2Mat33 { struct b2Vec3 { float x0; float x1; float x2; } x0; struct b2Vec3 { float x0; float x1; float x2; } x1; struct b2Vec3 { float x0; float x1; float x2; } x2; } x39; float x40; } *_joint;
    struct CGPoint { double x; double y; } _anchor;
    struct CGVector { double dx; double dy; } _axis;
}

@property (nonatomic) BOOL shouldEnableLimits;
@property (nonatomic) double lowerDistanceLimit;
@property (nonatomic) double upperDistanceLimit;

+ (BOOL)supportsSecureCoding;
+ (id)jointWithBodyA:(id)a0 bodyB:(id)a1 anchor:(struct CGPoint { double x0; double x1; })a2 axis:(struct CGVector { double x0; double x1; })a3;

- (struct b2Joint { void /* function */ **x0; int x1; struct b2Joint *x2; struct b2Joint *x3; struct b2JointEdge { struct b2Body *x0; struct b2Joint *x1; struct b2JointEdge *x2; struct b2JointEdge *x3; } x4; struct b2JointEdge { struct b2Body *x0; struct b2Joint *x1; struct b2JointEdge *x2; struct b2JointEdge *x3; } x5; struct b2Body *x6; struct b2Body *x7; BOOL x8; BOOL x9; void *x10; } *)_joint;
- (void)encodeWithCoder:(id)a0;
- (void)create;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (BOOL)isEqualToPrismaticJoint:(id)a0;
- (void)set_joint:(struct b2Joint { void /* function */ **x0; int x1; struct b2Joint *x2; struct b2Joint *x3; struct b2JointEdge { struct b2Body *x0; struct b2Joint *x1; struct b2JointEdge *x2; struct b2JointEdge *x3; } x4; struct b2JointEdge { struct b2Body *x0; struct b2Joint *x1; struct b2JointEdge *x2; struct b2JointEdge *x3; } x5; struct b2Body *x6; struct b2Body *x7; BOOL x8; BOOL x9; void *x10; } *)a0;
- (struct b2JointDef { int x0; void *x1; struct b2Body *x2; struct b2Body *x3; BOOL x4; } *)_jointDef;
- (id)initWithBodyA:(id)a0 bodyB:(id)a1 anchor:(struct CGPoint { double x0; double x1; })a2 axis:(struct CGVector { double x0; double x1; })a3;

@end
