@class NSString, TSTCellRegion, TSTMutableCellIteratorData, TSTTableInfo, TSTTableModel;
@protocol TSTCellRegionIterating, TSTMutableCellIteratorDataUpdating;

@interface TSTCellIterator : NSObject <TSTCellIterating> {
    struct unordered_map<unsigned short, TSUCellRect, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, TSUCellRect>>> { struct __hash_table<std::__hash_value_type<unsigned short, TSUCellRect>, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, TSUCellRect>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, TSUCellRect>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>, std::allocator<std::__hash_value_type<unsigned short, TSUCellRect>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUCellRect>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, TSUCellRect>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, TSUCellRect>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>> { float __value_; } __p3_; } __table_; } _columnIndexToMergeRangeMap;
}

@property (retain, nonatomic) TSTTableInfo *tableInfo;
@property (retain, nonatomic) TSTTableModel *tableModel;
@property (readonly, nonatomic) TSTCellRegion *region;
@property (retain, nonatomic) TSTMutableCellIteratorData *cellData;
@property (nonatomic) BOOL returnEmptyCells;
@property (nonatomic) BOOL returnOneEmptyCell;
@property (nonatomic) BOOL terminateRegionIterator;
@property (nonatomic) BOOL returnOnlyFormulas;
@property (nonatomic) BOOL returnMergeRanges;
@property (retain, nonatomic) id<TSTCellRegionIterating, TSTMutableCellIteratorDataUpdating> contentIterator;
@property (retain, nonatomic) id<TSTCellRegionIterating, TSTMutableCellIteratorDataUpdating> strokeIterator;
@property (retain, nonatomic) id<TSTCellRegionIterating> regionIterator;
@property (retain, nonatomic) id<TSTCellRegionIterating, TSTMutableCellIteratorDataUpdating> dataStoreIterator;
@property (nonatomic) unsigned int rowForColumnIndexesWithMerges;
@property (readonly, nonatomic) BOOL returnCellContents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)terminate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })p_getNextCellID;
- (BOOL)getNextCellData:(id *)a0;
- (id)initWithTableInfo:(id)a0 flags:(unsigned long long)a1 searchFlags:(unsigned long long)a2;
- (id)initWithTableInfo:(id)a0 range:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a1 flags:(unsigned long long)a2 searchFlags:(unsigned long long)a3;
- (id)initWithTableInfo:(id)a0 region:(id)a1 flags:(unsigned long long)a2 searchFlags:(unsigned long long)a3;
- (id)initWithTableInfo:(id)a0 region:(id)a1 flags:(unsigned long long)a2 searchFlags:(unsigned long long)a3 clampingRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a4;
- (id)initWithTableInfo:(id)a0 tableModel:(id)a1 region:(id)a2 flags:(unsigned long long)a3 searchFlags:(unsigned long long)a4 clampingRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a5;
- (id)initWithTableModel:(id)a0 baseRegion:(id)a1 flags:(unsigned long long)a2 searchFlags:(unsigned long long)a3 baseClampingRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a4;
- (void)iterateCellsUsingBlock:(id /* block */)a0;
- (id)nextCellData;
- (void)p_updateDataForCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (void)p_updateDataForMergeAtCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;

@end
