@interface MLInt64ProbabilityDictionaryEnumerator : NSEnumerator

@property (nonatomic) struct __map_iterator<std::__tree_iterator<std::__value_type<unsigned long, unsigned long>, std::__tree_node<std::__value_type<unsigned long, unsigned long>, void *> *, long>> { struct __tree_iterator<std::__value_type<unsigned long, unsigned long>, std::__tree_node<std::__value_type<unsigned long, unsigned long>, void *> *, long> { void *__ptr_; } __i_; } iter;
@property (nonatomic) struct __map_iterator<std::__tree_iterator<std::__value_type<unsigned long, unsigned long>, std::__tree_node<std::__value_type<unsigned long, unsigned long>, void *> *, long>> { struct __tree_iterator<std::__value_type<unsigned long, unsigned long>, std::__tree_node<std::__value_type<unsigned long, unsigned long>, void *> *, long> { void *__ptr_; } __i_; } iterEnd;

+ (id)enumeratorFromMap:(void *)a0;

- (id)nextObject;
- (id).cxx_construct;
- (id)initWithIntMap:(void *)a0;

@end
