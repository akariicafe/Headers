@class HKCodableDateInterval, HKCodableQuantity;

@interface HKCodableSummaryVisualizationPoint : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasDateInterval;
@property (retain, nonatomic) HKCodableDateInterval *dateInterval;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) HKCodableQuantity *value;
@property (readonly, nonatomic) BOOL hasValue2;
@property (retain, nonatomic) HKCodableQuantity *value2;

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
