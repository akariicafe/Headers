@class NSMutableArray;

@interface HKCodableChartHorizontalTimePeriodDataSourceData : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *dateIntervalsByValues;

+ (Class)dateIntervalsByValueType;

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
- (void)addDateIntervalsByValue:(id)a0;
- (void)clearDateIntervalsByValues;
- (id)dateIntervalsByValueAtIndex:(unsigned long long)a0;
- (unsigned long long)dateIntervalsByValuesCount;

@end
