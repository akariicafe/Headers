@interface _LSExtensionPointRecordEnumerator : _LSRecordEnumerator {
    struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *__value_; } __end_cap_; } _extensionIDs;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)_prepareWithContext:(struct LSContext { id x0; } *)a0 error:(id *)a1;
- (BOOL)_getObject:(id *)a0 atIndex:(unsigned long long)a1 context:(struct LSContext { id x0; } *)a2;

@end
