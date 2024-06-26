@class TSTTableFilterSet, NSString, TSTTableInfo, TSTHiddenStatesOwner, TSCECalculationEngine, NSMutableDictionary, NSMutableArray, TSCEMutableUIDSet, TSTTableModel, NSMutableIndexSet;

@interface TSTHiddenStateExtent : NSObject <TSCEFormulaOwning, TSTGroupByChangeProtocol, TSTCellWillChangeProtocol> {
    TSCECalculationEngine *_calcEngine;
    struct unordered_map<TSKUIDStruct, unsigned char, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, unsigned char>>> { struct __hash_table<std::__hash_value_type<TSKUIDStruct, unsigned char>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned char>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned char>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, unsigned char>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned char>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned char>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> { float __value_; } __p3_; } __table_; } _baseHiddenByUid;
    struct unordered_map<TSKUIDStruct, unsigned char, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, unsigned char>>> { struct __hash_table<std::__hash_value_type<TSKUIDStruct, unsigned char>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned char>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned char>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, unsigned char>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned char>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned char>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned char>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> { float __value_; } __p3_; } __table_; } _summaryHiddenByUid;
    TSTTableFilterSet *_filterSet;
    NSMutableIndexSet *_baseUserHiddenIndexes;
    NSMutableIndexSet *_baseFilteredIndexes;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _viewIndexesMutex;
    NSMutableIndexSet *_userHiddenIndexes;
    NSMutableIndexSet *_filteredIndexes;
    NSMutableIndexSet *_combinedHiddenIndexes;
    NSMutableIndexSet *_collapsedIndexes;
    NSMutableIndexSet *_summaryFilteredIndexes;
    NSMutableIndexSet *_summaryPivotHiddenIndexes;
    NSMutableDictionary *_uniqueValuesByColumnUid;
    struct unordered_set<TSKUIDStruct, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<TSKUIDStruct>> { struct __hash_table<TSKUIDStruct, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<TSKUIDStruct>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *>, std::allocator<std::__hash_node<TSKUIDStruct, void *>>> { struct __hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::hash<TSKUIDStruct>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::equal_to<TSKUIDStruct>> { float __value_; } __p3_; } __table_; } _columnUidsWithUniqueIndexes;
    TSTTableFilterSet *_rewrittenFilterSet;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pendingComputedLock;
    struct TSUIndexSet { unsigned char _isEmpty : 1; unsigned char _hasSingleRange : 1; struct TSUIndexRange { long long _begin; long long _end; } _singleRange; struct *_multipleRanges; } _pendingColumnsOrRowsShown;
    struct TSUIndexSet { unsigned char _isEmpty : 1; unsigned char _hasSingleRange : 1; struct TSUIndexRange { long long _begin; long long _end; } _singleRange; struct *_multipleRanges; } _pendingColumnsOrRowsHidden;
    struct TSUIndexSet { unsigned char _isEmpty : 1; unsigned char _hasSingleRange : 1; struct TSUIndexRange { long long _begin; long long _end; } _singleRange; struct *_multipleRanges; } _pendingViewColumnsOrRowsShown;
    struct TSUIndexSet { unsigned char _isEmpty : 1; unsigned char _hasSingleRange : 1; struct TSUIndexRange { long long _begin; long long _end; } _singleRange; struct *_multipleRanges; } _pendingViewColumnsOrRowsHidden;
    struct vector<TSUCellRect, std::allocator<TSUCellRect>> { struct TSUCellRect *__begin_; struct TSUCellRect *__end_; struct __compressed_pair<TSUCellRect *, std::allocator<TSUCellRect>> { struct TSUCellRect *__value_; } __end_cap_; } _cellRangesToInvalidate;
    BOOL _invalidateViewGeometry;
    BOOL _invalidateCollapsed;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _uniqueValuesLock;
    BOOL _needsSummaryUidUpgrade;
}

@property (readonly, nonatomic) TSTTableInfo *tableInfo;
@property (weak, nonatomic) TSTHiddenStatesOwner *hiddenStatesOwner;
@property (readonly, nonatomic) TSTTableModel *tableModel;
@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } hiddenStateExtentUid;
@property (readonly, nonatomic) BOOL forRows;
@property (readonly, nonatomic) BOOL anyHidden;
@property (readonly, nonatomic) BOOL anyUserHidden;
@property (readonly, nonatomic) BOOL anyCollapsed;
@property (readonly, nonatomic) TSCEMutableUIDSet *collapsedGroupUids;
@property (readonly, nonatomic) NSMutableArray *thresholdCellValues;
@property (readonly, nonatomic) unsigned int numberOfHidden;
@property (readonly, nonatomic) unsigned int numberOfUserHidden;
@property (nonatomic) BOOL needsToUpdateFilterSetForImport;
@property (retain, nonatomic) TSTTableFilterSet *filterSet;
@property (nonatomic) BOOL needsFilterFormulaRewriteForImport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)firstIndexNotInIndexSet:(id)a0 beginRange:(unsigned long long)a1 pastEndRange:(unsigned long long)a2;
+ (unsigned long long)firstIndexNotInIndexSet:(id)a0 orIndexSet:(id)a1 beginRange:(unsigned long long)a2 pastEndRange:(unsigned long long)a3;
+ (unsigned long long)lastIndexNotInIndexSet:(id)a0 beginRange:(unsigned long long)a1 pastEndRange:(unsigned long long)a2;
+ (unsigned long long)lastIndexNotInIndexSet:(id)a0 orIndexSet:(id)a1 beginRange:(unsigned long long)a2 pastEndRange:(unsigned long long)a3;
+ (id)mutableIndexSetByIntersecting:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (void)swapIndexesWithIndexSet:(id)a0 index:(unsigned long long)a1 withIndex:(unsigned long long)a2;

- (id).cxx_construct;
- (void)dealloc;
- (void).cxx_destruct;
- (long long)evaluationMode;
- (void)encodeToArchive:(void *)a0 archiver:(id)a1;
- (struct TSCERecalculationState { unsigned char x0; })evaluateFormulaAt:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0 withCalcEngine:(id)a1 recalcOptions:(struct TSCERecalculationState { unsigned char x0; })a2;
- (void)invalidateForCalcEngine:(id)a0;
- (id)linkedResolver;
- (unsigned short)ownerKind;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })ownerUID;
- (void)writeResultsForCalcEngine:(id)a0;
- (id)p_hiddenIndexes;
- (void)didCreateGroup:(id)a0;
- (void)didRemoveGroup:(id)a0;
- (id)tableTranslator;
- (BOOL)anyHiddenInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)anyHiddenInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forAction:(unsigned char)a1;
- (id)applyCollapseExpandState:(id)a0 outUndoState:(id *)a1;
- (struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })cellReferenceForIndex:(struct TSUModelColumnOrRowIndex { unsigned int x0; })a0;
- (void)clearAllCachedRowIndexes;
- (void)clearAllFiltered;
- (void)clearAllPivotHidden;
- (void)clearInvalidIndexes;
- (id)collapseSummaryGroupUIDs:(id)a0;
- (id)copyCollapsedStateToUpdatedGroupUids:(id)a0 dimension:(long long)a1;
- (void)deleteBaseRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withUids:(const void *)a1;
- (void)didAddRowUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0 toGroup:(id)a1;
- (void)didChangeGroupByStructure;
- (void)didRemoveRowUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0 fromGroup:(id)a1;
- (void)dirtyFilterState;
- (void)dirtyFilterStateForFooters;
- (void)dirtyFilterStateForHeaders;
- (void)dirtyFilterStateForRowRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)duplicateFilterSet;
- (id)duplicateFilterSetInUidFormWithTable:(id)a0;
- (void)enableFilterSet:(BOOL)a0;
- (void)endOfGroupingChangesBatch;
- (id)expandSummaryGroupUIDs:(id)a0;
- (void)filterSetUpdated;
- (unsigned int)findFirstVisibleIndexInBegin:(unsigned int)a0 afterEnd:(unsigned int)a1;
- (unsigned int)findLastVisibleIndexInBegin:(unsigned int)a0 afterEnd:(unsigned int)a1;
- (BOOL)hasActiveFilters;
- (BOOL)hasFilterRulesWithTable:(id)a0 inBaseColumns:(id)a1;
- (BOOL)hasHiddenAtIndex:(unsigned int)a0;
- (id)hiddenOrCollapsedIndexes;
- (BOOL)hideAtBaseIndex:(struct TSUModelColumnOrRowIndex { unsigned int x0; })a0 forAction:(unsigned char)a1;
- (BOOL)hideAtUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 forAction:(unsigned char)a1;
- (BOOL)hideAtUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 forIndex:(struct TSUModelColumnOrRowIndex { unsigned int x0; })a1 forViewIndex:(struct TSUViewColumnOrRowIndex { unsigned int x0; })a2 forAction:(unsigned char)a3;
- (BOOL)hideAtViewIndex:(struct TSUViewColumnOrRowIndex { unsigned int x0; })a0 forAction:(unsigned char)a1;
- (void)hideAtViewIndexes:(id)a0 forAction:(unsigned char)a1;
- (unsigned char)hidingActionForBaseIndex:(struct TSUModelColumnOrRowIndex { unsigned int x0; })a0;
- (unsigned char)hidingActionForUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (unsigned char)hidingActionForViewIndex:(struct TSUViewColumnOrRowIndex { unsigned int x0; })a0;
- (unsigned int)indexOfVisibleAfterAndIncludingIndex:(unsigned int)a0;
- (unsigned int)indexOfVisibleAfterIndex:(unsigned int)a0;
- (unsigned int)indexOfVisibleBeforeAndIncludingIndex:(unsigned int)a0;
- (unsigned int)indexOfVisibleBeforeIndex:(unsigned int)a0;
- (id)indexesOfCollapsedInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)indexesOfFilteredInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)indexesOfHiddenInBaseRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)indexesOfHiddenInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)indexesOfUserHiddenInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)indexesOfUserVisibleInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)indexesOfVisibleInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)indexesOfVisibleIndexesInIndexes:(id)a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1 forHiddenStatesOwner:(id)a2;
- (id)initWithHiddenStatesOwner:(id)a0 forRows:(BOOL)a1;
- (void)insertBaseRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)invalidateAllCollapsed;
- (void)invalidateViewGeometry;
- (BOOL)isGroupCollapsedAndVisible:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 dimension:(long long)a1;
- (BOOL)isGroupOrParentsCollapsed:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 dimension:(long long)a1;
- (BOOL)isGroupUIDCollapsed:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (void)loadIndexesFromTable:(id)a0;
- (void)moveBaseRangeFrom:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toIndex:(struct TSUModelColumnOrRowIndex { unsigned int x0; })a1;
- (void)moveViewRangeOnlyFrom:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toIndex:(struct TSUViewColumnOrRowIndex { unsigned int x0; })a1;
- (id)mutableFilteredIndexes;
- (id)mutablePivotHiddenIndexes;
- (id)mutableUserHiddenIndexes;
- (void)mutateFormulaFiltersWithTable:(id)a0 usingBlock:(id /* block */)a1;
- (unsigned int)numberOfHiddenInBaseRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned int)numberOfHiddenInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned int)numberOfUserHiddenInBaseRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned int)numberOfUserHiddenInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)p_addHiddenIndex:(struct TSUModelColumnOrRowIndex { unsigned int x0; })a0 viewIndex:(struct TSUViewColumnOrRowIndex { unsigned int x0; })a1 forAction:(unsigned char)a2;
- (id)p_baseHiddenIndexes;
- (struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; })p_calculateAverageThresholdWithCalcEngine:(id)a0 formulaCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a1;
- (struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; })p_calculateTopOrBottomThresholdWithCalcEngine:(id)a0 formulaCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a1 isTop:(BOOL)a2 keyScale:(unsigned char)a3;
- (void)p_calculateUniqueDistinctIndexWithCalcEngine:(id)a0 formulaCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a1 tableModel:(id)a2 rule:(id)a3;
- (id)p_calculateUniqueThresholdWithCalcEngine:(id)a0 formulaCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a1;
- (BOOL)p_canUsePrePivotFilterSet;
- (id)p_collapsedIndexes;
- (id)p_createThresholdCellValue:(struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; })a0 locale:(id)a1;
- (id)p_filteredIndexes;
- (void)p_hiddenStateChangedForBaseIndex:(struct TSUModelColumnOrRowIndex { unsigned int x0; })a0 viewIndex:(struct TSUViewColumnOrRowIndex { unsigned int x0; })a1 forAction:(unsigned char)a2;
- (void)p_registerAllFormulas;
- (void)p_registerAllFormulasReturningCoords:(void *)a0;
- (void)p_removeAllFormulaFromCalculationEngine;
- (void)p_removeHiddenIndex:(struct TSUModelColumnOrRowIndex { unsigned int x0; })a0 viewIndex:(struct TSUViewColumnOrRowIndex { unsigned int x0; })a1 forAction:(unsigned char)a2;
- (id)p_summaryFilteredIndexes;
- (id)p_summaryHiddenIndexes;
- (id)p_summaryPivotHiddenIndexes;
- (id)p_userHiddenIndexes;
- (struct TSUViewColumnOrRowIndex { unsigned int x0; })p_viewIndexForBaseIndex:(struct TSUModelColumnOrRowIndex { unsigned int x0; })a0;
- (id)precedentsForFilterSet:(id)a0 calcEngine:(id)a1 hostOwnerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a2 hostCellID:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a3;
- (id)pruneCollapsedGroupsInDimension:(long long)a0;
- (int)registerWithCalcEngine:(id)a0 baseOwnerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)remapTableUIDsInFormulasWithMap:(const void *)a0 calcEngine:(id)a1;
- (void)removeUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (void)setFilterSetType:(int)a0;
- (void)setGroupUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 asCollapsed:(BOOL)a1;
- (void)setupAfterUnarchive;
- (BOOL)showAtBaseIndex:(struct TSUModelColumnOrRowIndex { unsigned int x0; })a0 forAction:(unsigned char)a1;
- (BOOL)showAtUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 forAction:(unsigned char)a1;
- (BOOL)showAtUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 forIndex:(struct TSUModelColumnOrRowIndex { unsigned int x0; })a1 forViewIndex:(struct TSUViewColumnOrRowIndex { unsigned int x0; })a2 forAction:(unsigned char)a3;
- (BOOL)showAtViewIndex:(struct TSUViewColumnOrRowIndex { unsigned int x0; })a0 forAction:(unsigned char)a1;
- (void)showAtViewIndexes:(id)a0 forAction:(unsigned char)a1;
- (void)startOfGroupingChangesBatch;
- (void)swapBaseIndex:(struct TSUModelColumnOrRowIndex { unsigned int x0; })a0 withIndex:(struct TSUModelColumnOrRowIndex { unsigned int x0; })a1;
- (void)syncUpHiddenStateFormulaOwnerUIDs;
- (id)uniqueValuesForColumnUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (void)uniqueValuesLock;
- (void)uniqueValuesUnlock;
- (void)unregisterFromCalcEngine;
- (void)verifyIndexesAreConsistent;
- (void)willApplyBaseCellMap:(id)a0 tableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)willApplyCell:(id)a0 baseCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })a1 tableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a2;
- (void)willApplyConcurrentCellMap:(id)a0 tableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)willChangeGroupByTo:(id)a0;
- (void)willRemoveGroup:(id)a0;
- (void)willRemoveRows:(const void *)a0 tableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;

@end
