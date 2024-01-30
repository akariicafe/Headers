@class SKPhysicsBody;

@interface SKPhysicsJoint : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL _implicit;
@property (retain, nonatomic) SKPhysicsBody *bodyA;
@property (retain, nonatomic) SKPhysicsBody *bodyB;
@property (readonly, nonatomic) struct CGVector { double dx; double dy; } reactionForce;
@property (readonly, nonatomic) double reactionTorque;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
