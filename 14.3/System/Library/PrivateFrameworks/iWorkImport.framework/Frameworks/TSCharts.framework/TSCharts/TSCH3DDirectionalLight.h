@class TSCH3DVector;

@interface TSCH3DDirectionalLight : TSCH3DLight <TSCH3DLightDirectional> {
    TSCH3DVector *_direction;
}

@property (nonatomic) struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } direction;

+ (Class)effectClass;
+ (id)instanceWithArchive:(const struct Chart3DLightArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct Chart3DVectorArchive *x5; struct Chart3DVectorArchive *x6; struct Chart3DVectorArchive *x7; struct Chart3DVectorArchive *x8; struct Chart3DPointLightArchive *x9; struct Chart3DDirectionalLightArchive *x10; struct Chart3DSpotLightArchive *x11; float x12; unsigned int x13; BOOL x14; } *)a0 unarchiver:(id)a1;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)initWithArchive:(const struct Chart3DLightArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct Chart3DVectorArchive *x5; struct Chart3DVectorArchive *x6; struct Chart3DVectorArchive *x7; struct Chart3DVectorArchive *x8; struct Chart3DPointLightArchive *x9; struct Chart3DDirectionalLightArchive *x10; struct Chart3DSpotLightArchive *x11; float x12; unsigned int x13; BOOL x14; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct Chart3DLightArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct Chart3DVectorArchive *x5; struct Chart3DVectorArchive *x6; struct Chart3DVectorArchive *x7; struct Chart3DVectorArchive *x8; struct Chart3DPointLightArchive *x9; struct Chart3DDirectionalLightArchive *x10; struct Chart3DSpotLightArchive *x11; float x12; unsigned int x13; BOOL x14; } *)a0 archiver:(id)a1;

@end
