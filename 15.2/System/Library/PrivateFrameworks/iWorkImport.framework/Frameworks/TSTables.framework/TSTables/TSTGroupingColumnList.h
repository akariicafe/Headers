@class NSArray;

@interface TSTGroupingColumnList : TSKSosBase <NSCopying> {
    NSArray *_groupingColumns;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSArray *groupingColumns;

- (BOOL)hasPrefix:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithArchive:(const void *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)ruleAtIndex:(unsigned long long)a0;
- (void)encodeToArchive:(void *)a0 archiver:(id)a1;
- (id)ruleAtGroupLevel:(unsigned char)a0;
- (BOOL)p_isEqual:(id)a0;
- (void)replaceRuleAtIndex:(unsigned long long)a0 withRule:(id)a1;
- (void)addRule:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeRuleAtIndex:(unsigned long long)a0;
- (void)moveRuleFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)changeGroupingTypeForRuleIndex:(unsigned long long)a0 toType:(long long)a1;
- (id)initWithGroupingColumns:(id)a0;
- (id)groupingColumnForColumnUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isGroupingColumnUidsEqual:(id)a0;
- (void)appendRules:(id)a0;
- (void)addRule:(id)a0 atGroupLevel:(unsigned char)a1;
- (void)removeRuleAtGroupLevel:(unsigned char)a0;
- (void)moveRuleFromGroupLevel:(unsigned char)a0 toLevel:(unsigned char)a1;
- (void)changeGroupingTypeForGroupLevel:(unsigned char)a0 toType:(long long)a1;
- (void)replaceRuleAtGroupLevel:(unsigned char)a0 withRule:(id)a1;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; })groupingColumnUidList;

@end
