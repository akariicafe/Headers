@class NSMutableArray;

@interface HKCodableLevelViewDataConfiguration : PBCodable <NSCopying>

@property (nonatomic) double normalizedValue;
@property (retain, nonatomic) NSMutableArray *sortedNormalizedBuckets;

+ (Class)sortedNormalizedBucketsType;

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
- (id)sortedNormalizedBucketsAtIndex:(unsigned long long)a0;
- (void)addSortedNormalizedBuckets:(id)a0;
- (void)clearSortedNormalizedBuckets;
- (unsigned long long)sortedNormalizedBucketsCount;

@end
