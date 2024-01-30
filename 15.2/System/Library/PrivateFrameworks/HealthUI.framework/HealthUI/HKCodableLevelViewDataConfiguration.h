@class NSMutableArray;

@interface HKCodableLevelViewDataConfiguration : PBCodable <NSCopying>

@property (nonatomic) double normalizedValue;
@property (retain, nonatomic) NSMutableArray *sortedNormalizedBuckets;

+ (Class)sortedNormalizedBucketsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addSortedNormalizedBuckets:(id)a0;
- (unsigned long long)sortedNormalizedBucketsCount;
- (void)clearSortedNormalizedBuckets;
- (id)sortedNormalizedBucketsAtIndex:(unsigned long long)a0;

@end
