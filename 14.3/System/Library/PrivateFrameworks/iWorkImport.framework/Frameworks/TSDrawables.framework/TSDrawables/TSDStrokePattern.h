@interface TSDStrokePattern : NSObject <NSCopying, TSDMixing> {
    double _pattern[6];
}

@property (readonly, nonatomic) long long patternType;
@property (readonly, nonatomic) double *pattern;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) double phase;
@property (readonly, nonatomic) BOOL isDash;
@property (readonly, nonatomic) BOOL isRoundDash;

+ (id)strokePatternWithPattern:(const double *)a0 count:(unsigned long long)a1 phase:(double)a2;
+ (id)emptyPattern;
+ (id)solidPattern;
+ (id)shortDashPattern;
+ (id)mediumDashPattern;
+ (id)longDashPattern;
+ (id)roundDashPattern;
+ (id)roundDashPatternWithSpacing:(double)a0;
+ (id)dashPatternWithSpacing:(double)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (id)initWithPatternType:(long long)a0 pattern:(const double *)a1 count:(unsigned long long)a2 phase:(double)a3;
- (id)initWithPattern:(const double *)a0 count:(unsigned long long)a1 phase:(double)a2;
- (id)p_patternString;
- (id)p_typeString;
- (void)i_applyToContext:(struct CGContext { } *)a0 lineWidth:(double)a1 capStyle:(unsigned long long *)a2;
- (void)applyToContext:(struct CGContext { } *)a0 lineWidth:(double)a1;
- (double)p_renderableLengthForUnclippedPatternWithLineWidth:(double)a0 withinAvailableLength:(double)a1;
- (id)initWithArchive:(const struct StrokePatternArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedField<float> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x4; int x5; float x6; unsigned int x7; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct StrokePatternArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedField<float> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x4; int x5; float x6; unsigned int x7; } *)a0 archiver:(id)a1;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;

@end
