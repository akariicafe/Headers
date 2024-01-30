@interface CASpringAnimation : CABasicAnimation

@property double velocity;
@property double mass;
@property double stiffness;
@property double damping;
@property double initialVelocity;
@property (readonly) double settlingDuration;

+ (id)defaultValueForKey:(id)a0;

- (double)durationForEpsilon:(double)a0;
- (double)_timeFunction:(double)a0;
- (float)_solveForInput:(float)a0;
- (void *)_copyRenderAnimationForLayer:(id)a0;
- (BOOL)_setCARenderAnimation:(void *)a0 layer:(id)a1;
- (unsigned int)_propertyFlagsForLayer:(id)a0;

@end
