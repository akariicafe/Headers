@interface TSCERewriteGroupNodeUIDInfo : NSObject {
    struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _groupByUid;
    struct TSKUIDStructMap { struct __hash_table<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>, true>> { float __value_; } __p3_; } __table_; } _groupNodeUIDMap;
}

- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)saveToMessage:(void *)a0;
- (const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)groupByUid;
- (id)initFromMessage:(const void *)a0;
- (id)initWithGroupByUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 groupNodeUIDMap:(const void *)a1;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; })originalGroupNodeUIDs;
- (const void *)groupNodeUIDMap;

@end
