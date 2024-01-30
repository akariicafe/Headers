@interface TPAllFootnoteSelection : TSKSelection

+ (Class)archivedSelectionClass;

- (id)initWithArchive:(const struct AllFootnoteSelectionArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)saveToArchive:(struct AllFootnoteSelectionArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; } *)a0 archiver:(id)a1;

@end
