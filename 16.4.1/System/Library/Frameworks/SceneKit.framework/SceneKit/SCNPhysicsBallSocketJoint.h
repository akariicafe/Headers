@class SCNPhysicsBody, SCNPhysicsWorld;

@interface SCNPhysicsBallSocketJoint : SCNPhysicsBehavior {
    struct { SCNPhysicsBody *bodyA; SCNPhysicsBody *bodyB; struct SCNVector3 { float x; float y; float z; } anchorA; struct SCNVector3 { float x; float y; float z; } anchorB; } _definition;
    struct btPoint2PointConstraint { void /* function */ **x0; int x1; int x2; union { int x0; void *x1; } x3; float x4; BOOL x5; BOOL x6; int x7; struct btRigidBody *x8; struct btRigidBody *x9; float x10; float x11; struct btJointFeedback *x12; struct btJacobianEntry { struct btVector3 { union { float x0[4]; } x0; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; struct btVector3 { union { float x0[4]; } x0; } x2; struct btVector3 { union { float x0[4]; } x0; } x3; struct btVector3 { union { float x0[4]; } x0; } x4; float x5; } x13[3]; struct btVector3 { union { float x0[4]; } x0; } x14; struct btVector3 { union { float x0[4]; } x0; } x15; int x16; float x17; float x18; BOOL x19; struct btConstraintSetting { float x0; float x1; float x2; } x20; } *_constraint;
    SCNPhysicsWorld *_world;
}

@property (readonly, nonatomic) SCNPhysicsBody *bodyA;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } anchorA;
@property (readonly, nonatomic) SCNPhysicsBody *bodyB;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } anchorB;

+ (BOOL)supportsSecureCoding;
+ (id)jointWithBody:(id)a0 anchor:(struct SCNVector3 { float x0; float x1; float x2; })a1;
+ (id)jointWithBodyA:(id)a0 anchorA:(struct SCNVector3 { float x0; float x1; float x2; })a1 bodyB:(id)a2 anchorB:(struct SCNVector3 { float x0; float x1; float x2; })a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)_addToPhysicsWorld:(id)a0 definition:(struct { unsigned char x0[296]; })a1;
- (void)_copyDefinition:(struct { unsigned char x0[296]; } *)a0;
- (void)_willRemoveFromPhysicsWorld:(id)a0;
- (id)initWithBody:(id)a0 anchor:(struct SCNVector3 { float x0; float x1; float x2; })a1;
- (id)initWithBodyA:(id)a0 anchorA:(struct SCNVector3 { float x0; float x1; float x2; })a1 bodyB:(id)a2 anchorB:(struct SCNVector3 { float x0; float x1; float x2; })a3;

@end
