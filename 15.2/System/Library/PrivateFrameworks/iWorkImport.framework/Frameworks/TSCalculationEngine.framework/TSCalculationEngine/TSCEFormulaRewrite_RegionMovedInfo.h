@class TSCEFormulaRewrite_Uids, TSCEFormulaRewrite_RegionInfo;

@interface TSCEFormulaRewrite_RegionMovedInfo : NSObject

@property (readonly, nonatomic) TSCEFormulaRewrite_RegionInfo *srcRegion;
@property (readonly, nonatomic) TSCEFormulaRewrite_RegionInfo *dstRegion;
@property (retain, nonatomic) TSCEFormulaRewrite_RegionInfo *originalSrcRegion;
@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } finalDstTableUID;
@property (nonatomic) unsigned int finalTopRowIndex;
@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } srcTableUID;
@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } dstTableUID;
@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } originalSrcTableUID;
@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } srcCondStyleOwnerUID;
@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } dstCondStyleOwnerUID;
@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } originalSrcCondStyleOwnerUID;
@property (readonly, nonatomic) TSCEFormulaRewrite_Uids *srcColumnUids;
@property (readonly, nonatomic) TSCEFormulaRewrite_Uids *srcRowUids;
@property (readonly, nonatomic) TSCEFormulaRewrite_Uids *dstColumnUids;
@property (readonly, nonatomic) TSCEFormulaRewrite_Uids *dstRowUids;
@property (readonly, nonatomic) TSCEFormulaRewrite_Uids *originalSrcColumnUids;
@property (readonly, nonatomic) TSCEFormulaRewrite_Uids *originalSrcRowUids;
@property (readonly, nonatomic) struct TSKUIDStructMap { struct __hash_table<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> { float __value_; } __p3_; } __table_; } srcUidForDstUid;
@property (readonly, nonatomic) struct TSKUIDStructMap { struct __hash_table<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> { float __value_; } __p3_; } __table_; } dstUidForSrcUid;
@property (nonatomic) BOOL spanningRows;
@property (nonatomic) BOOL spanningColumns;

- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)saveToMessage:(void *)a0;
- (id)initFromMessage:(const void *)a0;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })dstUidForSrcUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (BOOL)isForDstTable:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })srcUidForDstUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (void)loadIndexesForSrcTable:(id)a0 srcUidResolver:(id)a1 dstTable:(id)a2 dstUidResolver:(id)a3;
- (void)unloadIndexes;
- (void)loadIndexesFromRegions;
- (id)initWithSrcTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 srcTract:(const void *)a1 dstTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a2 destTract:(const void *)a3;
- (BOOL)isForSrcTable:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;

@end
