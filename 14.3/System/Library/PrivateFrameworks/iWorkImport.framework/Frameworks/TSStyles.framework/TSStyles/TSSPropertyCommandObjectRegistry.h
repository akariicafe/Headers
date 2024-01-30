@interface TSSPropertyCommandObjectRegistry : NSObject {
    struct map<int, std::__1::pair<Class, std::__1::basic_string<char> >, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, std::__1::pair<Class, std::__1::basic_string<char> > > > > { struct __tree<std::__1::__value_type<int, std::__1::pair<Class, std::__1::basic_string<char> > >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::pair<Class, std::__1::basic_string<char> > >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::pair<Class, std::__1::basic_string<char> > > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, std::__1::pair<Class, std::__1::basic_string<char> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::pair<Class, std::__1::basic_string<char> > >, std::__1::less<int>, true> > { unsigned long long __value_; } __pair3_; } __tree_; } _indexToClass;
    struct map<Class, int, std::__1::less<Class>, std::__1::allocator<std::__1::pair<const Class, int> > > { struct __tree<std::__1::__value_type<Class, int>, std::__1::__map_value_compare<Class, std::__1::__value_type<Class, int>, std::__1::less<Class>, true>, std::__1::allocator<std::__1::__value_type<Class, int> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<Class, int>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<Class, std::__1::__value_type<Class, int>, std::__1::less<Class>, true> > { unsigned long long __value_; } __pair3_; } __tree_; } _classToIndex;
}

+ (id)sharedRegistry;
+ (void)setIntializationHandler:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)registerClass:(Class)a0 withField:(id)a1;
- (Class)classForIndex:(int)a0;
- (const struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } *)nameForIndex:(int)a0;
- (int)indexForClass:(Class)a0;

@end
