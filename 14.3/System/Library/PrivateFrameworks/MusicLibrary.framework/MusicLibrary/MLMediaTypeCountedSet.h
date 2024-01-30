@interface MLMediaTypeCountedSet : NSObject {
    struct map<unsigned int, unsigned long, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned long> > > { struct __tree<std::__1::__value_type<unsigned int, unsigned long>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned long>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned long> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned long>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned long>, std::__1::less<unsigned int>, true> > { unsigned long long __value_; } __pair3_; } __tree_; } _map;
}

@property (nonatomic) unsigned long long count;

- (void).cxx_destruct;
- (id)description;
- (id).cxx_construct;
- (void)addMediaType:(unsigned int)a0 count:(unsigned long long)a1;
- (void)enumerateMediaTypesWithBlock:(id /* block */)a0;

@end
