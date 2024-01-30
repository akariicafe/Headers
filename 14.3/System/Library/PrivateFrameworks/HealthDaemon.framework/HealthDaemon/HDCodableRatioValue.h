@class HDCodableCodedQuantity;

@interface HDCodableRatioValue : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasNumerator;
@property (retain, nonatomic) HDCodableCodedQuantity *numerator;
@property (readonly, nonatomic) BOOL hasDenominator;
@property (retain, nonatomic) HDCodableCodedQuantity *denominator;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
