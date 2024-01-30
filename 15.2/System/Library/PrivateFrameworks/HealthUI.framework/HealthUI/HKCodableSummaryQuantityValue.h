@class HKCodableQuantity;

@interface HKCodableSummaryQuantityValue : PBCodable <NSCopying> {
    struct { unsigned char dateData : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) HKCodableQuantity *value;
@property (nonatomic) BOOL hasDateData;
@property (nonatomic) double dateData;

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
