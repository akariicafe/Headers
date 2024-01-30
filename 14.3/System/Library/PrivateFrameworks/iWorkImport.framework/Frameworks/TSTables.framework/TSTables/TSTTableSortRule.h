@interface TSTTableSortRule : NSObject <NSCopying>

@property (readonly, nonatomic) struct TSUModelColumnIndex { unsigned short _column; } baseColumnIndex;
@property (readonly, nonatomic) int direction;

+ (id)ruleWithBaseColumnIndex:(struct TSUModelColumnIndex { unsigned short x0; })a0 direction:(int)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initFromArchive:(const struct TableSortOrderArchive_SortRuleArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; unsigned int x4; int x5; } *)a0;
- (void)encodeToArchive:(struct TableSortOrderArchive_SortRuleArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; unsigned int x4; int x5; } *)a0;
- (id)initWithBaseColumnIndex:(struct TSUModelColumnIndex { unsigned short x0; })a0 direction:(int)a1;
- (id)ruleByChangingBaseColumnIndexTo:(struct TSUModelColumnIndex { unsigned short x0; })a0;
- (id)ruleByChangingDirectionTo:(int)a0;

@end
