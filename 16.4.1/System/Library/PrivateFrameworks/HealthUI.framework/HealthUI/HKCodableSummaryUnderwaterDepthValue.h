@class HKCodableQuantity;

@interface HKCodableSummaryUnderwaterDepthValue : PBCodable <NSCopying> {
    struct APPLE_101 { unsigned char dateData : 1; unsigned char valueClamped : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) HKCodableQuantity *value;
@property (nonatomic) BOOL hasValueClamped;
@property (nonatomic) BOOL valueClamped;
@property (nonatomic) BOOL hasDateData;
@property (nonatomic) double dateData;

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
