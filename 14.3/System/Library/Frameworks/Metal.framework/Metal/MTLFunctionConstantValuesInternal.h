@interface MTLFunctionConstantValuesInternal : MTLFunctionConstantValues <MTLFunctionConstantSPI> {
    struct MTLConstantStorage { struct map<std::__1::basic_string<char>, MTLConstantStorage::ConstantData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, MTLConstantStorage::ConstantData> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, MTLConstantStorage::ConstantData>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, MTLConstantStorage::ConstantData>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, MTLConstantStorage::ConstantData> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, MTLConstantStorage::ConstantData>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, MTLConstantStorage::ConstantData>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x0; } x2; } x0; } x0; struct map<unsigned short, MTLConstantStorage::ConstantData, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, MTLConstantStorage::ConstantData> > > { struct __tree<std::__1::__value_type<unsigned short, MTLConstantStorage::ConstantData>, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, MTLConstantStorage::ConstantData>, std::__1::less<unsigned short>, true>, std::__1::allocator<std::__1::__value_type<unsigned short, MTLConstantStorage::ConstantData> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned short, MTLConstantStorage::ConstantData>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, MTLConstantStorage::ConstantData>, std::__1::less<unsigned short>, true> > { unsigned long long x0; } x2; } x0; } x1; } *_constantStorage;
}

- (void)setConstantValue:(const void *)a0 type:(unsigned long long)a1 withName:(id)a2;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;
- (void)dealloc;
- (const void *)constantValueWithFunctionConstant:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)newIndexedConstantArray;
- (void)setConstantValue:(const void *)a0 type:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (id)newNamedConstantArray;
- (void)setConstantValues:(const void *)a0 type:(unsigned long long)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void *)serializedConstantDataForFunction:(id)a0 dataSize:(unsigned long long *)a1 errorMessage:(id *)a2;

@end
