@class NSMutableArray, TSTCellUIDList;

@interface TSTCellMap : TSPObject <NSCopying, TSTCellMapChangeDescriptorDelivering> {
    struct vector<TSUCellCoord, std::allocator<TSUCellCoord>> { struct TSUCellCoord *__begin_; struct TSUCellCoord *__end_; struct __compressed_pair<TSUCellCoord *, std::allocator<TSUCellCoord>> { struct TSUCellCoord *__value_; } __end_cap_; } _cellIDs;
    NSMutableArray *_mergeActions;
    struct unordered_map<TSUCellCoord, TSTCell *, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, TSTCell *>>> { struct __hash_table<std::__hash_value_type<TSUCellCoord, TSTCell *>, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTCell *>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTCell *>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>, std::allocator<std::__hash_value_type<TSUCellCoord, TSTCell *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTCell *>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTCell *>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>, true>> { float __value_; } __p3_; } __table_; } _searchableIDMap;
    struct unordered_map<TSKUIDStructCoord, TSTCell *, std::hash<TSKUIDStructCoord>, std::equal_to<TSKUIDStructCoord>, std::allocator<std::pair<const TSKUIDStructCoord, TSTCell *>>> { struct __hash_table<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, std::__unordered_map_hasher<TSKUIDStructCoord, std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, std::hash<TSKUIDStructCoord>, std::equal_to<TSKUIDStructCoord>, true>, std::__unordered_map_equal<TSKUIDStructCoord, std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, std::equal_to<TSKUIDStructCoord>, std::hash<TSKUIDStructCoord>, true>, std::allocator<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStructCoord, std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, std::hash<TSKUIDStructCoord>, std::equal_to<TSKUIDStructCoord>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<TSKUIDStructCoord, std::__hash_value_type<TSKUIDStructCoord, TSTCell *>, std::equal_to<TSKUIDStructCoord>, std::hash<TSKUIDStructCoord>, true>> { float __value_; } __p3_; } __table_; } _searchableUIDMap;
}

@property (nonatomic, getter=isUIDBased) BOOL uidBased;
@property (retain, nonatomic) TSTCellUIDList *cellUIDs;
@property (retain, nonatomic) NSMutableArray *cellLists;
@property (readonly, nonatomic, getter=isOneToMany) BOOL oneToMany;
@property (nonatomic) BOOL shallowCopy;
@property (nonatomic) BOOL mayModifyFormulasInCells;
@property (nonatomic) BOOL mayModifyValuesReferencedByFormulas;

+ (id)cellMapWithContext:(id)a0;
+ (id)uuidBasedCellMapWithContext:(id)a0;

- (id)initWithContext:(id)a0;
- (id)iterator;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id).cxx_construct;
- (id)cellAtIndex:(unsigned long long)a0;
- (void)addCell:(id)a0 andCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1;
- (const void *)cellIDs;
- (struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })cellIDAtIndex:(unsigned long long)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)initWithContext:(id)a0 uidBased:(BOOL)a1;
- (void)addCell:(id)a0 andCellUID:(const struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a1;
- (id)changeDescriptorsForTable:(id)a0;
- (void)reserve:(unsigned long long)a0;
- (void)clearDataListIDs;
- (void)enumerateCellsWithIDsUsingBlock:(id /* block */)a0;
- (void)appendCellMap:(id)a0 precopied:(BOOL)a1;
- (const void *)columnUIDs;
- (const void *)rowUIDs;
- (id)initShallowMapWithContext:(id)a0 uidBased:(BOOL)a1;
- (void)addMergeAction:(id)a0;
- (BOOL)containsMergeChanges;
- (id)mergeActions;
- (void)addMergeActions:(id)a0;
- (void)clearMerges;
- (id)p_addCell:(id)a0;
- (id)initWithContext:(id)a0 cell:(id)a1 cellUIDList:(id)a2 skipCellUIDListCopy:(BOOL)a3;
- (unsigned long long)p_cellCount;
- (id)copyWithZone:(struct _NSZone { } *)a0 copyingCells:(BOOL)a1;
- (id)p_cellAtIndex:(unsigned long long)a0 inCellListArray:(id)a1;
- (void)enumerateCellsWithUIDsUsingBlock:(id /* block */)a0;
- (void)p_addPrecopiedCells:(void *)a0;
- (void)remapUIDsByColumnMap:(const void *)a0 rowMap:(const void *)a1 ownerMap:(const void *)a2;
- (void)p_copyCellsAndUUIDsFromCellMap:(id)a0 convertingToCellIDsWithTableInfo:(id)a1;
- (void)p_resolveCellIDsToUUIDsByTableInfo:(id)a0;
- (void)p_shallowAddCell:(id)a0 atCellCoord:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1;
- (id)initWithContext:(id)a0 cell:(id)a1 cellUIDList:(id)a2;
- (id)initWithContext:(id)a0 cell:(id)a1 cellIDList:(const void *)a2;
- (id)findCellForCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (id)findCellForCellUID:(const struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;
- (void)addPrecopiedCells:(void *)a0 andCellUIDs:(void *)a1;
- (void)replaceCellAtIndex0:(id)a0;
- (void)addHeadMergeAction:(id)a0;
- (id)cellIDBasedCellMapByTableInfo:(id)a0;
- (id)uuidBasedCellMapByTableInfo:(id)a0;
- (struct TSCECellCoordSet { struct map<unsigned short, TSUIndexSet, std::less<unsigned short>, std::allocator<std::pair<const unsigned short, TSUIndexSet>>> { struct __tree<std::__value_type<unsigned short, TSUIndexSet>, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, TSUIndexSet>, std::less<unsigned short>, true>, std::allocator<std::__value_type<unsigned short, TSUIndexSet>>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned short, TSUIndexSet>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, TSUIndexSet>, std::less<unsigned short>, true>> { unsigned long long x0; } x2; } x0; } x0; })coordinatesForTableInfo:(id)a0 passingTest:(id /* block */)a1;
- (id)shallowCopyToCoordFormUsingMap:(id)a0;
- (id)cellMapMaskedByUIDs:(const void *)a0 inRows:(BOOL)a1;

@end
