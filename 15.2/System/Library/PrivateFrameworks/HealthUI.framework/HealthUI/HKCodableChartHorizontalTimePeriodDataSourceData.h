@class NSMutableArray;

@interface HKCodableChartHorizontalTimePeriodDataSourceData : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *dateIntervalsByValues;

+ (Class)dateIntervalsByValueType;

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
- (void)addDateIntervalsByValue:(id)a0;
- (unsigned long long)dateIntervalsByValuesCount;
- (void)clearDateIntervalsByValues;
- (id)dateIntervalsByValueAtIndex:(unsigned long long)a0;

@end
