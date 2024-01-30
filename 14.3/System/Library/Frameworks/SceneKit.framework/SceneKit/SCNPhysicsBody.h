@class SCNNode, SCNPhysicsShape;

@interface SCNPhysicsBody : NSObject <NSCopying, NSSecureCoding> {
    SCNNode *_node;
    double _mass;
    double _charge;
    double _friction;
    double _restitution;
    double _rollingFriction;
    SCNPhysicsShape *_physicsShape;
    long long _type;
    double _damping;
    struct SCNVector4 { float x; float y; float z; float w; } _angularVelocity;
    double _angularDamping;
    struct SCNVector3 { float x; float y; float z; } _velocityFactor;
    struct SCNVector3 { float x; float y; float z; } _angularVelocityFactor;
    struct SCNVector3 { float x; float y; float z; } _velocity;
    BOOL _ignoreGravity;
    double _linearRestingThreshold;
    double _angularRestingThreshold;
    BOOL _explicitMomentOfInertia;
    struct SCNVector3 { float x; float y; float z; } _momentOfInertia;
    struct SCNVector3 { float x; float y; float z; } _centerOfMassOffset;
    unsigned long long _categoryBitMask;
    unsigned long long _collisionBitMask;
    unsigned long long _contactTestBitMask;
    BOOL _allowsResting;
    BOOL _isDefaultShape;
    struct btRigidBody { void /* function */ **x0; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x0[4]; } x0; } x0[3]; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; } x1; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x0[4]; } x0; } x0[3]; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; } x2; struct btVector3 { union { float x0[4]; } x0; } x3; struct btVector3 { union { float x0[4]; } x0; } x4; struct btVector3 { union { float x0[4]; } x0; } x5; int x6; float x7; struct btBroadphaseProxy *x8; struct btCollisionShape *x9; void *x10; struct btCollisionShape *x11; int x12; int x13; int x14; int x15; float x16; float x17; float x18; float x19; int x20; void *x21; float x22; float x23; float x24; int x25; struct btMatrix3x3 { struct btVector3 { union { float x0[4]; } x0; } x0[3]; } x26; struct btVector3 { union { float x0[4]; } x0; } x27; struct btVector3 { union { float x0[4]; } x0; } x28; float x29; struct btVector3 { union { float x0[4]; } x0; } x30; struct btVector3 { union { float x0[4]; } x0; } x31; struct btVector3 { union { float x0[4]; } x0; } x32; struct btVector3 { union { float x0[4]; } x0; } x33; struct btVector3 { union { float x0[4]; } x0; } x34; struct btVector3 { union { float x0[4]; } x0; } x35; float x36; float x37; BOOL x38; float x39; float x40; float x41; float x42; float x43; float x44; float x45; struct btMotionState *x46; struct btAlignedObjectArray<btTypedConstraint *> { struct btAlignedAllocator<btTypedConstraint *, 16> { } x0; int x1; int x2; struct btTypedConstraint **x3; BOOL x4; } x47; int x48; int x49; struct btVector3 { union { float x0[4]; } x0; } x50; struct btVector3 { union { float x0[4]; } x0; } x51; struct btVector3 { union { float x0[4]; } x0; } x52; struct btVector3 { union { float x0[4]; } x0; } x53; struct btVector3 { union { float x0[4]; } x0; } x54; struct btVector3 { union { float x0[4]; } x0; } x55; int x56; int x57; } *_body;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (nonatomic) double mass;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } momentOfInertia;
@property (nonatomic) BOOL usesDefaultMomentOfInertia;
@property (nonatomic) double charge;
@property (nonatomic) double friction;
@property (nonatomic) double restitution;
@property (nonatomic) double rollingFriction;
@property (retain, nonatomic) SCNPhysicsShape *physicsShape;
@property (readonly, nonatomic) BOOL isResting;
@property (nonatomic) BOOL allowsResting;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } velocity;
@property (nonatomic) struct SCNVector4 { float x0; float x1; float x2; float x3; } angularVelocity;
@property (nonatomic) double damping;
@property (nonatomic) double angularDamping;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } velocityFactor;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } angularVelocityFactor;
@property (nonatomic) unsigned long long categoryBitMask;
@property (nonatomic) unsigned long long collisionBitMask;
@property (nonatomic) unsigned long long contactTestBitMask;
@property (nonatomic, getter=isAffectedByGravity) BOOL affectedByGravity;
@property (nonatomic) double continuousCollisionDetectionThreshold;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } centerOfMassOffset;
@property (nonatomic) double linearRestingThreshold;
@property (nonatomic) double angularRestingThreshold;

+ (id)kinematicBody;
+ (id)dynamicBody;
+ (id)bodyWithType:(long long)a0 shape:(id)a1;
+ (id)staticBody;

- (void)resetTransform;
- (id)_owner;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct btRigidBody { void /* function */ **x0; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x0[4]; } x0; } x0[3]; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; } x1; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x0[4]; } x0; } x0[3]; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; } x2; struct btVector3 { union { float x0[4]; } x0; } x3; struct btVector3 { union { float x0[4]; } x0; } x4; struct btVector3 { union { float x0[4]; } x0; } x5; int x6; float x7; struct btBroadphaseProxy *x8; struct btCollisionShape *x9; void *x10; struct btCollisionShape *x11; int x12; int x13; int x14; int x15; float x16; float x17; float x18; float x19; int x20; void *x21; float x22; float x23; float x24; int x25; struct btMatrix3x3 { struct btVector3 { union { float x0[4]; } x0; } x0[3]; } x26; struct btVector3 { union { float x0[4]; } x0; } x27; struct btVector3 { union { float x0[4]; } x0; } x28; float x29; struct btVector3 { union { float x0[4]; } x0; } x30; struct btVector3 { union { float x0[4]; } x0; } x31; struct btVector3 { union { float x0[4]; } x0; } x32; struct btVector3 { union { float x0[4]; } x0; } x33; struct btVector3 { union { float x0[4]; } x0; } x34; struct btVector3 { union { float x0[4]; } x0; } x35; float x36; float x37; BOOL x38; float x39; float x40; float x41; float x42; float x43; float x44; float x45; struct btMotionState *x46; struct btAlignedObjectArray<btTypedConstraint *> { struct btAlignedAllocator<btTypedConstraint *, 16> { } x0; int x1; int x2; struct btTypedConstraint **x3; BOOL x4; } x47; int x48; int x49; struct btVector3 { union { float x0[4]; } x0; } x50; struct btVector3 { union { float x0[4]; } x0; } x51; struct btVector3 { union { float x0[4]; } x0; } x52; struct btVector3 { union { float x0[4]; } x0; } x53; struct btVector3 { union { float x0[4]; } x0; } x54; struct btVector3 { union { float x0[4]; } x0; } x55; int x56; int x57; } *)_handle;
- (void)dealloc;
- (id)copy;
- (id)initWithCoder:(id)a0;
- (void)_activate;
- (void)setResting:(BOOL)a0;
- (void)_setOwner:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)applyForce:(struct SCNVector3 { float x0; float x1; float x2; })a0 impulse:(BOOL)a1;
- (void)resetToTransform:(struct SCNMatrix4 { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; })a0;
- (void)_removeOwner;
- (struct __C3DScene { } *)sceneRef;
- (struct btRigidBody { void /* function */ **x0; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x0[4]; } x0; } x0[3]; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; } x1; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x0[4]; } x0; } x0[3]; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; } x2; struct btVector3 { union { float x0[4]; } x0; } x3; struct btVector3 { union { float x0[4]; } x0; } x4; struct btVector3 { union { float x0[4]; } x0; } x5; int x6; float x7; struct btBroadphaseProxy *x8; struct btCollisionShape *x9; void *x10; struct btCollisionShape *x11; int x12; int x13; int x14; int x15; float x16; float x17; float x18; float x19; int x20; void *x21; float x22; float x23; float x24; int x25; struct btMatrix3x3 { struct btVector3 { union { float x0[4]; } x0; } x0[3]; } x26; struct btVector3 { union { float x0[4]; } x0; } x27; struct btVector3 { union { float x0[4]; } x0; } x28; float x29; struct btVector3 { union { float x0[4]; } x0; } x30; struct btVector3 { union { float x0[4]; } x0; } x31; struct btVector3 { union { float x0[4]; } x0; } x32; struct btVector3 { union { float x0[4]; } x0; } x33; struct btVector3 { union { float x0[4]; } x0; } x34; struct btVector3 { union { float x0[4]; } x0; } x35; float x36; float x37; BOOL x38; float x39; float x40; float x41; float x42; float x43; float x44; float x45; struct btMotionState *x46; struct btAlignedObjectArray<btTypedConstraint *> { struct btAlignedAllocator<btTypedConstraint *, 16> { } x0; int x1; int x2; struct btTypedConstraint **x3; BOOL x4; } x47; int x48; int x49; struct btVector3 { union { float x0[4]; } x0; } x50; struct btVector3 { union { float x0[4]; } x0; } x51; struct btVector3 { union { float x0[4]; } x0; } x52; struct btVector3 { union { float x0[4]; } x0; } x53; struct btVector3 { union { float x0[4]; } x0; } x54; struct btVector3 { union { float x0[4]; } x0; } x55; int x56; int x57; } *)_createBody;
- (id)initWithType:(long long)a0 shape:(id)a1;
- (struct btCollisionShape { void /* function */ **x0; int x1; void *x2; } *)_shapeHandleWithShape:(id)a0 owner:(id)a1;
- (void)moveToTransform:(struct SCNMatrix4 { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; })a0;
- (void)_didDecodeSCNPhysicsBody:(id)a0;
- (BOOL)respondsToCollision;
- (void)setLinearSleepingThreshold:(double)a0;
- (double)linearSleepingThreshold;
- (void)setAngularSleepingThreshold:(double)a0;
- (double)angularSleepingThreshold;
- (double)continuousCollisionDetection;
- (void)applyForce:(struct SCNVector3 { float x0; float x1; float x2; })a0 atPosition:(struct SCNVector3 { float x0; float x1; float x2; })a1 impulse:(BOOL)a2;
- (void)applyTorque:(struct SCNVector4 { float x0; float x1; float x2; float x3; })a0 impulse:(BOOL)a1;
- (void)clearAllForces;
- (void)moveToPosition:(struct SCNVector3 { float x0; float x1; float x2; })a0;
- (void)rotateToAxisAngle:(struct SCNVector4 { float x0; float x1; float x2; float x3; })a0;
- (void)_ownerWillDie;

@end
