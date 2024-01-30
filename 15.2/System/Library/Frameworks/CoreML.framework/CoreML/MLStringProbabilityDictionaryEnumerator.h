@interface MLStringProbabilityDictionaryEnumerator : NSEnumerator

@property (nonatomic) struct __map_iterator<std::__tree_iterator<std::__value_type<std::string, unsigned long>, std::__tree_node<std::__value_type<std::string, unsigned long>, void *> *, long>> { struct __tree_iterator<std::__value_type<std::string, unsigned long>, std::__tree_node<std::__value_type<std::string, unsigned long>, void *> *, long> { void *__ptr_; } __i_; } iter;
@property (nonatomic) struct __map_iterator<std::__tree_iterator<std::__value_type<std::string, unsigned long>, std::__tree_node<std::__value_type<std::string, unsigned long>, void *> *, long>> { struct __tree_iterator<std::__value_type<std::string, unsigned long>, std::__tree_node<std::__value_type<std::string, unsigned long>, void *> *, long> { void *__ptr_; } __i_; } iterEnd;

+ (id)enumeratorFromMap:(void *)a0;

- (id)nextObject;
- (id)initWithStrMap:(void *)a0;
- (id).cxx_construct;

@end
