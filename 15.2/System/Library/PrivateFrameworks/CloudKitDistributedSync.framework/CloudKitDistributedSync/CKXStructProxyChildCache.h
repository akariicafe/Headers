@class CKXStructProxyBase;

@interface CKXStructProxyChildCache : NSObject {
    struct unordered_map<unsigned long, CKXProxyBase *, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, CKXProxyBase *>>> { struct __hash_table<std::__hash_value_type<unsigned long, CKXProxyBase *>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, CKXProxyBase *>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, CKXProxyBase *>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, CKXProxyBase *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, CKXProxyBase *>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, CKXProxyBase *>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>> { float __value_; } __p3_; } __table_; } fieldToProxy;
}

@property (readonly, weak, nonatomic) CKXStructProxyBase *proxy;

- (id)initWithProxy:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id).cxx_construct;
- (id)structProxyForStructReference:(unsigned long long)a0 mutable:(BOOL)a1;
- (id)structListProxyForListReference:(unsigned long long)a0 mutable:(BOOL)a1;

@end
