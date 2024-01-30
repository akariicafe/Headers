@interface TSTIntegerKeyDict : NSObject {
    struct unordered_map<unsigned int, SFUtility::ObjcSharedPtr<NSObject>, TSTIntHasher, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SFUtility::ObjcSharedPtr<NSObject> > > > { struct __hash_table<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, TSTIntHasher, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSObject> > > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, void *> *> **x0; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, void *> *> *> > { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, void *> *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, TSTIntHasher, true> > { unsigned long long x0; } x2; struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, std::__1::equal_to<unsigned int>, true> > { float x0; } x3; } x0; } *mMap;
}

- (void)removeFirstObject;
- (id)objectForKey:(unsigned int)a0;
- (id)init;
- (void)makeObjectsPerformSelector:(SEL)a0;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(unsigned int)a1;
- (id)allValues;
- (long long)count;
- (void)removeAllObjects;
- (void)removeObjectForKey:(unsigned int)a0;
- (void)transformWithFunction:(void /* function */ *)a0 withState:(void *)a1;
- (void)applyFunction:(void /* function */ *)a0 withState:(void *)a1;
- (void)applyFunction:(void /* function */ *)a0 withState:(void *)a1 andState:(void *)a2;

@end
