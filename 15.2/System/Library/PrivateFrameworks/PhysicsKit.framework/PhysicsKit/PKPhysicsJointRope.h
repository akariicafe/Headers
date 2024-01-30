@interface PKPhysicsJointRope : PKPhysicsJoint {
    struct b2RopeJointDef { int type; void *userData; struct b2Body *bodyA; struct b2Body *bodyB; BOOL collideConnected; struct b2Vec2 { float x; float y; } localAnchorA; struct b2Vec2 { float x; float y; } localAnchorB; float maxLength; } _jointDef;
    struct b2RopeJoint { void /* function */ **x0; int x1; struct b2Joint *x2; struct b2Joint *x3; struct b2JointEdge { struct b2Body *x0; struct b2Joint *x1; struct b2JointEdge *x2; struct b2JointEdge *x3; } x4; struct b2JointEdge { struct b2Body *x0; struct b2Joint *x1; struct b2JointEdge *x2; struct b2JointEdge *x3; } x5; struct b2Body *x6; struct b2Body *x7; BOOL x8; BOOL x9; void *x10; struct b2Vec2 { float x0; float x1; } x11; struct b2Vec2 { float x0; float x1; } x12; float x13; float x14; float x15; int x16; int x17; struct b2Vec2 { float x0; float x1; } x18; struct b2Vec2 { float x0; float x1; } x19; struct b2Vec2 { float x0; float x1; } x20; struct b2Vec2 { float x0; float x1; } x21; struct b2Vec2 { float x0; float x1; } x22; float x23; float x24; float x25; float x26; float x27; int x28; } *_joint;
    struct CGPoint { double x; double y; } _anchorA;
    struct CGPoint { double x; double y; } _anchorB;
}

@property (nonatomic) double maxLength;

+ (BOOL)supportsSecureCoding;
+ (id)jointWithBodyA:(id)a0 bodyB:(id)a1 anchorA:(struct CGPoint { double x0; double x1; })a2 anchorB:(struct CGPoint { double x0; double x1; })a3;

- (struct b2Joint { void /* function */ **x0; int x1; struct b2Joint *x2; struct b2Joint *x3; struct b2JointEdge { struct b2Body *x0; struct b2Joint *x1; struct b2JointEdge *x2; struct b2JointEdge *x3; } x4; struct b2JointEdge { struct b2Body *x0; struct b2Joint *x1; struct b2JointEdge *x2; struct b2JointEdge *x3; } x5; struct b2Body *x6; struct b2Body *x7; BOOL x8; BOOL x9; void *x10; } *)_joint;
- (void)encodeWithCoder:(id)a0;
- (void)create;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (BOOL)isEqualToRopeJoint:(id)a0;
- (void)set_joint:(struct b2Joint { void /* function */ **x0; int x1; struct b2Joint *x2; struct b2Joint *x3; struct b2JointEdge { struct b2Body *x0; struct b2Joint *x1; struct b2JointEdge *x2; struct b2JointEdge *x3; } x4; struct b2JointEdge { struct b2Body *x0; struct b2Joint *x1; struct b2JointEdge *x2; struct b2JointEdge *x3; } x5; struct b2Body *x6; struct b2Body *x7; BOOL x8; BOOL x9; void *x10; } *)a0;
- (struct b2JointDef { int x0; void *x1; struct b2Body *x2; struct b2Body *x3; BOOL x4; } *)_jointDef;
- (id)initWithBodyA:(id)a0 bodyB:(id)a1 anchorA:(struct CGPoint { double x0; double x1; })a2 anchorB:(struct CGPoint { double x0; double x1; })a3;

@end
