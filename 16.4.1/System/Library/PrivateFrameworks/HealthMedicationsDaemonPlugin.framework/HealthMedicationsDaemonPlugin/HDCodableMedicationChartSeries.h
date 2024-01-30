@class NSData;

@interface HDCodableMedicationChartSeries : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasMonthData;
@property (retain, nonatomic) NSData *monthData;
@property (readonly, nonatomic) BOOL hasSixMonthsData;
@property (retain, nonatomic) NSData *sixMonthsData;

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
