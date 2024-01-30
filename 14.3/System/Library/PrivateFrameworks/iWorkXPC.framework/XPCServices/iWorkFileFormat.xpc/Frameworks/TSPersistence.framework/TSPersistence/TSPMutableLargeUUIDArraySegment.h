@interface TSPMutableLargeUUIDArraySegment : TSPAbstractMutableLargeArraySegment

- (void)saveToMessage:(struct LargeUUIDArraySegment { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::UUID> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct LargeArraySegment *x5; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromMessage:(const struct LargeUUIDArraySegment { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::UUID> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct LargeArraySegment *x5; } *)a0 unarchiver:(id)a1;
- (unsigned long long)estimatedByteSizeOfElement:(id)a0;

@end
