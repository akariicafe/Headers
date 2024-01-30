@class SKTexture, SKRegion, PKPhysicsField;

@interface SKFieldNode : SKNode {
    PKPhysicsField *_field;
}

@property (retain, nonatomic) SKRegion *region;
@property (nonatomic) float strength;
@property (nonatomic) float falloff;
@property (nonatomic) float minimumRadius;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isExclusive) BOOL exclusive;
@property (nonatomic) unsigned int categoryBitMask;
@property (nonatomic) void /* unknown type, empty encoding */ direction;
@property (nonatomic) float smoothness;
@property (nonatomic) float animationSpeed;
@property (retain, nonatomic) SKTexture *texture;

+ (BOOL)supportsSecureCoding;
+ (id)magneticField;
+ (id)dragField;
+ (id)electricField;
+ (id)linearGravityFieldWithVector:(SEL)a0;
+ (id)noiseFieldWithSmoothness:(double)a0 animationSpeed:(double)a1;
+ (id)springField;
+ (id)turbulenceFieldWithSmoothness:(double)a0 animationSpeed:(double)a1;
+ (id)velocityFieldWithVector:(SEL)a0;
+ (id)vortexField;
+ (id)radialGravityField;
+ (id)customFieldWithEvaluationBlock:(id /* block */)a0;
+ (id)velocityFieldWithTexture:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)field;
- (void).cxx_destruct;
- (BOOL)isEqualToNode:(id)a0;
- (void)setPhysicsField:(id)a0;
- (id)_descriptionClassName;
- (id)initWithCoder:(id)a0 field:(id)a1;

@end
