@interface CASpringAnimation : CABasicAnimation

@property double velocity;
@property double mass;
@property double stiffness;
@property double damping;
@property double initialVelocity;
@property (readonly) double settlingDuration;

+ (id)defaultValueForKey:(id)a0;

- (BOOL)_setCARenderAnimation:(struct Animation { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; unsigned long long x2; float x3; struct Ref<CA::Render::Timing> { struct Timing *x0; } x4; struct Ref<CA::Render::Vector> { struct Vector *x0; } x5; struct __CFString *x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; } *)a0 layer:(id)a1;
- (unsigned int)_propertyFlagsForLayer:(id)a0;
- (struct Animation { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; unsigned long long x2; float x3; struct Ref<CA::Render::Timing> { struct Timing *x0; } x4; struct Ref<CA::Render::Vector> { struct Vector *x0; } x5; struct __CFString *x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; } *)_copyRenderAnimationForLayer:(id)a0;
- (float)_solveForInput:(float)a0;
- (double)durationForEpsilon:(double)a0;
- (double)_timeFunction:(double)a0;

@end
