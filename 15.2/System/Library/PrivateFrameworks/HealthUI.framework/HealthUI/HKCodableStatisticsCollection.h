@class HKCodableDateComponents, NSMutableArray;

@interface HKCodableStatisticsCollection : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasStatisticsInterval;
@property (retain, nonatomic) HKCodableDateComponents *statisticsInterval;
@property (retain, nonatomic) NSMutableArray *statistics;

+ (Class)statisticsType;

- (id)statisticsAtIndex:(unsigned long long)a0;
- (void)addStatistics:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearStatistics;
- (unsigned long long)statisticsCount;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
