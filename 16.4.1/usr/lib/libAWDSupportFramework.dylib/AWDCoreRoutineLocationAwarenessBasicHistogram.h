@interface AWDCoreRoutineLocationAwarenessBasicHistogram : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _counts;
}

@property (readonly, nonatomic) unsigned long long countsCount;
@property (readonly, nonatomic) int *counts;

- (void)clearCounts;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (int)countAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)setCounts:(int *)a0 count:(unsigned long long)a1;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addCount:(int)a0;

@end
