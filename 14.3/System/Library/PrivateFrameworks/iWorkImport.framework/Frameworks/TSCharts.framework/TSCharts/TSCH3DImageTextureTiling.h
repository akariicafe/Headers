@interface TSCH3DImageTextureTiling : TSCH3DBaseImageTextureTiling

@property (nonatomic) int mode;
@property (nonatomic) int wrap;
@property (nonatomic) int face;
@property (nonatomic) int xposition;
@property (nonatomic) int yposition;
@property (nonatomic) int scontinuity;
@property (nonatomic) int tcontinuity;
@property (nonatomic) BOOL reveal;

+ (id)instanceWithArchive:(const struct Chart3DImageTextureTilingArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Chart3DBaseImageTextureTilingArchive *x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; BOOL x12; } *)a0 unarchiver:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithArchive:(const struct Chart3DImageTextureTilingArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Chart3DBaseImageTextureTilingArchive *x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; BOOL x12; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct Chart3DImageTextureTilingArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Chart3DBaseImageTextureTilingArchive *x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; BOOL x12; } *)a0 archiver:(id)a1;
- (void)restoreDefault;
- (void)copyFromBaseImageTextureTiling:(id)a0;

@end
