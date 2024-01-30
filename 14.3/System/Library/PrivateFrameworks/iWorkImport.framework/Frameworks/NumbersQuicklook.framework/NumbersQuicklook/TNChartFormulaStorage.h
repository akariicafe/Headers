@class NSMutableDictionary;

@interface TNChartFormulaStorage : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary *_storage;
    int _direction;
    unsigned long long _cachedNumberOfGroups;
    BOOL _cachedNumberOfGroupsValid;
}

@property (readonly, nonatomic) int direction;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long numberOfDataFormulas;
@property (readonly, nonatomic) unsigned long long seriesLabelFormulaType;
@property (readonly, nonatomic) unsigned long long categoryLabelFormulaType;

+ (struct vector<TNChartFormulaType, std::__1::allocator<TNChartFormulaType> > { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<TNChartFormulaType *, std::__1::allocator<TNChartFormulaType> > { unsigned long long *x0; } x2; })persistentFormulaTypes;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithDirection:(int)a0;
- (id)initWithArchive:(const struct ChartMediatorFormulaStorage { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSCE::FormulaArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<TSCE::FormulaArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct RepeatedPtrField<TSCE::FormulaArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x6; struct RepeatedPtrField<TSCE::FormulaArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x7; struct RepeatedPtrField<TSCE::FormulaArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x8; struct RepeatedPtrField<TSCE::FormulaArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x9; struct RepeatedPtrField<TSCE::FormulaArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x10; int x11; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct ChartMediatorFormulaStorage { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSCE::FormulaArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<TSCE::FormulaArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct RepeatedPtrField<TSCE::FormulaArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x6; struct RepeatedPtrField<TSCE::FormulaArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x7; struct RepeatedPtrField<TSCE::FormulaArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x8; struct RepeatedPtrField<TSCE::FormulaArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x9; struct RepeatedPtrField<TSCE::FormulaArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x10; int x11; } *)a0 archiver:(id)a1;
- (BOOL)labelFormulasAreAllStaticWithCalcEngine:(id)a0 inEntity:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a1;
- (BOOL)formulasOfType:(unsigned long long)a0 areAllStaticWithCalcEngine:(id)a1 inEntity:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a2;
- (id)formulaListForType:(unsigned long long)a0;
- (id)initWithChartFormulaStorage:(id)a0;
- (id)formulaTypeEnumerator;
- (void)clearCachesForCalculationEngine:(id)a0;
- (id)areaFormulaWithCalcEngine:(id)a0 inOwner:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a1;
- (BOOL)dataFormulaAreRegularForSeriesInsertionWithCalcEngine:(id)a0 inOwner:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a1;
- (unsigned long long)numberOfGroupsWithCalcEngine:(id)a0 inEntity:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a1;
- (unsigned long long)numberOfTotalCategoryLabelsWithCalcEngine:(id)a0 inEntity:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a1;
- (id)referencedEntitiesWithCalcEngine:(id)a0;
- (unsigned long long)p_calculateNumberOfGroupsWithCalcEngine:(id)a0 inEntity:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a1;
- (BOOL)isEqualToFormulaStorage:(id)a0;
- (id)copyByRewriting:(BOOL)a0 withCalcEngine:(id)a1 andHostUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a2;
- (id)formulaForID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (unsigned long long)numberOfSeries;

@end
