@class NSMutableArray;

@interface HKCodableSummaryCorrelatedTrendResults : PBCodable <NSCopying> {
    struct APPLE_171 { unsigned char latestSupportedVersion : 1; unsigned char minimumSupportedVersion : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *trendValues;
@property (nonatomic) BOOL hasLatestSupportedVersion;
@property (nonatomic) long long latestSupportedVersion;
@property (nonatomic) BOOL hasMinimumSupportedVersion;
@property (nonatomic) long long minimumSupportedVersion;

+ (Class)trendValuesType;

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
- (void)addTrendValues:(id)a0;
- (void)clearTrendValues;
- (id)trendValuesAtIndex:(unsigned long long)a0;
- (unsigned long long)trendValuesCount;

@end
