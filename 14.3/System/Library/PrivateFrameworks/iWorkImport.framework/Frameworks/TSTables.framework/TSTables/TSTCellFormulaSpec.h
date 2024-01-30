@class NSString, TSCEFormulaObject, TSTStockDetails, TSULocale;

@interface TSTCellFormulaSpec : TSTCellSpec <TSCEFormulaReturning> {
    TSULocale *_locale;
    unsigned int _interactionType;
}

@property (readonly, nonatomic) TSCEFormulaObject *formulaObject;
@property (readonly, nonatomic) unsigned char categoryAggregateType;
@property (readonly, nonatomic) TSTStockDetails *stockDetails;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithArchive:(const struct CellSpecArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct FormulaArchive *x4; struct Reference *x5; double x6; double x7; double x8; unsigned int x9; BOOL x10; BOOL x11; } *)a0 unarchiver:(id)a1;

- (void).cxx_destruct;
- (BOOL)isEquivalent:(id)a0;
- (unsigned int)interactionType;
- (BOOL)isEqual:(id)a0;
- (id)initWithArchive:(const struct CellSpecArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct FormulaArchive *x4; struct Reference *x5; double x6; double x7; double x8; unsigned int x9; BOOL x10; BOOL x11; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct CellSpecArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct FormulaArchive *x4; struct Reference *x5; double x6; double x7; double x8; unsigned int x9; BOOL x10; BOOL x11; } *)a0 archiver:(id)a1;
- (id)asFormulaSpec;
- (void)p_computeinteractionType:(id)a0;
- (id)initWithFormulaObject:(id)a0 locale:(id)a1;
- (BOOL)p_mightBeEqual:(id)a0;
- (id)initWithFormulaObject:(id)a0 fromTableModel:(id)a1 fromCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a2;
- (id)cellSpecReplacingFormulaObject:(id)a0 locale:(id)a1;
- (BOOL)hasTSCEFormula;

@end
