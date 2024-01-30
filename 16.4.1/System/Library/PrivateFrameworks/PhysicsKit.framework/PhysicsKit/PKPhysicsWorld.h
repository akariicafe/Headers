@class NSMutableArray, NSMutableDictionary;
@protocol PKPhysicsContactDelegate;

@interface PKPhysicsWorld : NSObject <NSSecureCoding> {
    void *_world;
    struct b2Vec2 { float x; float y; } _gravity;
    BOOL _doSleep;
    double _accumulatedDt;
    struct PKContactListener { void /* function */ **_vptr$b2ContactListener; NSMutableDictionary *_contacts; id<PKPhysicsContactDelegate> _contactDelegate; } _contactListener;
    float _speed;
    NSMutableArray *_bodies;
    NSMutableArray *_joints;
    NSMutableArray *_postStepBlocks;
    struct PKDebugDrawPacket { struct vector<PKPoint, std::allocator<PKPoint>> { struct *__begin_; struct *__end_; struct __compressed_pair<PKPoint *, std::allocator<PKPoint>> { struct *__value_; } __end_cap_; } _linePoints; struct vector<PKDebugDrawPacket::color4, std::allocator<PKDebugDrawPacket::color4>> { struct *__begin_; struct *__end_; struct __compressed_pair<PKDebugDrawPacket::color4 *, std::allocator<PKDebugDrawPacket::color4>> { struct *__value_; } __end_cap_; } _colors; } drawPacket;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL _doSleep;
@property (retain, nonatomic) NSMutableArray *_bodies;
@property (readonly, nonatomic) void *aether;
@property (readonly, nonatomic) void *_world;
@property (nonatomic) struct b2Vec2 { float x0; float x1; } _gravity;
@property (nonatomic) struct CGVector { double x0; double x1; } gravity;
@property (nonatomic) double speed;
@property (nonatomic) double velocityThreshold;
@property (nonatomic) id<PKPhysicsContactDelegate> contactDelegate;

+ (id)world;

- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (void)addField:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copy;
- (id)init;
- (void).cxx_destruct;
- (void)debugDraw:(float)a0 matrix:(union _GLSKMatrix4 { struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; } x0; float x1[16]; })a1 showsPhysics:(BOOL)a2 showsOutlineInterior:(BOOL)a3 showsFields:(BOOL)a4;
- (const void *)debugDrawPacket;
- (void)_runBlockOutsideOfTimeStep:(id /* block */)a0;
- (void)addBody:(id)a0;
- (void)addJoint:(id)a0;
- (id)collisionDelegate;
- (void)enumerateBodiesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingBlock:(id /* block */)a1;
- (void)removeBody:(id)a0;
- (void)removeField:(id)a0;
- (void)removeJoint:(id)a0;
- (void)setCollisionDelegate:(id)a0;
- (BOOL)stepWithTime:(double)a0 velocityIterations:(unsigned long long)a1 positionIterations:(unsigned long long)a2;
- (id)joints;
- (void)removeAllJoints;
- (void)removeAllBodies;
- (void /* unknown type, empty encoding */)sampleFieldsAt:(SEL)a0;
- (id)bodies;
- (id)bodyAlongRayStart:(struct CGPoint { double x0; double x1; })a0 end:(struct CGPoint { double x0; double x1; })a1;
- (id)bodyAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)bodyInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)enumerateBodiesAlongRayStart:(struct CGPoint { double x0; double x1; })a0 end:(struct CGPoint { double x0; double x1; })a1 usingBlock:(id /* block */)a2;
- (void)enumerateBodiesAtPoint:(struct CGPoint { double x0; double x1; })a0 usingBlock:(id /* block */)a1;
- (BOOL)hasBodies;
- (BOOL)hasFields;
- (struct CGVector { double x0; double x1; })sampleFields:(struct CGPoint { double x0; double x1; })a0;
- (void)__init__;
- (BOOL)isEqualToWorld:(id)a0;
- (void)removeAllFields;
- (struct CGVector { double x0; double x1; })evalForce:(unsigned int)a0 point:(struct CGPoint { double x0; double x1; })a1;
- (id)sampleFields:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 categories:(unsigned int)a1 dataSize:(struct CGSize { double x0; double x1; })a2;

@end
