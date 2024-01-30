@interface TSPPersistedObjectUUIDMap : NSObject <NSCopying> {
    struct unordered_map<NSUUID *, TSP::ObjectLocation, TSP::NSUUIDHash, TSP::NSUUIDEqualTo, std::__1::allocator<std::__1::pair<NSUUID *const, TSP::ObjectLocation> > > { struct __hash_table<std::__1::__hash_value_type<NSUUID *, TSP::ObjectLocation>, std::__1::__unordered_map_hasher<NSUUID *, std::__1::__hash_value_type<NSUUID *, TSP::ObjectLocation>, TSP::NSUUIDHash, true>, std::__1::__unordered_map_equal<NSUUID *, std::__1::__hash_value_type<NSUUID *, TSP::ObjectLocation>, TSP::NSUUIDEqualTo, true>, std::__1::allocator<std::__1::__hash_value_type<NSUUID *, TSP::ObjectLocation> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSUUID *, TSP::ObjectLocation>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSUUID *, TSP::ObjectLocation>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSUUID *, TSP::ObjectLocation>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSUUID *, TSP::ObjectLocation>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSUUID *, TSP::ObjectLocation>, void *> *> **x0; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSUUID *, TSP::ObjectLocation>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSUUID *, TSP::ObjectLocation>, void *> *> *> > { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSUUID *, TSP::ObjectLocation>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<NSUUID *, TSP::ObjectLocation>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSUUID *, TSP::ObjectLocation>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSUUID *, TSP::ObjectLocation>, void *> *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<NSUUID *, std::__1::__hash_value_type<NSUUID *, TSP::ObjectLocation>, TSP::NSUUIDHash, true> > { unsigned long long x0; } x2; struct __compressed_pair<float, std::__1::__unordered_map_equal<NSUUID *, std::__1::__hash_value_type<NSUUID *, TSP::ObjectLocation>, TSP::NSUUIDEqualTo, true> > { float x0; } x3; } x0; } *_map;
}

@property (readonly, nonatomic) unsigned long long count;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)enumerateEntriesUsingBlock:(id /* block */)a0;
- (BOOL)setObjectLocation:(struct ObjectLocation { long long x0; long long x1; })a0 forUUID:(id)a1 objectReferenceMapOrNil:(id)a2 delegate:(id)a3;
- (id)initWithPersistedObjectUUIDMap:(id)a0;
- (id)descriptionForComponentIdentifier:(long long)a0 objectIdentifier:(long long)a1 delegate:(id)a2;
- (id)initWithComponentsDictionary:(id)a0 isLoadingDocument:(BOOL)a1 objectReferenceMapOrNil:(id)a2 delegate:(id)a3;
- (struct ObjectLocation { long long x0; long long x1; })objectLocationForUUID:(id)a0;
- (void)didUpdateUUIDDuringRead:(id)a0 forComponentIdentifier:(long long)a1 objectIdentifier:(long long)a2 originalUUID:(id)a3 isDuplicatedUUID:(BOOL)a4 delegate:(id)a5;
- (void)didUpdateObjectIdentifierDuringRead:(long long)a0 forUUID:(id)a1 componentIdentifier:(long long)a2 originalObjectIdentifier:(long long)a3 delegate:(id)a4;

@end
