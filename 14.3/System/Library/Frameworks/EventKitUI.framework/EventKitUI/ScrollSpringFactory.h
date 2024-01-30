@interface ScrollSpringFactory : SpringFactory

@property (nonatomic) double initialVelocity;

+ (id)sharedFactory;

- (id)_basicAnimationForView:(id)a0 withKeyPath:(id)a1;

@end
