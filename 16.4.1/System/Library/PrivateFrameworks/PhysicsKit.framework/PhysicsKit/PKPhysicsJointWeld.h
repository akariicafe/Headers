@interface PKPhysicsJointWeld : PKPhysicsJoint {
    struct b2WeldJointDef { int type; void *userData; struct b2Body *bodyA; struct b2Body *bodyB; BOOL collideConnected; struct b2Vec2 { float x; float y; } localAnchorA; struct b2Vec2 { float x; float y; } localAnchorB; float referenceAngle; } _jointDef;
    struct b2WeldJoint { void /* function */ **x0; int x1; struct b2Joint *x2; struct b2Joint *x3; struct b2JointEdge { struct b2Body *x0; struct b2Joint *x1; struct b2JointEdge *x2; struct b2JointEdge *x3; } x4; struct b2JointEdge { struct b2Body *x0; struct b2Joint *x1; struct b2JointEdge *x2; struct b2JointEdge *x3; } x5; struct b2Body *x6; struct b2Body *x7; BOOL x8; BOOL x9; void *x10; struct b2Vec2 { float x0; float x1; } x11; struct b2Vec2 { float x0; float x1; } x12; float x13; struct b2Vec3 { float x0; float x1; float x2; } x14; int x15; int x16; struct b2Vec2 { float x0; float x1; } x17; struct b2Vec2 { float x0; float x1; } x18; struct b2Vec2 { float x0; float x1; } x19; struct b2Vec2 { float x0; float x1; } x20; float x21; float x22; float x23; float x24; struct b2Mat33 { struct b2Vec3 { float x0; float x1; float x2; } x0; struct b2Vec3 { float x0; float x1; float x2; } x1; struct b2Vec3 { float x0; float x1; float x2; } x2; } x25; } *_joint;
    struct CGPoint { double x; double y; } _anchor;
}

+ (BOOL)supportsSecureCoding;
+ (id)jointWithBodyA:(id)a0 bodyB:(id)a1 anchor:(struct CGPoint { double x0; double x1; })a2;

- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithCoder:(id)a0;
- (void)create;
- (struct b2Joint { void /* function */ **x0; int x1; struct b2Joint *x2; struct b2Joint *x3; struct b2JointEdge { struct b2Body *x0; struct b2Joint *x1; struct b2JointEdge *x2; struct b2JointEdge *x3; } x4; struct b2JointEdge { struct b2Body *x0; struct b2Joint *x1; struct b2JointEdge *x2; struct b2JointEdge *x3; } x5; struct b2Body *x6; struct b2Body *x7; BOOL x8; BOOL x9; void *x10; } *)_joint;
- (struct b2JointDef { int x0; void *x1; struct b2Body *x2; struct b2Body *x3; BOOL x4; } *)_jointDef;
- (id)initWithBodyA:(id)a0 bodyB:(id)a1 anchor:(struct CGPoint { double x0; double x1; })a2;
- (BOOL)isEqualToWeldJoint:(id)a0;
- (void)set_joint:(struct b2Joint { void /* function */ **x0; int x1; struct b2Joint *x2; struct b2Joint *x3; struct b2JointEdge { struct b2Body *x0; struct b2Joint *x1; struct b2JointEdge *x2; struct b2JointEdge *x3; } x4; struct b2JointEdge { struct b2Body *x0; struct b2Joint *x1; struct b2JointEdge *x2; struct b2JointEdge *x3; } x5; struct b2Body *x6; struct b2Body *x7; BOOL x8; BOOL x9; void *x10; } *)a0;

@end
