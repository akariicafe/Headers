@class HKCodableChartDataSourceQueryData, HKCodableDateInterval;

@interface HKCodableChartSharableModel : PBCodable <NSCopying> {
    struct { unsigned char latestSupportedVersion : 1; unsigned char minimumSupportedVersion : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasMonthData;
@property (retain, nonatomic) HKCodableChartDataSourceQueryData *monthData;
@property (readonly, nonatomic) BOOL hasMonthDateInterval;
@property (retain, nonatomic) HKCodableDateInterval *monthDateInterval;
@property (readonly, nonatomic) BOOL hasSixMonthData;
@property (retain, nonatomic) HKCodableChartDataSourceQueryData *sixMonthData;
@property (readonly, nonatomic) BOOL hasSixMonthDateInterval;
@property (retain, nonatomic) HKCodableDateInterval *sixMonthDateInterval;
@property (nonatomic) BOOL hasLatestSupportedVersion;
@property (nonatomic) long long latestSupportedVersion;
@property (nonatomic) BOOL hasMinimumSupportedVersion;
@property (nonatomic) long long minimumSupportedVersion;

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

@end
