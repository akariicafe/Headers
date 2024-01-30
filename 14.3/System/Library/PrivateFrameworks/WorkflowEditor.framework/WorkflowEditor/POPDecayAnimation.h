@interface POPDecayAnimation : POPPropertyAnimation

@property (copy, nonatomic) id velocity;
@property (readonly, copy, nonatomic) id originalVelocity;
@property (nonatomic) double deceleration;
@property (readonly, nonatomic) double duration;

+ (id)animation;
+ (id)animationWithPropertyNamed:(id)a0;

- (id)toValue;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setVelocity:(id)a0;
- (id)velocity;
- (void)setToValue:(id)a0;
- (void)setFromValue:(id)a0;
- (void)_initState;
- (void)_appendDescription:(id)a0 debug:(BOOL)a1;
- (id)reversedVelocity;
- (void)_ensureComputedProperties;
- (void)_invalidateComputedProperties;

@end
