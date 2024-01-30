@class RLMSchema, RLMRealm;

@interface RLMMigration : NSObject {
    void *_schema;
    struct unordered_map<NSString *, realm::IndexSet, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, realm::IndexSet>>> { struct __hash_table<std::__hash_value_type<NSString *, realm::IndexSet>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, realm::IndexSet>, std::hash<NSString *>, std::equal_to<NSString *>, true>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, realm::IndexSet>, std::equal_to<NSString *>, std::hash<NSString *>, true>, std::allocator<std::__hash_value_type<NSString *, realm::IndexSet>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, realm::IndexSet>, std::hash<NSString *>, std::equal_to<NSString *>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, realm::IndexSet>, std::equal_to<NSString *>, std::hash<NSString *>, true>> { float __value_; } __p3_; } __table_; } _deletedObjectIndices;
}

@property (retain, nonatomic) RLMRealm *oldRealm;
@property (retain, nonatomic) RLMRealm *realm;
@property (readonly, nonatomic) RLMSchema *oldSchema;
@property (readonly, nonatomic) RLMSchema *newSchema;

- (void)execute:(id /* block */)a0;
- (void).cxx_destruct;
- (void)deleteObject:(id)a0;
- (id).cxx_construct;
- (void)deleteObjectsMarkedForDeletion;
- (id)createObject:(id)a0 withValue:(id)a1;
- (id)initWithRealm:(id)a0 oldRealm:(id)a1 schema:(void *)a2;
- (void)enumerateObjects:(id)a0 block:(id /* block */)a1;
- (id)createObject:(id)a0 withObject:(id)a1;
- (BOOL)deleteDataForClassName:(id)a0;
- (void)renamePropertyForClass:(id)a0 oldName:(id)a1 newName:(id)a2;

@end
