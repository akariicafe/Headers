@class TSCH3DEmissiveMaterial, TSCH3DModulateMaterial, TSCH3DDiffuseMaterial, TSCH3DSpecularMaterial, TSCH3DShininessMaterial;

@interface TSCH3DPhongMaterialPackage : TSCH3DMaterialPackage

@property (retain, nonatomic) TSCH3DEmissiveMaterial *emissive;
@property (retain, nonatomic) TSCH3DDiffuseMaterial *diffuse;
@property (retain, nonatomic) TSCH3DModulateMaterial *modulate;
@property (retain, nonatomic) TSCH3DSpecularMaterial *specular;
@property (retain, nonatomic) TSCH3DShininessMaterial *shininess;

+ (id)package;
+ (id)instanceWithArchive:(const struct Chart3DPhongMaterialPackageArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Chart3DEmissiveMaterialArchive *x4; struct Chart3DDiffuseMaterialArchive *x5; struct Chart3DModulateMaterialArchive *x6; struct Chart3DSpecularMaterialArchive *x7; struct Chart3DShininessMaterialArchive *x8; } *)a0 unarchiver:(id)a1;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasCompleteData;
- (id)initWithArchive:(const struct Chart3DPhongMaterialPackageArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Chart3DEmissiveMaterialArchive *x4; struct Chart3DDiffuseMaterialArchive *x5; struct Chart3DModulateMaterialArchive *x6; struct Chart3DSpecularMaterialArchive *x7; struct Chart3DShininessMaterialArchive *x8; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct Chart3DPhongMaterialPackageArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Chart3DEmissiveMaterialArchive *x4; struct Chart3DDiffuseMaterialArchive *x5; struct Chart3DModulateMaterialArchive *x6; struct Chart3DSpecularMaterialArchive *x7; struct Chart3DShininessMaterialArchive *x8; } *)a0 archiver:(id)a1;
- (id)materialEnumerator;

@end
