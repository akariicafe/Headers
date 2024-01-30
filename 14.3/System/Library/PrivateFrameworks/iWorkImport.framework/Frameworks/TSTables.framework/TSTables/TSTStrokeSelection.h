@interface TSTStrokeSelection : TSKSelection

@property (readonly, nonatomic) unsigned int mask;

+ (Class)archivedSelectionClass;
+ (id)strokeSelectionWithMask:(unsigned int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArchive:(const struct StrokeSelectionArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; int x4; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct StrokeSelectionArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; int x4; } *)a0 archiver:(id)a1;
- (id)initWithStrokeVisibilityMask:(unsigned int)a0;

@end
