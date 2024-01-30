@interface CAExternalAnimation : CAPropertyAnimation

@property (readonly) unsigned long long animId;
@property (copy) id /* block */ presentationBlock;

+ (id)animationWithKeyPath:(id)a0;

- (BOOL)_setCARenderAnimation:(struct Animation { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; unsigned long long x2; float x3; struct Ref<CA::Render::Timing> { struct Timing *x0; } x4; struct Ref<CA::Render::Vector> { struct Vector *x0; } x5; struct __CFString *x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; } *)a0 layer:(id)a1;
- (struct Animation { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; unsigned long long x2; float x3; struct Ref<CA::Render::Timing> { struct Timing *x0; } x4; struct Ref<CA::Render::Vector> { struct Vector *x0; } x5; struct __CFString *x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; } *)_copyRenderAnimationForLayer:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)applyForTime:(double)a0 presentationObject:(id)a1 modelObject:(id)a2;
- (void)setAnimId:(unsigned long long)a0;

@end
