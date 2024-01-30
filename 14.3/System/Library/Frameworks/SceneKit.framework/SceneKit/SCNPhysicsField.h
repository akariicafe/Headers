@class SCNNode, SCNPhysicsWorld;

@interface SCNPhysicsField : NSObject <NSCopying, NSSecureCoding> {
    struct SCNVector3 { float x; float y; float z; } _halfExtent;
    double _strength;
    double _falloffExponent;
    double _minimumDistance;
    BOOL _active;
    long long _scope;
    BOOL _usesEllipsoidalExtent;
    BOOL _exclusive;
    struct SCNVector3 { float x; float y; float z; } _offset;
    struct SCNVector3 { float x; float y; float z; } _direction;
    unsigned long long _categoryBitMask;
    SCNPhysicsWorld *_world;
    SCNNode *_node;
    struct c3dPhysicsField { void /* function */ **x0; struct { void /* unknown type, empty encoding */ x0[4]; } x1; struct { void /* unknown type, empty encoding */ x0[4]; } x2; float x3; float x4; float x5; unsigned int x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; float x11; } *_field;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double strength;
@property (nonatomic) double falloffExponent;
@property (nonatomic) double minimumDistance;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isExclusive) BOOL exclusive;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } halfExtent;
@property (nonatomic) BOOL usesEllipsoidalExtent;
@property (nonatomic) long long scope;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } offset;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } direction;
@property (nonatomic) unsigned long long categoryBitMask;

+ (id)field;
+ (id)dragField;
+ (id)noiseFieldWithSmoothness:(double)a0 animationSpeed:(double)a1;
+ (id)turbulenceFieldWithSmoothness:(double)a0 animationSpeed:(double)a1;
+ (id)vortexField;
+ (id)springField;
+ (id)magneticField;
+ (id)electricField;
+ (id)customFieldWithEvaluationBlock:(id /* block */)a0;
+ (id)radialGravityField;
+ (id)linearGravityField;
+ (void)_setDisplayScaleFactor:(double)a0;
+ (double)_displayScaleFactor;

- (BOOL)exclusive;
- (id)_owner;
- (void)_commonInit;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct c3dPhysicsField { void /* function */ **x0; struct { void /* unknown type, empty encoding */ x0[4]; } x1; struct { void /* unknown type, empty encoding */ x0[4]; } x2; float x3; float x4; float x5; unsigned int x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; float x11; } *)_handle;
- (void)dealloc;
- (id)copy;
- (id)initWithCoder:(id)a0;
- (void)_setOwner:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_removeOwner;
- (struct c3dPhysicsField { void /* function */ **x0; struct { void /* unknown type, empty encoding */ x0[4]; } x1; struct { void /* unknown type, empty encoding */ x0[4]; } x2; float x3; float x4; float x5; unsigned int x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; float x11; } *)_createField;
- (void)_setupCommonProperties;
- (BOOL)supportsDirection;
- (BOOL)supportsOffset;
- (void)_willRemoveFromPhysicsWorld;
- (void)_setWorld:(id)a0;
- (struct SCNVector3 { float x0; float x1; float x2; })evalAtLocation:(struct SCNVector3 { float x0; float x1; float x2; })a0;

@end
