@protocol SKPhysicsContactDelegate;

@interface SKPhysicsWorld : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CGVector { double dx; double dy; } gravity;
@property (nonatomic) double speed;
@property (nonatomic) id<SKPhysicsContactDelegate> contactDelegate;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)encodeWithCoder:(id)a0;
- (void)addBody:(id)a0;
- (id)fields;
- (void)addJoint:(id)a0;
- (void)removeBody:(id)a0;
- (void)removeJoint:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)enumerateBodiesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingBlock:(id /* block */)a1;
- (BOOL)stepWithTime:(double)a0 velocityIterations:(unsigned long long)a1 positionIterations:(unsigned long long)a2;
- (id)bodies;
- (void)removeAllJoints;
- (BOOL)hasBodies;
- (BOOL)hasFields;
- (void)removeAllBodies;
- (void)enumerateBodiesAtPoint:(struct CGPoint { double x0; double x1; })a0 usingBlock:(id /* block */)a1;
- (void)enumerateBodiesAlongRayStart:(struct CGPoint { double x0; double x1; })a0 end:(struct CGPoint { double x0; double x1; })a1 usingBlock:(id /* block */)a2;
- (id)bodyAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)bodyInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)bodyAlongRayStart:(struct CGPoint { double x0; double x1; })a0 end:(struct CGPoint { double x0; double x1; })a1;
- (void /* unknown type, empty encoding */)sampleFields:(SEL)a0;
- (void /* unknown type, empty encoding */)sampleFieldsAt:(SEL)a0;

@end
