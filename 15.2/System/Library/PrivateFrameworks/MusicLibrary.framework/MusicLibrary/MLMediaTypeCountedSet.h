@interface MLMediaTypeCountedSet : NSObject {
    struct map<unsigned int, unsigned long, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long>>> { struct __tree<std::__value_type<unsigned int, unsigned long>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, unsigned long>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, unsigned long>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _map;
}

@property (readonly, nonatomic) unsigned long long count;

- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)addMediaType:(unsigned int)a0 count:(unsigned long long)a1;
- (void)enumerateMediaTypesWithBlock:(id /* block */)a0;

@end
