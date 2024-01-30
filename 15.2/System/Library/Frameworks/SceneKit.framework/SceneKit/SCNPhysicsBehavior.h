@interface SCNPhysicsBehavior : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)bodyA;
- (id)bodyB;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)hasReferenceToPhysicsBody:(id)a0;

@end
