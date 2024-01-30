@interface GKAgent2D : GKAgent <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) void /* unknown type, empty encoding */ position;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ velocity;
@property (nonatomic) float rotation;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)updateWithDeltaTime:(double)a0;
- (void)applySteeringForce:(SEL)a0 deltaTime:(double)a1;
- (void)setPosition_:(struct float2 { float x0; float x1; })a0;
- (struct float2 { float x0; float x1; })position_;
- (struct float2 { float x0; float x1; })velocity_;
- (void)applyBrakingForce:(float)a0 deltaTime:(double)a1;

@end
