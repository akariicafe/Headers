@class NSArray, PKPhysicsField, UIRegion;

@interface UIFieldBehavior : UIDynamicBehavior {
    PKPhysicsField *_field;
    struct { unsigned char fieldIsKindOfNoiseField : 1; } _fieldFlags;
}

@property (readonly, nonatomic) PKPhysicsField *_field;
@property (readonly, copy, nonatomic) NSArray *items;
@property (nonatomic) struct CGPoint { double x0; double x1; } position;
@property (retain, nonatomic) UIRegion *region;
@property (nonatomic) double strength;
@property (nonatomic) double falloff;
@property (nonatomic) double minimumRadius;
@property (nonatomic) struct CGVector { double x0; double x1; } direction;
@property (nonatomic) double smoothness;
@property (nonatomic) double animationSpeed;

+ (BOOL)_isPrimitiveBehavior;
+ (id)dragField;
+ (id)fieldWithEvaluationBlock:(id /* block */)a0;
+ (id)radialGravityFieldWithPosition:(struct CGPoint { double x0; double x1; })a0;
+ (id)linearGravityFieldWithVector:(struct CGVector { double x0; double x1; })a0;
+ (id)velocityFieldWithVector:(struct CGVector { double x0; double x1; })a0;
+ (id)noiseFieldWithSmoothness:(double)a0 animationSpeed:(double)a1;
+ (id)turbulenceFieldWithSmoothness:(double)a0 animationSpeed:(double)a1;
+ (id)vortexField;
+ (id)springField;
+ (id)magneticField;
+ (id)electricField;

- (void)removeItem:(id)a0;
- (void)addItem:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_initWithField:(id)a0;
- (void)_associate;
- (void)_dissociate;
- (void)setEnabled:(BOOL)a0;
- (BOOL)isEnabled;
- (void)_addFieldItem:(id)a0;
- (void)_changedParameter;

@end
