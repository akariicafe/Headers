@class RLMSchema, RLMRealm;

@interface RLMMigration : NSObject {
    struct Schema { struct ObjectSchema *x0; struct ObjectSchema *x1; struct __compressed_pair<realm::ObjectSchema *, std::__1::allocator<realm::ObjectSchema> > { struct ObjectSchema *x0; } x2; } *_schema;
    struct unordered_map<NSString *, realm::IndexSet, std::__1::hash<NSString *>, std::__1::equal_to<NSString *>, std::__1::allocator<std::__1::pair<NSString *const, realm::IndexSet> > > { struct __hash_table<std::__1::__hash_value_type<NSString *, realm::IndexSet>, std::__1::__unordered_map_hasher<NSString *, std::__1::__hash_value_type<NSString *, realm::IndexSet>, std::__1::hash<NSString *>, true>, std::__1::__unordered_map_equal<NSString *, std::__1::__hash_value_type<NSString *, realm::IndexSet>, std::__1::equal_to<NSString *>, true>, std::__1::allocator<std::__1::__hash_value_type<NSString *, realm::IndexSet> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *> *> **__value_; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *> *> *> > { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *> *> *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<NSString *, std::__1::__hash_value_type<NSString *, realm::IndexSet>, std::__1::hash<NSString *>, true> > { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__1::__unordered_map_equal<NSString *, std::__1::__hash_value_type<NSString *, realm::IndexSet>, std::__1::equal_to<NSString *>, true> > { float __value_; } __p3_; } __table_; } _deletedObjectIndices;
}

@property (retain, nonatomic) RLMRealm *oldRealm;
@property (retain, nonatomic) RLMRealm *realm;
@property (readonly, nonatomic) RLMSchema *oldSchema;
@property (readonly, nonatomic) RLMSchema *newSchema;

- (void)execute:(id /* block */)a0;
- (void)deleteObject:(id)a0;
- (void).cxx_destruct;
- (id)createObject:(id)a0 withValue:(id)a1;
- (id).cxx_construct;
- (void)deleteObjectsMarkedForDeletion;
- (id)initWithRealm:(id)a0 oldRealm:(id)a1 schema:(struct Schema { struct ObjectSchema *x0; struct ObjectSchema *x1; struct __compressed_pair<realm::ObjectSchema *, std::__1::allocator<realm::ObjectSchema> > { struct ObjectSchema *x0; } x2; } *)a2;
- (void)enumerateObjects:(id)a0 block:(id /* block */)a1;
- (id)createObject:(id)a0 withObject:(id)a1;
- (BOOL)deleteDataForClassName:(id)a0;
- (void)renamePropertyForClass:(id)a0 oldName:(id)a1 newName:(id)a2;

@end
