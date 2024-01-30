@class NSString;

@interface _LSLinkedChildApplicationRecordEnumerator : _LSRecordEnumerator {
    struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *__value_; } __end_cap_; } _units;
    NSString *_parentBundleID;
    unsigned long long _options;
}

- (BOOL)_prepareWithContext:(struct LSContext { id x0; } *)a0 error:(id *)a1;
- (id)initWithContext:(struct LSContext { id x0; } *)a0 parentBundleID:(id)a1 options:(unsigned long long)a2;
- (BOOL)_getObject:(id *)a0 atIndex:(unsigned long long)a1 context:(struct LSContext { id x0; } *)a2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;

@end
