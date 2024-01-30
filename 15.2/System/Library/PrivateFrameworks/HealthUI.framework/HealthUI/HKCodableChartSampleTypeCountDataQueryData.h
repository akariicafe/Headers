@class NSMutableArray;

@interface HKCodableChartSampleTypeCountDataQueryData : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *timePeriodToCounts;

+ (Class)timePeriodToCountType;

- (void)clearTimePeriodToCounts;
- (unsigned long long)timePeriodToCountsCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)timePeriodToCountAtIndex:(unsigned long long)a0;
- (void)addTimePeriodToCount:(id)a0;
- (id)dictionaryRepresentation;

@end
