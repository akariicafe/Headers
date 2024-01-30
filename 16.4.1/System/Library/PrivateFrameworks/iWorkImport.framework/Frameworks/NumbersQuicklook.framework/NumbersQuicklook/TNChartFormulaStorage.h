@class NSMutableDictionary;

@interface TNChartFormulaStorage : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary *_storage;
    int _direction;
    unsigned long long _cachedNumberOfGroups;
    BOOL _cachedNumberOfGroupsValid;
}

@property (readonly, nonatomic) int direction;
@property (readonly, nonatomic) int scheme;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long numberOfDataFormulas;
@property (readonly, nonatomic) unsigned long long seriesLabelFormulaType;
@property (readonly, nonatomic) unsigned long long categoryLabelFormulaType;

+ (int)defaultScheme;
+ (unsigned long long)maxGroupLabelFormulas;
+ (unsigned long long)maxLabeledGroupsForScheme:(int)a0;
+ (struct vector<TNChartFormulaType, std::allocator<TNChartFormulaType>> { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<TNChartFormulaType *, std::allocator<TNChartFormulaType>> { unsigned long long *x0; } x2; })persistentFormulaTypes;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDirection:(int)a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)areaFormulaWithCalcEngine:(id)a0 inOwner:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1;
- (void)clearCachesForCalculationEngine:(id)a0;
- (id)copyByRewriting:(BOOL)a0 withCalcEngine:(id)a1 andHostUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)dataFormulaAreRegularForSeriesInsertionWithCalcEngine:(id)a0 inOwner:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1;
- (id)descriptorForSummaryChart:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0 withCalcEngine:(id)a1;
- (id)formulaForID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (id)formulaListForType:(unsigned long long)a0;
- (id)formulaTypeEnumerator;
- (BOOL)formulasOfType:(unsigned long long)a0 areAllStaticWithCalcEngine:(id)a1 inEntity:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a2;
- (id)initWithChartFormulaStorage:(id)a0;
- (id)initWithDirection:(int)a0 scheme:(int)a1;
- (BOOL)isEqualToFormulaStorage:(id)a0;
- (BOOL)labelFormulasAreAllStaticWithCalcEngine:(id)a0 inEntity:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)numberOfGroupsWithCalcEngine:(id)a0 inEntity:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1 shouldSkipHiddenData:(BOOL)a2;
- (unsigned long long)numberOfLabelsForType:(unsigned long long)a0 withCalcEngine:(id)a1 inEntity:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a2 shouldSkipHiddenData:(BOOL)a3;
- (unsigned long long)numberOfSeriesWithCalcEngine:(id)a0 inEntity:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1 shouldSkipHiddenData:(BOOL)a2;
- (unsigned long long)numberOfTotalCategoryLabelsWithCalcEngine:(id)a0 inEntity:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1 shouldSkipHiddenData:(BOOL)a2;
- (unsigned long long)p_calculateNumberOfGroupsWithCalcEngine:(id)a0 inEntity:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1 shouldSkipHiddenData:(BOOL)a2;
- (id)referencedEntitiesWithCalcEngine:(id)a0;

@end
