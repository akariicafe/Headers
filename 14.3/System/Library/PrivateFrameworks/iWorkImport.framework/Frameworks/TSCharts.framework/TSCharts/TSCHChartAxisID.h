@interface TSCHChartAxisID : NSObject <NSCopying>

@property (readonly) int type;
@property (readonly) unsigned long long ordinal;

+ (id)axisIDWithType:(int)a0 ordinal:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArchive:(const struct ChartAxisIDArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; int x4; unsigned int x5; } *)a0;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)saveToArchive:(struct ChartAxisIDArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; int x4; unsigned int x5; } *)a0;
- (BOOL)intersectsAxisID:(id)a0;
- (id)debuggingName;
- (id)initWithType:(int)a0 ordinal:(unsigned long long)a1;
- (id)displayNameWithOrdinal:(BOOL)a0;

@end
