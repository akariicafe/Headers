@class NSString;

@interface TSDSmartStroke : TSDStroke {
    NSString *mStrokeName;
}

@property (readonly, copy, nonatomic) NSString *strokeName;
@property (readonly, nonatomic) double deprecatedPatternOffsetDistance;

+ (id)strokeWithName:(id)a0 color:(id)a1 width:(double)a2;
+ (Class)classForName:(id)a0;
+ (id)p_mapOfStrokeNamesToAlternatesForOldVersions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (BOOL)canApplyDirectlyToRepRenderable;
- (BOOL)shouldAntialiasDefeat;
- (BOOL)canDrawWithOtherStroke:(id)a0;
- (id)initWithName:(id)a0 color:(id)a1 width:(double)a2 cap:(int)a3 join:(int)a4 pattern:(id)a5 miterLimit:(double)a6;
- (id)initWithArchive:(const struct StrokeArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Color *x4; struct StrokePatternArchive *x5; struct SmartStrokeArchive *x6; struct FrameArchive *x7; struct PatternedStrokeArchive *x8; float x9; int x10; int x11; float x12; } *)a0 unarchiver:(id)a1;
- (id)initWithName:(id)a0 color:(id)a1 width:(double)a2 cap:(int)a3 join:(int)a4 pattern:(id)a5;
- (void)saveToArchive:(struct StrokeArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Color *x4; struct StrokePatternArchive *x5; struct SmartStrokeArchive *x6; struct FrameArchive *x7; struct PatternedStrokeArchive *x8; float x9; int x10; int x11; float x12; } *)a0 archiver:(id)a1;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;

@end
