@class HKCodableChartDataSourceQueryData, HKCodableDateInterval;

@interface HKCodableChartSharableModel : PBCodable <NSCopying> {
    struct APPLE_176 { unsigned char latestSupportedVersion : 1; unsigned char minimumSupportedVersion : 1; } _has;
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

@end
