@interface MLInt64ProbabilityDictionary : MLProbabilityDictionary

@property (nonatomic) struct map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > > { struct __tree<std::__1::__value_type<unsigned long, unsigned long>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, unsigned long>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, unsigned long> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, unsigned long>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, unsigned long>, std::__1::less<unsigned long>, true> > { unsigned long long __value_; } __pair3_; } __tree_; } mapIntLabelToIndex;

+ (id)probabilityDictionaryForInt64Labels:(id)a0;

- (id)objectForKey:(id)a0;
- (id)keyEnumerator;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)copy;
- (id).cxx_construct;
- (unsigned long long)count;
- (id)initWithIntLabels:(id)a0;
- (void)removeObjectForKey:(id)a0;

@end
