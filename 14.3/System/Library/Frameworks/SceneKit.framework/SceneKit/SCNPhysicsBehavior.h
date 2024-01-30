@interface SCNPhysicsBehavior : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)bodyA;
- (id)bodyB;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)hasReferenceToPhysicsBody:(id)a0;

@end
