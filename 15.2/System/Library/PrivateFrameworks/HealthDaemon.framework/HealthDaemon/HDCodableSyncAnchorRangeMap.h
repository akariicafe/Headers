@class NSMutableArray;

@interface HDCodableSyncAnchorRangeMap : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *anchorRanges;

+ (Class)anchorRangesType;

- (id)anchorRangesAtIndex:(unsigned long long)a0;
- (unsigned long long)anchorRangesCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addAnchorRanges:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)clearAnchorRanges;
- (id)dictionaryRepresentation;

@end
