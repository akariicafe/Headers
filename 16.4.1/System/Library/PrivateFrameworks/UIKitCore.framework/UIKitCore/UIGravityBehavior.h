@class NSArray;

@interface UIGravityBehavior : UIDynamicBehavior {
    struct CGPoint { double x; double y; } _gravity;
}

@property (readonly, copy, nonatomic) NSArray *items;
@property (nonatomic) struct CGVector { double x0; double x1; } gravityDirection;
@property (nonatomic) double angle;
@property (nonatomic) double magnitude;

+ (BOOL)_isPrimitiveBehavior;

- (void)removeItem:(id)a0;
- (void)addItem:(id)a0;
- (struct CGPoint { double x0; double x1; })gravity;
- (id)initWithItems:(id)a0;
- (id)init;
- (id)description;
- (void)_addGravityItem:(id)a0;
- (void)_associate;
- (void)_dissociate;
- (void)_setAngle:(double)a0 magnitude:(double)a1;
- (struct CGPoint { double x0; double x1; })denormalizedGravity;
- (void)setAngle:(double)a0 magnitude:(double)a1;
- (void)setGravity:(struct CGPoint { double x0; double x1; })a0;
- (void)setXComponent:(double)a0;
- (void)setXComponent:(double)a0 yComponent:(double)a1;
- (void)setYComponent:(double)a0;
- (double)xComponent;
- (double)yComponent;

@end
