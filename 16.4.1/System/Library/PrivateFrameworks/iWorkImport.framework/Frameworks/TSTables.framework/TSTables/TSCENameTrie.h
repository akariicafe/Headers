@class NSString, TSULocale;

@interface TSCENameTrie : NSObject {
    struct TSCENameTrieNode { struct unordered_map<unsigned short, TSCENameTrieNode *, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, TSCENameTrieNode *>>> { struct __hash_table<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, TSCENameTrieNode *>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, TSCENameTrieNode *>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>, std::allocator<std::__hash_value_type<unsigned short, TSCENameTrieNode *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCENameTrieNode *>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, TSCENameTrieNode *>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, TSCENameTrieNode *>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>> { float __value_; } __p3_; } __table_; } _children; NSString *_name; } _root;
    TSULocale *_locale;
}

- (id).cxx_construct;
- (void)setLocale:(id)a0;
- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (void)removeName:(id)a0;
- (BOOL)containsName:(id)a0;
- (void)enumerateNamesMatchingPrefix:(id)a0 block:(id /* block */)a1;
- (id)foldName:(id)a0;
- (BOOL)insertFoldedName:(id)a0;
- (BOOL)insertName:(id)a0;
- (void *)nodeForName:(id)a0 createIfMissing:(BOOL)a1;

@end
