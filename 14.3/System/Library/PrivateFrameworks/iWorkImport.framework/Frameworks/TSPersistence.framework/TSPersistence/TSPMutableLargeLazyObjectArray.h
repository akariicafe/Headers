@interface TSPMutableLargeLazyObjectArray : TSPAbstractMutableLargeArray

+ (Class)arraySegmentClass;

- (void)saveToMessage:(struct LargeLazyObjectArray { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct LargeArray *x4; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromMessage:(const struct LargeLazyObjectArray { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct LargeArray *x4; } *)a0 unarchiver:(id)a1;
- (id)convertSegmentElementToElement:(id)a0;
- (id)convertElementToSegmentElement:(id)a0;

@end
