@class NSArray;

@interface TSTColumnAggregateList : TSKSosBase <NSCopying> {
    NSArray *_columnAggregates;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSArray *asArray;
@property (readonly, nonatomic) NSArray *columnAggregateUuids;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithArchive:(const void *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeToArchive:(void *)a0 archiver:(id)a1;
- (id)initWithColumnAggregates:(id)a0;
- (id)aggregateAtIndex:(unsigned long long)a0;
- (id)aggregatesOnLevel:(unsigned char)a0;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; })columnAggregateUidList;

@end
