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
+ (id)dragField;
+ (id)linearGravityFieldWithVector:(SEL)a0;
+ (id)velocityFieldWithVector:(SEL)a0;
+ (id)noiseFieldWithSmoothness:(double)a0 animationSpeed:(double)a1;
+ (id)turbulenceFieldWithSmoothness:(double)a0 animationSpeed:(double)a1;
+ (id)vortexField;
+ (id)springField;
+ (id)magneticField;
+ (id)electricField;
+ (id)customFieldWithEvaluationBlock:(id /* block */)a0;
+ (id)radialGravityField;
+ (id)velocityFieldWithTexture:(id)a0;

- (id)field;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToNode:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setPhysicsField:(id)a0;
- (id)_descriptionClassName;
- (id)initWithCoder:(id)a0 field:(id)a1;

@end
