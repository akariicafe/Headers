@interface PKPhysicsJointDistance : PKPhysicsJoint {
    struct b2DistanceJointDef { int type; void *userData; struct b2Body *bodyA; struct b2Body *bodyB; BOOL collideConnected; struct b2Vec2 { float x; float y; } localAnchorA; struct b2Vec2 { float x; float y; } localAnchorB; float length; float frequencyHz; float dampingRatio; } _jointDef;
    struct b2DistanceJoint { void /* function */ **x0; int x1; struct b2Joint *x2; struct b2Joint *x3; struct b2JointEdge { struct b2Body *x0; struct b2Joint *x1; struct b2JointEdge *x2; struct b2JointEdge *x3; } x4; struct b2JointEdge { struct b2Body *x0; struct b2Joint *x1; struct b2JointEdge *x2; struct b2JointEdge *x3; } x5; struct b2Body *x6; struct b2Body *x7; BOOL x8; BOOL x9; void *x10; float x11; float x12; float x13; struct b2Vec2 { float x0; float x1; } x14; struct b2Vec2 { float x0; float x1; } x15; float x16; float x17; float x18; int x19; int x20; struct b2Vec2 { float x0; float x1; } x21; struct b2Vec2 { float x0; float x1; } x22; struct b2Vec2 { float x0; float x1; } x23; struct b2Vec2 { float x0; float x1; } x24; struct b2Vec2 { float x0; float x1; } x25; float x26; float x27; float x28; float x29; float x30; } *_joint;
    struct CGPoint { double x; double y; } _anchorA;
    struct CGPoint { double x; double y; } _anchorB;
}

@property (nonatomic) double damping;
@property (nonatomic) double frequency;
@property (nonatomic) double length;
@property (nonatomic) BOOL collideConnected;

+ (id)jointWithBodyA:(id)a0 bodyB:(id)a1 localAnchorA:(struct CGPoint { double x0; double x1; })a2 localAnchorB:(struct CGPoint { double x0; double x1; })a3;
+ (id)jointWithBodyA:(id)a0 bodyB:(id)a1 anchorA:(struct CGPoint { double x0; double x1; })a2 anchorB:(struct CGPoint { double x0; double x1; })a3;
+ (BOOL)supportsSecureCoding;

- (struct b2Joint { void /* function */ **x0; int x1; struct b2Joint *x2; struct b2Joint *x3; struct b2JointEdge { struct b2Body *x0; struct b2Joint *x1; struct b2JointEdge *x2; struct b2JointEdge *x3; } x4; struct b2JointEdge { struct b2Body *x0; struct b2Joint *x1; struct b2JointEdge *x2; struct b2JointEdge *x3; } x5; struct b2Body *x6; struct b2Body *x7; BOOL x8; BOOL x9; void *x10; } *)_joint;
- (void)create;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToDistanceJoint:(id)a0;
- (void)set_joint:(struct b2Joint { void /* function */ **x0; int x1; struct b2Joint *x2; struct b2Joint *x3; struct b2JointEdge { struct b2Body *x0; struct b2Joint *x1; struct b2JointEdge *x2; struct b2JointEdge *x3; } x4; struct b2JointEdge { struct b2Body *x0; struct b2Joint *x1; struct b2JointEdge *x2; struct b2JointEdge *x3; } x5; struct b2Body *x6; struct b2Body *x7; BOOL x8; BOOL x9; void *x10; } *)a0;
- (struct b2JointDef { int x0; void *x1; struct b2Body *x2; struct b2Body *x3; BOOL x4; } *)_jointDef;
- (id)initWithBodyA:(id)a0 bodyB:(id)a1 localAnchorA:(struct CGPoint { double x0; double x1; })a2 localAnchorB:(struct CGPoint { double x0; double x1; })a3;
- (id)initWithBodyA:(id)a0 bodyB:(id)a1 anchorA:(struct CGPoint { double x0; double x1; })a2 anchorB:(struct CGPoint { double x0; double x1; })a3;

@end
