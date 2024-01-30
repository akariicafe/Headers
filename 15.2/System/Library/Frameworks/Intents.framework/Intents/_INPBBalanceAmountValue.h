@class NSString, _INPBCurrencyAmountValue, _INPBDecimalNumberValue, _INPBValueMetadata;

@interface _INPBBalanceAmountValue : PBCodable <_INPBBalanceAmountValue, NSSecureCoding, NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBCurrencyAmountValue *currencyAmount;
@property (readonly, nonatomic) BOOL hasCurrencyAmount;
@property (retain, nonatomic) _INPBDecimalNumberValue *customAmount;
@property (readonly, nonatomic) BOOL hasCustomAmount;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (BOOL)readFrom:(id)a0;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
