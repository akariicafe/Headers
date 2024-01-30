@protocol SKPhysicsContactDelegate;

@interface SKPhysicsWorld : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CGVector { double dx; double dy; } gravity;
@property (nonatomic) double speed;
@property (nonatomic) id<SKPhysicsContactDelegate> contactDelegate;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)encodeWithCoder:(id)a0;
- (id)fields;
- (id)initWithCoder:(id)a0;
- (void)addBody:(id)a0;
- (void)addJoint:(id)a0;
- (void)enumerateBodiesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingBlock:(id /* block */)a1;
- (void)removeBody:(id)a0;
- (void)removeJoint:(id)a0;
- (BOOL)stepWithTime:(double)a0 velocityIterations:(unsigned long long)a1 positionIterations:(unsigned long long)a2;
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
- (void /* unknown type, empty encoding */)sampleFields:(SEL)a0;

@end
