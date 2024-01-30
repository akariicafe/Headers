@class NSArray, TSTPopUpMenuModel;

@interface TSTCellChooserControlSpec : TSTCellSpec {
    NSArray *_displayChoices;
}

@property (retain, nonatomic) TSTPopUpMenuModel *popupModel;
@property (readonly, nonatomic) NSArray *displayChoicesForInspector;
@property (readonly, nonatomic) BOOL startWithFirstItem;

+ (id)instanceWithArchive:(const struct CellSpecArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct FormulaArchive *x4; struct Reference *x5; double x6; double x7; double x8; unsigned int x9; BOOL x10; BOOL x11; } *)a0 unarchiver:(id)a1;
+ (id)popupCellSpec:(id)a0 startWithFirstItem:(BOOL)a1;
+ (id)cellSpecFromTSKFormat:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (unsigned int)interactionType;
- (BOOL)isEqual:(id)a0;
- (id)valueForIndex:(unsigned long long)a0;
- (unsigned long long)indexForValue:(id)a0;
- (id)initWithArchive:(const struct CellSpecArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct FormulaArchive *x4; struct Reference *x5; double x6; double x7; double x8; unsigned int x9; BOOL x10; BOOL x11; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct CellSpecArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct FormulaArchive *x4; struct Reference *x5; double x6; double x7; double x8; unsigned int x9; BOOL x10; BOOL x11; } *)a0 archiver:(id)a1;
- (id)asChooserControlSpec;
- (id)displayStringAtIndex:(unsigned long long)a0;
- (BOOL)validateFormatAndValue:(id)a0;
- (id)initWithPopupModel:(id)a0 startWithFirstItem:(BOOL)a1;
- (id)tskMultipleChoiceListFormat;

@end
