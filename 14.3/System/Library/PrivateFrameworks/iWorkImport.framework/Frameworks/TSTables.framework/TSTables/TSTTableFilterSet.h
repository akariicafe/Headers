@class NSArray;

@interface TSTTableFilterSet : TSPObject <TSPCopying> {
    int _type;
    NSArray *_rules;
    struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *__value_; } __end_cap_; } _filterOffsets;
}

@property (readonly, nonatomic) unsigned long long filterCount;
@property (readonly, nonatomic) unsigned long long ruleCount;
@property (readonly, nonatomic) BOOL canAddRules;
@property (readonly, nonatomic) unsigned long long newFilterIndex;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) int filterSetType;
@property (nonatomic) BOOL needsFormulaRewriteForImport;

- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (unsigned long long)hash;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (void)loadFromArchive:(const struct FilterSetArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TST::FilterRuleArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x5; struct RepeatedField<bool> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x6; int x7; BOOL x8; BOOL x9; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct FilterSetArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TST::FilterRuleArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x5; struct RepeatedField<bool> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x6; int x7; BOOL x8; BOOL x9; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)initWithFilterRules:(id)a0 type:(int)a1 context:(id)a2;
- (BOOL)containsFilterRulesInUIDForm;
- (id)copyByRewritingFilterRulesToGeometricFormWithContext:(id)a0 withTableInfo:(id)a1;
- (BOOL)allowsRowInsertion;
- (id)ruleAtAbsoluteIndex:(unsigned long long)a0;
- (BOOL)rowIsShown:(unsigned int)a0 withHiddenStateExtent:(id)a1 withCalcEngine:(id)a2;
- (id)copyByRewritingFilterRulesToUidFormWithContext:(id)a0 withTableInfo:(id)a1;
- (void)enumerateFiltersInTable:(id)a0 usingBlock:(id /* block */)a1;
- (id)removeRulesWithAbsoluteIndices:(id)a0;
- (BOOL)p_thresholdComparisonMatchesFilter:(long long)a0 withPredicateType:(unsigned char)a1;
- (unsigned long long)numberOfRulesInFilter:(unsigned long long)a0;
- (void)p_addRules:(id)a0 atRuleIndices:(id)a1 inFilter:(unsigned long long)a2 isNew:(BOOL)a3;
- (id)filterAtIndex:(unsigned long long)a0 inTable:(id)a1;
- (id)baseColumnIndicesForRulesInTable:(id)a0;
- (id)ruleInFilter:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)removeRulesWithIndices:(id)a0 inFilter:(unsigned long long)a1;
- (void)removeRulesForBaseColumnIndices:(id)a0 withTableInfo:(id)a1;
- (void)addRules:(id)a0 inFilter:(unsigned long long)a1;
- (void)replaceRule:(id)a0 atRuleIndex:(unsigned long long)a1 inFilter:(unsigned long long)a2;
- (void)enumerateFilterIndicesInTable:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateFiltersForColumn:(struct TSUModelColumnIndex { unsigned short x0; })a0 withTable:(id)a1 usingBlock:(id /* block */)a2;
- (void)enumerateRulesInFilterIndex:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)filterIndicesForBaseColumn:(struct TSUModelColumnIndex { unsigned short x0; })a0 inTable:(id)a1;
- (unsigned long long)firstFilterIndexForBaseColumn:(struct TSUModelColumnIndex { unsigned short x0; })a0 inTable:(id)a1;
- (unsigned long long)ruleIndexInFilter:(unsigned long long)a0 matchingCell:(id)a1;
- (id)absoluteRuleIndicesForColumn:(struct TSUModelColumnIndex { unsigned short x0; })a0 inTable:(id)a1;
- (id)viewColumnIndicesForRulesInTable:(id)a0;

@end
