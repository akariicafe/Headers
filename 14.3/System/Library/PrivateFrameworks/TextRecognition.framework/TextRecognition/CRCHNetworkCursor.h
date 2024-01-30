@interface CRCHNetworkCursor : NSObject {
    struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *__value_; } __end_cap_; } _edgeIndexes;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)addEdgeIndex:(unsigned long long)a0;
- (unsigned long long)edgeIndexCount;
- (unsigned long long)edgeIndexAtPosition:(unsigned long long)a0;

@end
