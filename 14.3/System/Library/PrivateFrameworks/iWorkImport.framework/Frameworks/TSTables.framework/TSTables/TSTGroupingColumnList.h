@class NSArray;

@interface TSTGroupingColumnList : TSKSosBase <NSCopying> {
    NSArray *_groupingColumns;
}

@property (readonly, nonatomic) NSArray *groupingColumns;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArchive:(const struct GroupColumnListArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TST::GroupColumnArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)count;
- (id)ruleAtIndex:(unsigned long long)a0;
- (void)encodeToArchive:(struct GroupColumnListArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TST::GroupColumnArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; } *)a0 archiver:(id)a1;
- (id)ruleAtGroupLevel:(unsigned char)a0;
- (BOOL)p_isEqual:(id)a0;
- (void)replaceRuleAtIndex:(unsigned long long)a0 withRule:(id)a1;
- (void)addRule:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeRuleAtIndex:(unsigned long long)a0;
- (void)moveRuleFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)changeGroupingTypeForRuleIndex:(unsigned long long)a0 toType:(int)a1;
- (id)initWithGroupingColumns:(id)a0;
- (BOOL)isGroupingColumnUidsEqual:(id)a0;
- (void)addRule:(id)a0 atGroupLevel:(unsigned char)a1;
- (void)removeRuleAtGroupLevel:(unsigned char)a0;
- (void)moveRuleFromGroupLevel:(unsigned char)a0 toLevel:(unsigned char)a1;
- (void)changeGroupingTypeForGroupLevel:(unsigned char)a0 toType:(int)a1;
- (void)replaceRuleAtGroupLevel:(unsigned char)a0 withRule:(id)a1;

@end
