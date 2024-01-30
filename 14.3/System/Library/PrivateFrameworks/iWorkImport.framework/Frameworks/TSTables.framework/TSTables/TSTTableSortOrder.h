@class NSIndexSet, NSArray;

@interface TSTTableSortOrder : NSObject <NSCopying>

@property (retain, nonatomic) NSIndexSet *cachedIndexes;
@property (readonly, nonatomic) NSArray *rules;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) NSIndexSet *baseColumnIndices;
@property (readonly, nonatomic) BOOL empty;
@property (readonly, nonatomic) unsigned long long ruleCount;

+ (id)sortOrderWithRules:(id)a0 type:(int)a1;
+ (id)sortOrderWithBaseColumn:(struct TSUModelColumnIndex { unsigned short x0; })a0 direction:(int)a1 type:(int)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initFromArchive:(const struct TableSortOrderArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TST::TableSortOrderArchive_SortRuleArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; int x5; } *)a0;
- (void)encodeToArchive:(struct TableSortOrderArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TST::TableSortOrderArchive_SortRuleArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; int x5; } *)a0;
- (id)initWithRules:(id)a0 type:(int)a1;
- (id)sortOrderByChangingTypeTo:(int)a0;
- (id)sortOrderByAddingRule:(id)a0;
- (id)sortOrderByRemovingRuleAtIndex:(unsigned long long)a0;
- (id)sortOrderByReplacingRuleAtIndex:(unsigned long long)a0 withRule:(id)a1;
- (id)sortOrderByReplacingRulesWithRules:(id)a0;
- (id)sortOrderByRemovingBaseColumnIndices:(id)a0;
- (BOOL)containsAnyRulesInBaseColumns:(id)a0;

@end
