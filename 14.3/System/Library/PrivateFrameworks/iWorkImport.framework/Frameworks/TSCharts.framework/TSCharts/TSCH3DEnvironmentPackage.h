@class NSArray;

@interface TSCH3DEnvironmentPackage : NSObject <NSCopying> {
    NSArray *_materials;
}

+ (id)instanceWithArchive:(const struct Chart3DEnvironmentPackageArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSCH::Chart3DEnvironmentMaterialArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; } *)a0 unarchiver:(id)a1;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasCompleteData;
- (unsigned long long)materialCount;
- (id)initWithArchive:(const struct Chart3DEnvironmentPackageArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSCH::Chart3DEnvironmentMaterialArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; } *)a0 unarchiver:(id)a1;
- (void)didInitFromSOS;
- (void)saveToArchive:(struct Chart3DEnvironmentPackageArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSCH::Chart3DEnvironmentMaterialArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; } *)a0 archiver:(id)a1;
- (void)affect:(id)a0 states:(id)a1 scene:(id)a2 texturePool:(id)a3;
- (id)materialEnumerator;
- (void)addMaterial:(id)a0;

@end
