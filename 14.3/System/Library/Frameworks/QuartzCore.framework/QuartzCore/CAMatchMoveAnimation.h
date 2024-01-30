@class CALayer, NSString, NSArray;

@interface CAMatchMoveAnimation : CAAnimation

@property (weak) CALayer *sourceLayer;
@property unsigned long long sourceLayerRenderId;
@property unsigned int sourceContextId;
@property (copy) NSString *keyPath;
@property BOOL targetsSuperlayer;
@property (copy) NSArray *sourcePoints;
@property BOOL usesNormalizedCoordinates;
@property BOOL appliesX;
@property BOOL appliesY;
@property BOOL appliesScale;
@property BOOL appliesRotation;
@property (getter=isAdditive) BOOL additive;

+ (id)defaultValueForKey:(id)a0;

- (BOOL)_setCARenderAnimation:(struct Animation { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; unsigned long long x2; float x3; struct Ref<CA::Render::Timing> { struct Timing *x0; } x4; struct Ref<CA::Render::Vector> { struct Vector *x0; } x5; struct __CFString *x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; } *)a0 layer:(id)a1;
- (unsigned int)_propertyFlagsForLayer:(id)a0;
- (struct Animation { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; unsigned long long x2; float x3; struct Ref<CA::Render::Timing> { struct Timing *x0; } x4; struct Ref<CA::Render::Vector> { struct Vector *x0; } x5; struct __CFString *x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; } *)_copyRenderAnimationForLayer:(id)a0;
- (void)applyForTime:(double)a0 presentationObject:(id)a1 modelObject:(id)a2;
- (BOOL)CA_validateValue:(id)a0 forKey:(id)a1;

@end
