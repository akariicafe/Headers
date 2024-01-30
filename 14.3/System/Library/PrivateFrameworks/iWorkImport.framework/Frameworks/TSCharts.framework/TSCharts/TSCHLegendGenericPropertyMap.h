@interface TSCHLegendGenericPropertyMap : TSSPropertyMap

+ (id)properties;
+ (id)imageFillProperties;
+ (void)savePropertyMap:(id)a0 toArchive:(struct LegendGenericPropertyMapArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct FillArchive *x4; struct ShadowArchive *x5; struct StrokeArchive *x6; int x7; float x8; } *)a1 archiver:(id)a2;

- (id)initWithArchive:(const struct LegendGenericPropertyMapArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct FillArchive *x4; struct ShadowArchive *x5; struct StrokeArchive *x6; int x7; float x8; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct LegendGenericPropertyMapArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct FillArchive *x4; struct ShadowArchive *x5; struct StrokeArchive *x6; int x7; float x8; } *)a0 archiver:(id)a1;

@end
