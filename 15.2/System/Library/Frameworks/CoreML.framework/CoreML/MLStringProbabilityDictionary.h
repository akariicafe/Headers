@interface MLStringProbabilityDictionary : MLProbabilityDictionary

@property (nonatomic) struct map<std::string, unsigned long, std::less<std::string>, std::allocator<std::pair<const std::string, unsigned long>>> { struct __tree<std::__value_type<std::string, unsigned long>, std::__map_value_compare<std::string, std::__value_type<std::string, unsigned long>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, unsigned long>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, unsigned long>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, unsigned long>, std::less<std::string>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } mapStrLabelToIndex;

+ (id)probabilityDictionaryForStringLabels:(id)a0;

- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)keyEnumerator;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (unsigned long long)count;
- (id)copy;
- (id)initWithStrLabels:(id)a0;
- (id).cxx_construct;

@end
