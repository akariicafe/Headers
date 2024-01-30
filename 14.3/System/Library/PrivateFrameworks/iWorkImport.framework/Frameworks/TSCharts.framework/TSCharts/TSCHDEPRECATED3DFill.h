@class TSDFill, TSCH3DLightingModel, TSCH3DFillSetIdentifier;

@interface TSCHDEPRECATED3DFill : NSObject <TSSPropertyValueArchiving> {
    TSDFill *mFill;
    TSCH3DLightingModel *mLightingModel;
    TSCH3DFillSetIdentifier *mIdentifier;
}

+ (id)instanceWithArchive:(const struct DEPRECATEDChart3DFillArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct FillArchive *x5; struct Chart3DLightingModelArchive *x6; int x7; unsigned int x8; } *)a0 unarchiver:(id)a1;

- (void)dealloc;
- (id)initWithArchive:(const struct DEPRECATEDChart3DFillArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct FillArchive *x5; struct Chart3DLightingModelArchive *x6; int x7; unsigned int x8; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct DEPRECATEDChart3DFillArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct FillArchive *x5; struct Chart3DLightingModelArchive *x6; int x7; unsigned int x8; } *)a0 archiver:(id)a1;
- (id)convertToTSDFill;

@end
