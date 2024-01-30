@class HKCodableDateComponents, NSMutableArray;

@interface HKCodableChartTimePeriodSeriesDataSourceData : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasStatisticsInterval;
@property (retain, nonatomic) HKCodableDateComponents *statisticsInterval;
@property (retain, nonatomic) NSMutableArray *dateIntervalsToTotals;
@property (retain, nonatomic) NSMutableArray *intervalCounts;

+ (Class)dateIntervalsToTotalsType;
+ (Class)intervalCountsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearIntervalCounts;
- (id)dateIntervalsToTotalsAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)clearDateIntervalsToTotals;
- (void)addIntervalCounts:(id)a0;
- (unsigned long long)dateIntervalsToTotalsCount;
- (id)intervalCountsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)intervalCountsCount;
- (id)dictionaryRepresentation;
- (void)addDateIntervalsToTotals:(id)a0;

@end
