@class __end_cap_, __end_;

@interface FICompoundNodeIterator : FINodeIterator {
    struct vector<FINodeIterator *, std::allocator<FINodeIterator *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<FINodeIterator *__strong *, std::allocator<FINodeIterator *>> { id *__value_; } x1; } _subIterators;
    unsigned long long fCurrentIterator;
}

- (id)next;
- (id)first;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)estimatedSize;
- (BOOL)fullyPopulated;
- (id)initWithFINodes:(id)a0 iteratorIncludingInvisibleItems:(BOOL)a1;

@end
