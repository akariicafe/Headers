@class NSPointerArray;

@interface REFeatureValueCounter : NSObject {
    NSPointerArray *_values;
    struct REFancyShrinkingDictionary { struct unordered_map<std::string, unsigned short, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, unsigned short>>> { struct __hash_table<std::__hash_value_type<std::string, unsigned short>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned short>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned short>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, unsigned short>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned short>, std::hash<std::string>, std::equal_to<std::string>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned short>, std::equal_to<std::string>, std::hash<std::string>, true>> { float __value_; } __p3_; } __table_; } m_mapDocumentFrequency; unsigned long long m_maxSize; unsigned long long m_shrinkSize; int m_nVersion; BOOL m_trimTop; BOOL m_shinksOnTotalCount; } _indicies;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _lock;
}

@property (nonatomic) unsigned long long count;

- (unsigned long long)totalCount;
- (unsigned long long)countForValue:(id)a0;
- (id)_createErrorWithCode:(unsigned long long)a0 description:(id)a1 underlyingError:(id)a2;
- (void)_updateConfigurationForCount:(unsigned long long)a0;
- (BOOL)readFromURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (unsigned long long)trackedValueForValue:(id)a0;
- (id).cxx_construct;

@end
