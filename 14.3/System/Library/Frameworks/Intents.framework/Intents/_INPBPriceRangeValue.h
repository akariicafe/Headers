@class NSString, _INPBDecimalNumberValue, _INPBValueMetadata;

@interface _INPBPriceRangeValue : PBCodable <_INPBPriceRangeValue, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) BOOL hasCurrencyCode;
@property (retain, nonatomic) _INPBDecimalNumberValue *maximumPrice;
@property (readonly, nonatomic) BOOL hasMaximumPrice;
@property (retain, nonatomic) _INPBDecimalNumberValue *minimumPrice;
@property (readonly, nonatomic) BOOL hasMinimumPrice;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
