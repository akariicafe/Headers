@class NSMutableArray;

@interface HKCodableSummaryTrendResults : PBCodable <NSCopying> {
    struct { unsigned char latestSupportedVersion : 1; unsigned char minimumSupportedVersion : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *trendValues;
@property (nonatomic) BOOL hasLatestSupportedVersion;
@property (nonatomic) long long latestSupportedVersion;
@property (nonatomic) BOOL hasMinimumSupportedVersion;
@property (nonatomic) long long minimumSupportedVersion;

+ (Class)trendValuesType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)trendValuesAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (void)clearTrendValues;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)trendValuesCount;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)addTrendValues:(id)a0;
- (id)dictionaryRepresentation;

@end
