@class NSMutableArray;

@interface HKCodableQuantitySeriesEnumerationResultCollection : PBCodable <NSCopying> {
    struct { unsigned char latestSampleStartTime : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *results;
@property (nonatomic) BOOL hasLatestSampleStartTime;
@property (nonatomic) double latestSampleStartTime;

+ (Class)resultsType;

- (id)resultsAtIndex:(unsigned long long)a0;
- (void)addResults:(id)a0;
- (unsigned long long)resultsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearResults;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
