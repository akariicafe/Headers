@class NSURL;

@interface _LSApplicationRecordEnumerator : _LSRecordEnumerator {
    NSURL *_volumeURL;
    unsigned long long _options;
    struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *__value_; } __end_cap_; } _bundleIdentifiersOrUnits;
    unsigned int _container;
}

@property unsigned int bundleClass;

- (BOOL)_getObject:(id *)a0 atIndex:(unsigned long long)a1 context:(struct LSContext { id x0; } *)a2;
- (id).cxx_construct;
- (id)initWithContext:(struct LSContext { id x0; } *)a0 volumeURL:(id)a1 options:(unsigned long long)a2;
- (BOOL)_prepareWithContext:(struct LSContext { id x0; } *)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_applicationRecordWithContext:(struct LSContext { id x0; } *)a0 bundleIdentifierOrUnit:(unsigned int)a1;
- (void).cxx_destruct;
- (BOOL)_getContainer:(unsigned int *)a0 context:(struct LSContext { id x0; } *)a1 error:(id *)a2;

@end
