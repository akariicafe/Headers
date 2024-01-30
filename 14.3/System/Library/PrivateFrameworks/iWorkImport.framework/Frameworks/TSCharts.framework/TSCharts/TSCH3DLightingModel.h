@class TSCH3DMaterialPackage, TSCH3DLightingPackage, TSCH3DEnvironmentPackage;

@interface TSCH3DLightingModel : NSObject <NSCopying>

@property (retain, nonatomic) TSCH3DMaterialPackage *materials;
@property (retain, nonatomic) TSCH3DLightingPackage *lightings;
@property (retain, nonatomic) TSCH3DEnvironmentPackage *environment;

+ (id)instanceWithArchive:(const struct Chart3DLightingModelArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Chart3DPhongLightingModelArchive *x4; struct Chart3DFixedFunctionLightingModelArchive *x5; struct Chart3DEnvironmentPackageArchive *x6; } *)a0 unarchiver:(id)a1;
+ (id)lightingModel;

- (id)clone;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasCompleteData;
- (id)initWithArchive:(const struct Chart3DLightingModelArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Chart3DPhongLightingModelArchive *x4; struct Chart3DFixedFunctionLightingModelArchive *x5; struct Chart3DEnvironmentPackageArchive *x6; } *)a0 unarchiver:(id)a1;
- (void)didInitFromSOS;
- (void)saveToArchive:(struct Chart3DLightingModelArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Chart3DPhongLightingModelArchive *x4; struct Chart3DFixedFunctionLightingModelArchive *x5; struct Chart3DEnvironmentPackageArchive *x6; } *)a0 archiver:(id)a1;
- (void)affect:(id)a0 states:(id)a1 scene:(id)a2 texturePool:(id)a3;
- (id)diffuseTextureTiling;
- (id)lightingModelWithLightings:(id)a0;
- (id)representativeMaterialLightenedByPercentage:(id)a0;

@end
