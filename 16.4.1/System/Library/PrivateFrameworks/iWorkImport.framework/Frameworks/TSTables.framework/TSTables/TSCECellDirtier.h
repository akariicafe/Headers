@class NSDate;

@interface TSCECellDirtier : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dirtyingLock;
    struct unordered_map<TSCEInternalCellReference, std::vector<TSCEInternalCellReference>, std::hash<TSCEInternalCellReference>, std::equal_to<TSCEInternalCellReference>, std::allocator<std::pair<const TSCEInternalCellReference, std::vector<TSCEInternalCellReference>>>> { struct __hash_table<std::__hash_value_type<TSCEInternalCellReference, std::vector<TSCEInternalCellReference>>, std::__unordered_map_hasher<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, std::vector<TSCEInternalCellReference>>, std::hash<TSCEInternalCellReference>, std::equal_to<TSCEInternalCellReference>, true>, std::__unordered_map_equal<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, std::vector<TSCEInternalCellReference>>, std::equal_to<TSCEInternalCellReference>, std::hash<TSCEInternalCellReference>, true>, std::allocator<std::__hash_value_type<TSCEInternalCellReference, std::vector<TSCEInternalCellReference>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::vector<TSCEInternalCellReference>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::vector<TSCEInternalCellReference>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::vector<TSCEInternalCellReference>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::vector<TSCEInternalCellReference>>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::vector<TSCEInternalCellReference>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::vector<TSCEInternalCellReference>>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::vector<TSCEInternalCellReference>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::vector<TSCEInternalCellReference>>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSCEInternalCellReference, std::vector<TSCEInternalCellReference>>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, std::vector<TSCEInternalCellReference>>, std::hash<TSCEInternalCellReference>, std::equal_to<TSCEInternalCellReference>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<TSCEInternalCellReference, std::__hash_value_type<TSCEInternalCellReference, std::vector<TSCEInternalCellReference>>, std::equal_to<TSCEInternalCellReference>, std::hash<TSCEInternalCellReference>, true>> { float __value_; } __p3_; } __table_; } _dependentsToDirtyByFromRef;
}

@property (nonatomic) BOOL dirtyingInProgress;
@property (readonly, nonatomic) void *dependTracker;
@property (readonly, nonatomic) BOOL isDoneDirtying;
@property (readonly, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) double timeout;
@property (readonly, nonatomic) struct TSCEInternalCellReference { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } coordinate; unsigned short tableID; unsigned short reserved; } startCellRef;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_dirtyCellsWithNoLockForSeconds:(double)a0 fromStartTime:(id)a1;
- (void *)dependentsToDirtyByFromRef;
- (BOOL)dirtyCellsForSeconds:(double)a0 fromStartTime:(id)a1;
- (void)dirtyCellsNow;
- (BOOL)dirtyNewCellRef:(const struct TSCEInternalCellReference { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; unsigned short x1; unsigned short x2; } *)a0 forSeconds:(double)a1 fromStartTime:(id)a2;
- (id)initWithDependencyTracker:(void *)a0;
- (void)startDirtyingCellRef;
- (void)stopDirtyingCellRef;

@end
