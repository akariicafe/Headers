@class PKPhysicsBody;

@interface PKPhysicsContact : NSObject {
    PKPhysicsBody *_bodyA;
    PKPhysicsBody *_bodyB;
    struct CGPoint { double x; double y; } _contactPoint;
    struct CGVector { double dx; double dy; } _contactNormal;
    double _impulse;
    BOOL _didBegin;
    BOOL _didEnd;
}

@property BOOL didBegin;
@property BOOL didEnd;
@property (readonly, nonatomic) PKPhysicsBody *bodyA;
@property (readonly, nonatomic) PKPhysicsBody *bodyB;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } contactPoint;
@property (readonly, nonatomic) struct CGVector { double x0; double x1; } contactNormal;
@property (readonly, nonatomic) double collisionImpulse;

- (id)init;
- (void).cxx_destruct;
- (void)setContactPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setBodyA:(id)a0;
- (void)setBodyB:(id)a0;
- (void)setCollisionImpulse:(double)a0;
- (void)setContactNormal:(struct CGVector { double x0; double x1; })a0;

@end
