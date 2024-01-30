@class HKCodableDateComponents, NSMutableArray;

@interface HKCodableChartTimePeriodSeriesDataSourceData : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasStatisticsInterval;
@property (retain, nonatomic) HKCodableDateComponents *statisticsInterval;
@property (retain, nonatomic) NSMutableArray *dateIntervalsToTotals;
@property (retain, nonatomic) NSMutableArray *intervalCounts;

+ (Class)dateIntervalsToTotalsType;
+ (Class)intervalCountsType;

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
- (void)addDateIntervalsToTotals:(id)a0;
- (void)addIntervalCounts:(id)a0;
- (void)clearDateIntervalsToTotals;
- (void)clearIntervalCounts;
- (id)dateIntervalsToTotalsAtIndex:(unsigned long long)a0;
- (unsigned long long)dateIntervalsToTotalsCount;
- (id)intervalCountsAtIndex:(unsigned long long)a0;
- (unsigned long long)intervalCountsCount;

@end
