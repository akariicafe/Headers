@interface MLStringProbabilityDictionary : MLProbabilityDictionary

@property (nonatomic) struct map<std::__1::basic_string<char>, unsigned long, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, unsigned long> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long __value_; } __pair3_; } __tree_; } mapStrLabelToIndex;

+ (id)probabilityDictionaryForStringLabels:(id)a0;

- (id)objectForKey:(id)a0;
- (id)keyEnumerator;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)copy;
- (id).cxx_construct;
- (unsigned long long)count;
- (id)initWithStrLabels:(id)a0;
- (void)removeObjectForKey:(id)a0;

@end
