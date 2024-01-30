@class NSArray, NSMapTable;

@interface UIDynamicItemBehavior : UIDynamicBehavior {
    BOOL _useDefaultViewPropertiesApplier;
    struct { unsigned char elasticityChanged : 1; unsigned char frictionChanged : 1; unsigned char densityChanged : 1; unsigned char resistanceChanged : 1; unsigned char angularResistanceChanged : 1; unsigned char rotationEnabledChanged : 1; unsigned char useDefaultViewPropertiesApplierChanged : 1; unsigned char chargeChanged : 1; unsigned char dynamicChanged : 1; } _stateFlags;
    NSMapTable *_cachedAngularVelocities;
    NSMapTable *_cachedLinearVelocities;
}

@property (readonly, copy, nonatomic) NSArray *items;
@property (nonatomic) double elasticity;
@property (nonatomic) double friction;
@property (nonatomic) double density;
@property (nonatomic) double resistance;
@property (nonatomic) double angularResistance;
@property (nonatomic) double charge;
@property (nonatomic, getter=isAnchored) BOOL anchored;
@property (nonatomic) BOOL allowsRotation;

+ (BOOL)_isPrimitiveBehavior;

- (void)removeItem:(id)a0;
- (void)addItem:(id)a0;
- (id)initWithItems:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (double)_massForItem:(id)a0;
- (void)_configureBody:(id)a0 forView:(id)a1;
- (struct CGPoint { double x0; double x1; })linearVelocityForItem:(id)a0;
- (void)_setPosition:(struct CGPoint { double x0; double x1; })a0 forItem:(id)a1;
- (void)addLinearVelocity:(struct CGPoint { double x0; double x1; })a0 forItem:(id)a1;
- (struct CGPoint { double x0; double x1; })_positionForItem:(id)a0;
- (void)_setAngle:(double)a0 forItem:(id)a1;
- (void)addAngularVelocity:(double)a0 forItem:(id)a1;
- (double)angularVelocityForItem:(id)a0;
- (double)_elasticityForItem:(id)a0;
- (double)_frictionForItem:(id)a0;
- (double)_densityForItem:(id)a0;
- (double)_resistanceForItem:(id)a0;
- (double)_angularResistanceForItem:(id)a0;
- (BOOL)_rotationEnabledForItem:(id)a0;
- (void)applyImpulse:(struct CGPoint { double x0; double x1; })a0 toItem:(id)a1;
- (BOOL)useDefaultViewPropertiesApplier;
- (void)setUseDefaultViewPropertiesApplier:(BOOL)a0;
- (id)description;
- (void)_associate;
- (void)_dissociate;
- (void)_reevaluate:(unsigned long long)a0;
- (double)_angleForItem:(id)a0;

@end
