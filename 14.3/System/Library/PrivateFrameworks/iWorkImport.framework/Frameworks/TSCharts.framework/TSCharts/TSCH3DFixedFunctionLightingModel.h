@interface TSCH3DFixedFunctionLightingModel : TSCH3DPhongLikeLightingModel

+ (Class)effectClass;
+ (id)instanceWithArchive:(const struct Chart3DLightingModelArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Chart3DPhongLightingModelArchive *x4; struct Chart3DFixedFunctionLightingModelArchive *x5; struct Chart3DEnvironmentPackageArchive *x6; } *)a0 unarchiver:(id)a1;
+ (Class)materialEffectClass;

- (id)initWithArchive:(const struct Chart3DLightingModelArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Chart3DPhongLightingModelArchive *x4; struct Chart3DFixedFunctionLightingModelArchive *x5; struct Chart3DEnvironmentPackageArchive *x6; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct Chart3DLightingModelArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Chart3DPhongLightingModelArchive *x4; struct Chart3DFixedFunctionLightingModelArchive *x5; struct Chart3DEnvironmentPackageArchive *x6; } *)a0 archiver:(id)a1;

@end
