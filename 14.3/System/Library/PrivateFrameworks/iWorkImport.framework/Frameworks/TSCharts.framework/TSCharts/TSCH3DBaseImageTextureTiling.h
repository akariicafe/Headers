@class TSCH3DVector;

@interface TSCH3DBaseImageTextureTiling : TSCH3DTextureTiling {
    TSCH3DVector *_scale;
}

@property (nonatomic) struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } scale;
@property (nonatomic) float rotation;

+ (id)instanceWithArchive:(const struct Chart3DBaseImageTextureTilingArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Chart3DVectorArchive *x4; float x5; } *)a0 unarchiver:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithArchive:(const struct Chart3DBaseImageTextureTilingArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Chart3DVectorArchive *x4; float x5; } *)a0 unarchiver:(id)a1;
- (void)didInitFromSOS;
- (void)saveToArchive:(struct Chart3DBaseImageTextureTilingArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Chart3DVectorArchive *x4; float x5; } *)a0 archiver:(id)a1;
- (void)restoreDefault;

@end
