@class TSKSelectionPath;

@interface TNSheetUIState : NSObject <NSCopying>

@property (class, readonly, nonatomic) long long currentDeviceIdiom;

@property (nonatomic) float viewScale;
@property (nonatomic) float previousViewScale;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } scrollPosition;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previousVisibleRect;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } previousScrollPosition;
@property (nonatomic) BOOL hasVisibleRect;
@property (nonatomic) BOOL hasPreviousVisibleRect;
@property (nonatomic) long long archivedDeviceIdiom;
@property (retain, nonatomic) TSKSelectionPath *selectionPath;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithArchive:(const struct SheetUIStateArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Point *x4; struct Point *x5; struct Size *x6; struct Size *x7; struct SelectionPathArchive *x8; struct Reference *x9; float x10; float x11; BOOL x12; BOOL x13; BOOL x14; unsigned int x15; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct SheetUIStateArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Point *x4; struct Point *x5; struct Size *x6; struct Size *x7; struct SelectionPathArchive *x8; struct Reference *x9; float x10; float x11; BOOL x12; BOOL x13; BOOL x14; unsigned int x15; } *)a0 archiver:(id)a1 context:(id)a2;
- (void)clearVisibleRect;
- (void)clearPreviousVisibleRect;
- (void)saveToArchive:(struct SheetUIStateArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Point *x4; struct Point *x5; struct Size *x6; struct Size *x7; struct SelectionPathArchive *x8; struct Reference *x9; float x10; float x11; BOOL x12; BOOL x13; BOOL x14; unsigned int x15; } *)a0 archiver:(id)a1 context:(id)a2 targetVersion:(unsigned long long)a3;
- (id)p_persistableSelectionPathFromSelectionPath:(id)a0;
- (void)updateForCurrentDeviceIdiomIfNecessaryWithDefaultViewScale:(float)a0;

@end
