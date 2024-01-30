@class HKCodableQuantity;

@interface HKCodableSummaryBloodPressureValue : PBCodable <NSCopying> {
    struct APPLE_158 { unsigned char timestampData : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSystolicValue;
@property (retain, nonatomic) HKCodableQuantity *systolicValue;
@property (readonly, nonatomic) BOOL hasDiastolicValue;
@property (retain, nonatomic) HKCodableQuantity *diastolicValue;
@property (nonatomic) BOOL hasTimestampData;
@property (nonatomic) double timestampData;

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
