@class NSArray;

@interface _HDCachedSourceOrder : NSObject

@property (nonatomic) struct vector<_HDWrappedSource, std::__1::allocator<_HDWrappedSource> > { struct _HDWrappedSource *__begin_; struct _HDWrappedSource *__end_; struct __compressed_pair<_HDWrappedSource *, std::__1::allocator<_HDWrappedSource> > { struct _HDWrappedSource *__value_; } __end_cap_; } orderedSources;
@property (nonatomic) struct unordered_map<long long, HKSource *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, HKSource *> > > { struct __hash_table<std::__1::__hash_value_type<long long, HKSource *>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, HKSource *>, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, HKSource *>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, HKSource *> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, HKSource *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, HKSource *>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, HKSource *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, HKSource *>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, HKSource *>, void *> *> **__value_; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, HKSource *>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, HKSource *>, void *> *> *> > { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, HKSource *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, HKSource *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, HKSource *>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, HKSource *>, void *> *> *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, HKSource *>, std::__1::hash<long long>, true> > { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, HKSource *>, std::__1::equal_to<long long>, true> > { float __value_; } __p3_; } __table_; } sourcesByID;
@property (readonly, nonatomic) BOOL userOrdered;
@property (readonly, nonatomic) BOOL isDefaultSourceOrder;
@property (readonly, copy, nonatomic) NSArray *sources;
@property (readonly, copy, nonatomic) NSArray *sourceIDs;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSources:(struct vector<_HDWrappedSource, std::__1::allocator<_HDWrappedSource> > { struct _HDWrappedSource *x0; struct _HDWrappedSource *x1; struct __compressed_pair<_HDWrappedSource *, std::__1::allocator<_HDWrappedSource> > { struct _HDWrappedSource *x0; } x2; })a0 userOrdered:(BOOL)a1 isDefaultOrder:(BOOL)a2;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;

@end
