@class TSDStroke;

@interface TSTTableStrokePresetData : NSObject

@property (retain, nonatomic) TSDStroke *horizontalStroke;
@property (retain, nonatomic) TSDStroke *verticalStroke;
@property (retain, nonatomic) TSDStroke *exteriorStroke;
@property (nonatomic) unsigned int mask;

- (id)init;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithArchive:(const struct StrokePresetDataArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct StrokeArchive *x4; struct StrokeArchive *x5; struct StrokeArchive *x6; int x7; } *)a0 unarchiver:(id)a1;
- (id)initWithMask:(unsigned int)a0 horizontalStroke:(id)a1 verticalStroke:(id)a2 exteriorStroke:(id)a3;
- (void)saveToArchive:(struct StrokePresetDataArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct StrokeArchive *x4; struct StrokeArchive *x5; struct StrokeArchive *x6; int x7; } *)a0 archiver:(id)a1;
- (id)initWithDeprecatedArchive:(const struct Deprecated_StrokePresetDataArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Deprecated_TableStrokeArchive *x4; struct Deprecated_TableStrokeArchive *x5; struct Deprecated_TableStrokeArchive *x6; int x7; } *)a0 unarchiver:(id)a1;

@end
