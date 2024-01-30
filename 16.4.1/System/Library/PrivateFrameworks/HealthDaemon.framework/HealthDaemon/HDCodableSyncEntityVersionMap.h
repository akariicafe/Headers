@class NSMutableArray;

@interface HDCodableSyncEntityVersionMap : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *entityVersionRanges;

+ (Class)entityVersionRangeType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addEntityVersionRange:(id)a0;
- (void)clearEntityVersionRanges;
- (id)entityVersionRangeAtIndex:(unsigned long long)a0;
- (unsigned long long)entityVersionRangesCount;

@end
