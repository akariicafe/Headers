@interface TSTTableViewColumnSortRule : TSTTableSortRule

@property (readonly, nonatomic) struct TSUViewColumnIndex { unsigned short _column; } viewColumnIndex;

+ (id)ruleWithViewColumnIndex:(struct TSUViewColumnIndex { unsigned short x0; })a0 direction:(int)a1;

- (id)initFromArchive:(const struct TableSortOrderArchive_SortRuleArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; unsigned int x4; int x5; } *)a0;
- (void)encodeToArchive:(struct TableSortOrderArchive_SortRuleArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; unsigned int x4; int x5; } *)a0;
- (id)initWithViewColumnIndex:(struct TSUViewColumnIndex { unsigned short x0; })a0 direction:(int)a1;

@end
