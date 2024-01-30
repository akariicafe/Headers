@interface XRIndexSet : NSObject <NSCopying, NSMutableCopying> {
    struct XRIndexSetImpl<unsigned long long, 4, std::allocator<xray::internal::RangeImp<unsigned long long>>> { struct multiset<xray::internal::RangeImp<unsigned long long>, std::less<xray::internal::RangeImp<unsigned long long>>, std::allocator<xray::internal::RangeImp<unsigned long long>>> { struct __tree<xray::internal::RangeImp<unsigned long long>, std::less<xray::internal::RangeImp<unsigned long long>>, std::allocator<xray::internal::RangeImp<unsigned long long>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<xray::internal::RangeImp<unsigned long long>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<xray::internal::RangeImp<unsigned long long>>> { unsigned long long __value_; } __pair3_; } __tree_; } _ranges; struct array<xray::internal::RangeImp<unsigned long long>, 4UL> { struct RangeImp<unsigned long long> { unsigned long long first; unsigned long long last; } __elems_[4]; } _cache; BOOL _cacheIsValid; } _impl;
}

+ (id)indexSetWithIndex:(unsigned long long)a0;
+ (id)indexSetWithIndexesInRange:(struct _XRIndexRange { unsigned long long x0; unsigned long long x1; })a0;

- (BOOL)isEmpty;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)lastIndex;
- (id).cxx_construct;
- (id)initWithIndex:(unsigned long long)a0;
- (BOOL)containsIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (unsigned long long)firstIndex;
- (void)enumerateIndexesUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)enumerateRangesUsingBlock:(id /* block */)a0;
- (BOOL)intersectsIndexesInRange:(struct _XRIndexRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)countEquals:(unsigned long long)a0;
- (id)initWithIndexes:(struct _XRIndexRange { unsigned long long x0; unsigned long long x1; })a0;

@end
