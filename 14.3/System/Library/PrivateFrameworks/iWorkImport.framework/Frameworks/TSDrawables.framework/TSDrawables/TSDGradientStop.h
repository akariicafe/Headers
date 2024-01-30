@class TSUColor;

@interface TSDGradientStop : NSObject <TSDMixing, NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) TSUColor *color;
@property (readonly, nonatomic) double fraction;
@property (readonly, nonatomic) double inflection;

+ (id)gradientStopWithColor:(id)a0 fraction:(double)a1;
+ (id)gradientStopWithColor:(id)a0 fraction:(double)a1 inflection:(double)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithColor:(id)a0 fraction:(double)a1;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (id)gradientStopWithColor:(id)a0;
- (id)initWithGradientStop:(id)a0;
- (void)p_setFraction:(double)a0;
- (id)initWithArchive:(const struct GradientArchive_GradientStop { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Color *x4; float x5; float x6; } *)a0 unarchiver:(id)a1;
- (id)initWithColor:(id)a0 fraction:(double)a1 inflection:(double)a2;
- (void)p_setColor:(id)a0;
- (void)p_setInflection:(double)a0;
- (id)gradientStopWithInflection:(double)a0;
- (void)saveToArchive:(struct GradientArchive_GradientStop { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Color *x4; float x5; float x6; } *)a0 archiver:(id)a1;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;

@end
