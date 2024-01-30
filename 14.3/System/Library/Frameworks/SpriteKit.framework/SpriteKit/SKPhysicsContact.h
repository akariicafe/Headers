@class SKPhysicsBody;

@interface SKPhysicsContact : NSObject

@property (readonly, nonatomic) SKPhysicsBody *bodyA;
@property (readonly, nonatomic) SKPhysicsBody *bodyB;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } contactPoint;
@property (readonly, nonatomic) struct CGVector { double dx; double dy; } contactNormal;
@property (readonly, nonatomic) double collisionImpulse;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void).cxx_destruct;

@end
