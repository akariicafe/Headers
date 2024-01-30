@class NSArray, TSCH3DVector;

@interface TSCH3DTexturesMaterial : TSCH3DMaterial {
    TSCH3DVector *_color;
    NSArray *_textures;
    NSArray *_tilings;
}

@property (nonatomic) struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } color;

+ (id)instanceWithArchive:(const struct Chart3DTexturesMaterialArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSCH::Chart3DTSPImageDataTextureArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct Chart3DVectorArchive *x5; } *)a0 unarchiver:(id)a1;

- (id)textures;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasCompleteData;
- (id)initWithArchive:(const struct Chart3DTexturesMaterialArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSCH::Chart3DTSPImageDataTextureArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct Chart3DVectorArchive *x5; } *)a0 unarchiver:(id)a1;
- (void)didInitFromSOS;
- (void)saveToArchive:(struct Chart3DTexturesMaterialArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSCH::Chart3DTSPImageDataTextureArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct Chart3DVectorArchive *x5; } *)a0 archiver:(id)a1;
- (id)variableTexture;
- (id)firstTiling;
- (unsigned long long)textureCount;
- (id)textureEnumerator;
- (id)firstTexture;
- (void)addTexture:(id)a0 tiling:(id)a1;
- (id)tilings;

@end
