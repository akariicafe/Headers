@class NSObject;
@protocol OS_dispatch_queue;

@interface LSDatabaseBuilder : NSObject {
    NSObject<OS_dispatch_queue> *_ioQueue;
}

- (void).cxx_destruct;
- (void)createAndSeedLocalDatabase:(BOOL *)a0;
- (void)syncWithMI:(struct unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > { struct __hash_table<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::basic_string<char>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::basic_string<char>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::basic_string<char>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::basic_string<char>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::basic_string<char>, void *> *> **x0; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::basic_string<char>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::basic_string<char>, void *> *> *> > { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::basic_string<char>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::basic_string<char>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::basic_string<char>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::basic_string<char>, void *> *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::hash<std::__1::basic_string<char> > > { unsigned long long x0; } x2; struct __compressed_pair<float, std::__1::equal_to<std::__1::basic_string<char> > > { float x0; } x3; } x0; } *)a0;
- (void)setSeedingComplete:(BOOL)a0;
- (id)initWithIOQueue:(id)a0;

@end
