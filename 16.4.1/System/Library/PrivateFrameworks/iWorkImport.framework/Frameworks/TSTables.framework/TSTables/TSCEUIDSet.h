@interface TSCEUIDSet : NSObject <NSCopying, NSMutableCopying> {
    struct unordered_set<TSKUIDStruct, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<TSKUIDStruct>> { struct __hash_table<TSKUIDStruct, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<TSKUIDStruct>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *>, std::allocator<std::__hash_node<TSKUIDStruct, void *>>> { struct __hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::hash<TSKUIDStruct>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::equal_to<TSKUIDStruct>> { float __value_; } __p3_; } __table_; } _uuidSet;
}

@property (readonly) unsigned long long count;

- (id)initWithUUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)intersectsSet:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isSubsetOf:(id)a0;
- (id)initWithUUIDSet:(id)a0;
- (BOOL)containsUuid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0;
- (void)foreachUuid:(id /* block */)a0;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })anyUuid;
- (id)expandedSetWithUuidsFromVector:(const void *)a0;
- (id)reducedSetMinusUuidsFromVector:(const void *)a0;
- (id)expandedSetWithUuid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0;
- (id)expandedSetWithUuids:(const void *)a0;
- (id)initWithUUIDVector:(const void *)a0;
- (BOOL)isAllInvalid;
- (BOOL)p_addUUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0;
- (void)p_addUUIDs:(const void *)a0;
- (void)p_addUUIDsFromVector:(const void *)a0;
- (BOOL)p_removeUUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0;
- (void)p_removeUUIDs:(const void *)a0;
- (void)p_removeUUIDsFromVector:(const void *)a0;
- (id)reducedSetMinusUuid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0;
- (id)reducedSetMinusUuids:(const void *)a0;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; })uuidsAsVector;
- (id)initWithTSUUUIDVector:(const void *)a0;
- (void)p_reserve:(unsigned long long)a0;
- (id)setByUnionWithSet:(id)a0;
- (struct vector<TSU::UUIDData<TSP::UUIDData>, std::allocator<TSU::UUIDData<TSP::UUIDData>>> { void *x0; void *x1; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::allocator<TSU::UUIDData<TSP::UUIDData>>> { void *x0; } x2; })uuidsAsTSUVector;

@end
