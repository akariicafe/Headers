@class TSTTableInfo;

@interface TSTSummaryCellVendor : TSPObject

@property (readonly, nonatomic) struct map<TSKUIDStructCoord, TSTCell *, std::less<TSKUIDStructCoord>, std::allocator<std::pair<const TSKUIDStructCoord, TSTCell *>>> { struct __tree<std::__value_type<TSKUIDStructCoord, TSTCell *>, std::__map_value_compare<TSKUIDStructCoord, std::__value_type<TSKUIDStructCoord, TSTCell *>, std::less<TSKUIDStructCoord>, true>, std::allocator<std::__value_type<TSKUIDStructCoord, TSTCell *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TSKUIDStructCoord, TSTCell *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<TSKUIDStructCoord, std::__value_type<TSKUIDStructCoord, TSTCell *>, std::less<TSKUIDStructCoord>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } cellUIDMap;
@property (nonatomic) BOOL hasCustomFormatsToPaste;
@property (readonly, weak, nonatomic) TSTTableInfo *tableInfo;
@property (nonatomic) BOOL upgradingToSubOwnerUIDs;
@property (readonly, nonatomic) unsigned long long cellCount;

+ (BOOL)canBeVendorStorageUid:(const struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithTableInfo:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (int)getCell:(id)a0 atCellUID:(const struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a1;
- (id)mapReassigningPasteboardCustomFormatKeys:(id)a0;
- (void)addPasteboardCustomFormatsToDocumentAndUpdateCells;
- (void)setAggregateType:(unsigned char)a0 forColumnUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1 atGroupLevel:(unsigned char)a2;
- (void)setCell:(id)a0 atCellUID:(const struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a1;
- (id)initWithContext:(id)a0 tableInfo:(id)a1;
- (id)cellAtCellUID:(const struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;
- (void)enumerateCellsUsingBlock:(id /* block */)a0;
- (id)cellSpecForAggregateType:(unsigned char)a0 forColumnUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1 atGroupLevel:(unsigned char)a2;
- (void)removeCellsInColumnUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (id)cellMapForWildcardCells;
- (struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })p_resolveCellUIDToVendorCellUID:(const struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;
- (void)setTableInfoForGSSP:(id)a0;
- (void)runChange:(id)a0 withSummaryCellMap:(id)a1 migrationHelper:(id)a2;

@end
