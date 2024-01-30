@class NSArray;

@interface TSTColumnAggregateList : TSKSosBase <NSCopying> {
    NSArray *_columnAggregates;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSArray *asArray;
@property (readonly, nonatomic) NSArray *columnAggregateUuids;

- (id)initWithArchive:(const void *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeToArchive:(void *)a0 archiver:(id)a1;
- (id)aggregateAtIndex:(unsigned long long)a0;
- (id)aggregatesOnLevel:(unsigned char)a0;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; })columnAggregateUidList;
- (id)initWithColumnAggregates:(id)a0;
- (BOOL)isFunctionallyEquivalent:(id)a0;

@end
