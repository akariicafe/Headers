@class NSNumber, TSTLayout, NSString;
@protocol TSDHint;

@interface TSTLayoutHint : NSObject <NSCopying, TSDHint>

@property (class, readonly, nonatomic) Class archivedHintClass;

@property (nonatomic) BOOL isValid;
@property (nonatomic) struct TSUCellRect { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } origin; struct { unsigned int numberOfColumns; unsigned int numberOfRows; } size; } cellRange;
@property (nonatomic) struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } cacheHintID;
@property (retain, nonatomic) NSNumber *partitioningPass;
@property (nonatomic) unsigned int partitionPosition;
@property (nonatomic) struct CGSize { double width; double height; } maximumSize;
@property (nonatomic) struct CGSize { double width; double height; } effectiveSize;
@property (nonatomic) TSTLayout *layout;
@property (nonatomic) BOOL horizontal;
@property (readonly, nonatomic) id<TSDHint> firstChildHint;
@property (readonly, nonatomic) id<TSDHint> lastChildHint;
@property (readonly, nonatomic) BOOL isFirstHint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (void)dealloc;
- (id)initWithArchive:(const struct LayoutHintArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct CellRange *x4; struct CellID *x5; struct Size *x6; struct Size *x7; BOOL x8; BOOL x9; unsigned int x10; unsigned int x11; } *)a0;
- (void)saveToArchive:(struct LayoutHintArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct CellRange *x4; struct CellID *x5; struct Size *x6; struct Size *x7; BOOL x8; BOOL x9; unsigned int x10; unsigned int x11; } *)a0;
- (void)invalidate;
- (id)copyForArchiving;
- (id)initWithRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0 hintId:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1 partitionPosition:(unsigned int)a2 maximumSize:(struct CGSize { double x0; double x1; })a3 effectiveSize:(struct CGSize { double x0; double x1; })a4 layout:(id)a5 validity:(BOOL)a6 horizontal:(BOOL)a7;
- (BOOL)overlapsWithSelectionPath:(id)a0;

@end
