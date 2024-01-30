@class NSArray, SKNode;

@interface SKPhysicsBody : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isDynamic) BOOL dynamic;
@property (nonatomic) BOOL usesPreciseCollisionDetection;
@property (nonatomic) BOOL allowsRotation;
@property (nonatomic) BOOL pinned;
@property (nonatomic, getter=isResting) BOOL resting;
@property (nonatomic) double friction;
@property (nonatomic) double charge;
@property (nonatomic) double restitution;
@property (nonatomic) double linearDamping;
@property (nonatomic) double angularDamping;
@property (nonatomic) double density;
@property (nonatomic) double mass;
@property (readonly, nonatomic) double area;
@property (nonatomic) BOOL affectedByGravity;
@property (nonatomic) unsigned int fieldBitMask;
@property (nonatomic) unsigned int categoryBitMask;
@property (nonatomic) unsigned int collisionBitMask;
@property (nonatomic) unsigned int contactTestBitMask;
@property (readonly, nonatomic) NSArray *joints;
@property (readonly, weak, nonatomic) SKNode *node;
@property (nonatomic) struct CGVector { double dx; double dy; } velocity;
@property (nonatomic) double angularVelocity;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)copyWithZone:(struct _NSZone { } *)a0;
+ (id)bodyWithRectangleOfSize:(struct CGSize { double x0; double x1; })a0 center:(struct CGPoint { double x0; double x1; })a1;
+ (id)bodyWithEdgeFromPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
+ (id)bodyWithPolygonFromPath:(struct CGPath { } *)a0;
+ (id)bodyWithEdgeChainFromPath:(struct CGPath { } *)a0;
+ (id)bodyWithEdgeLoopFromPath:(struct CGPath { } *)a0;
+ (id)bodyWithBodies:(id)a0;
+ (id)bodyWithCircleOfRadius:(double)a0;
+ (id)bodyWithRectangleOfSize:(struct CGSize { double x0; double x1; })a0;
+ (id)bodyWithTexture:(id)a0 alphaThreshold:(float)a1 size:(struct CGSize { double x0; double x1; })a2 accuracy:(float)a3;
+ (id)bodyWithCircleOfRadius:(double)a0 center:(struct CGPoint { double x0; double x1; })a1;
+ (id)bodyWithTexture:(id)a0 alphaThreshold:(float)a1 size:(struct CGSize { double x0; double x1; })a2;
+ (id)bodyWithEdgeLoopFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)bodyWithTexture:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyImpulse:(struct CGVector { double x0; double x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)applyForce:(struct CGVector { double x0; double x1; })a0;
- (void)applyForce:(struct CGVector { double x0; double x1; })a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)applyTorque:(double)a0;
- (void)applyImpulse:(struct CGVector { double x0; double x1; })a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)applyAngularImpulse:(double)a0;
- (id)allContactedBodies;

@end
