@class TSTWidthHeightCache;

@interface TSTArchivedMasterLayoutBundle : NSObject

@property (retain, nonatomic) TSTWidthHeightCache *widthHeightCache;

+ (id)widthHeightCacheFromBundle:(id)a0 withNumberOfRows:(unsigned int)a1 andNumberOfColumns:(unsigned int)a2;

- (void).cxx_destruct;
- (id)initWithArchive:(const struct MasterLayoutArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct WidthHeightCache *x4; } *)a0 unarchiver:(id)a1;
- (id)initWithMasterLayout:(id)a0;
- (void)saveToArchive:(struct MasterLayoutArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct WidthHeightCache *x4; } *)a0 archiver:(id)a1;

@end
