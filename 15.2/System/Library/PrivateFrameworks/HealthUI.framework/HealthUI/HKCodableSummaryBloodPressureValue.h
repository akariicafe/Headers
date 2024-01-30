@class HKCodableQuantity;

@interface HKCodableSummaryBloodPressureValue : PBCodable <NSCopying> {
    struct { unsigned char timestampData : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSystolicValue;
@property (retain, nonatomic) HKCodableQuantity *systolicValue;
@property (readonly, nonatomic) BOOL hasDiastolicValue;
@property (retain, nonatomic) HKCodableQuantity *diastolicValue;
@property (nonatomic) BOOL hasTimestampData;
@property (nonatomic) double timestampData;

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
