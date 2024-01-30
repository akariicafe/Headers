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
    void *_body;
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

- (void *)_handle;
- (void)encodeWithCoder:(id)a0;
- (void)resetTransform;
- (void)_setOwner:(id)a0;
- (id)_owner;
- (void)setResting:(BOOL)a0;
- (void)_activate;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (void)dealloc;
- (void)applyForce:(struct SCNVector3 { float x0; float x1; float x2; })a0 impulse:(BOOL)a1;
- (void)_removeOwner;
- (struct __C3DScene { } *)sceneRef;
- (void *)_createBody;
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
- (void)resetToTransform:(struct SCNMatrix4 { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; })a0;
- (void)moveToPosition:(struct SCNVector3 { float x0; float x1; float x2; })a0;
- (void)rotateToAxisAngle:(struct SCNVector4 { float x0; float x1; float x2; float x3; })a0;
- (void)_ownerWillDie;

@end
