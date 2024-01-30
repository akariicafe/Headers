@interface TSCH3DEnvironmentMaterial : TSCH3DTexturesMaterial

@property (nonatomic) BOOL decalMode;

+ (id)instanceWithArchive:(const struct Chart3DEnvironmentMaterialArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSCH::Chart3DBaseImageTextureTilingArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<TSCH::Chart3DImageTextureTilingArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct Chart3DTexturesMaterialArchive *x6; BOOL x7; } *)a0 unarchiver:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithArchive:(const struct Chart3DEnvironmentMaterialArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSCH::Chart3DBaseImageTextureTilingArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<TSCH::Chart3DImageTextureTilingArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct Chart3DTexturesMaterialArchive *x6; BOOL x7; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct Chart3DEnvironmentMaterialArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSCH::Chart3DBaseImageTextureTilingArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<TSCH::Chart3DImageTextureTilingArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct Chart3DTexturesMaterialArchive *x6; BOOL x7; } *)a0 archiver:(id)a1;
- (id)defaultShaderVariables;

@end
