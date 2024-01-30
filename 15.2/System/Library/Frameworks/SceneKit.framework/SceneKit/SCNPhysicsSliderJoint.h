@class SCNPhysicsBody, SCNPhysicsWorld;

@interface SCNPhysicsSliderJoint : SCNPhysicsBehavior {
    struct { SCNPhysicsBody *bodyA; SCNPhysicsBody *bodyB; struct SCNVector3 { float x; float y; float z; } axisA; struct SCNVector3 { float x; float y; float z; } anchorA; struct SCNVector3 { float x; float y; float z; } axisB; struct SCNVector3 { float x; float y; float z; } anchorB; double minLinearLimit; double maxLinearLimit; double minAngularLimit; double maxAngularLimit; double motorTargetLinearVelocity; double motorMaximumForce; double motorTargetAngularVelocity; double motorMaximumTorque; } _definition;
    struct btSliderConstraint { void /* function */ **x0; int x1; int x2; union { int x0; void *x1; } x3; float x4; BOOL x5; BOOL x6; int x7; struct btRigidBody *x8; struct btRigidBody *x9; float x10; float x11; struct btJointFeedback *x12; BOOL x13; BOOL x14; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x0[4]; } x0; } x0[3]; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; } x15; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x0[4]; } x0; } x0[3]; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; } x16; BOOL x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; float x27; float x28; float x29; float x30; float x31; float x32; float x33; float x34; float x35; float x36; float x37; float x38; float x39; float x40; float x41; float x42; float x43; float x44; float x45; BOOL x46; BOOL x47; int x48; struct btJacobianEntry { struct btVector3 { union { float x0[4]; } x0; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; struct btVector3 { union { float x0[4]; } x0; } x2; struct btVector3 { union { float x0[4]; } x0; } x3; struct btVector3 { union { float x0[4]; } x0; } x4; float x5; } x49[3]; float x50[3]; struct btJacobianEntry { struct btVector3 { union { float x0[4]; } x0; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; struct btVector3 { union { float x0[4]; } x0; } x2; struct btVector3 { union { float x0[4]; } x0; } x3; struct btVector3 { union { float x0[4]; } x0; } x4; float x5; } x51[3]; float x52; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x0[4]; } x0; } x0[3]; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; } x53; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x0[4]; } x0; } x0[3]; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; } x54; struct btVector3 { union { float x0[4]; } x0; } x55; struct btVector3 { union { float x0[4]; } x0; } x56; struct btVector3 { union { float x0[4]; } x0; } x57; struct btVector3 { union { float x0[4]; } x0; } x58; struct btVector3 { union { float x0[4]; } x0; } x59; struct btVector3 { union { float x0[4]; } x0; } x60; struct btVector3 { union { float x0[4]; } x0; } x61; struct btVector3 { union { float x0[4]; } x0; } x62; float x63; float x64; float x65; float x66; BOOL x67; float x68; float x69; float x70; BOOL x71; float x72; float x73; float x74; } *_constraint;
    SCNPhysicsWorld *_world;
}

@property (readonly, nonatomic) SCNPhysicsBody *bodyA;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } axisA;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } anchorA;
@property (readonly, nonatomic) SCNPhysicsBody *bodyB;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } axisB;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } anchorB;
@property (nonatomic) double minimumLinearLimit;
@property (nonatomic) double maximumLinearLimit;
@property (nonatomic) double minimumAngularLimit;
@property (nonatomic) double maximumAngularLimit;
@property (nonatomic) double motorTargetLinearVelocity;
@property (nonatomic) double motorMaximumForce;
@property (nonatomic) double motorTargetAngularVelocity;
@property (nonatomic) double motorMaximumTorque;

+ (BOOL)supportsSecureCoding;
+ (id)jointWithBodyA:(id)a0 axisA:(struct SCNVector3 { float x0; float x1; float x2; })a1 anchorA:(struct SCNVector3 { float x0; float x1; float x2; })a2 bodyB:(id)a3 axisB:(struct SCNVector3 { float x0; float x1; float x2; })a4 anchorB:(struct SCNVector3 { float x0; float x1; float x2; })a5;
+ (id)jointWithBody:(id)a0 axis:(struct SCNVector3 { float x0; float x1; float x2; })a1 anchor:(struct SCNVector3 { float x0; float x1; float x2; })a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithBodyA:(id)a0 axisA:(struct SCNVector3 { float x0; float x1; float x2; })a1 anchorA:(struct SCNVector3 { float x0; float x1; float x2; })a2 bodyB:(id)a3 axisB:(struct SCNVector3 { float x0; float x1; float x2; })a4 anchorB:(struct SCNVector3 { float x0; float x1; float x2; })a5;
- (id)initWithBody:(id)a0 axis:(struct SCNVector3 { float x0; float x1; float x2; })a1 anchor:(struct SCNVector3 { float x0; float x1; float x2; })a2;
- (void)_copyDefinition:(struct { unsigned char x0[296]; } *)a0;
- (void)_addToPhysicsWorld:(id)a0 definition:(struct { unsigned char x0[296]; })a1;
- (void)_willRemoveFromPhysicsWorld:(id)a0;

@end
