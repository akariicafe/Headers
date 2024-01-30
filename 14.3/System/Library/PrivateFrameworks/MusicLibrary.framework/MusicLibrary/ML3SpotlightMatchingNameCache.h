@class NSString, ML3MusicLibrary;

@interface ML3SpotlightMatchingNameCache : NSObject {
    struct unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> > { struct __hash_table<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<long long, void *> *> **__value_; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> *> > { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *>, std::__1::allocator<std::__1::__hash_node<long long, void *> > > { struct __hash_node_base<std::__1::__hash_node<long long, void *> *> { struct __hash_node_base<std::__1::__hash_node<long long, void *> *> *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__1::hash<long long> > { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__1::equal_to<long long> > { float __value_; } __p3_; } __table_; } _matchingSet;
    NSString *_matchString;
    BOOL _idle;
    ML3MusicLibrary *_library;
}

+ (void)initialize;
+ (void)loadFromLibrary:(id)a0 namesMatchingString:(id)a1 cancelHandler:(id /* block */)a2;

- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (id)_initWithLibrary:(id)a0 matchString:(id)a1 cancelHandler:(id /* block */)a2;

@end
