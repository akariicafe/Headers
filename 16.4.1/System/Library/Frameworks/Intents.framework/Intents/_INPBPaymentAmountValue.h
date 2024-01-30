@class _INPBCurrencyAmountValue, NSString;

@interface _INPBPaymentAmountValue : PBCodable <_INPBPaymentAmountValue, NSSecureCoding, NSCopying> {
    struct { unsigned char amountType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int amountType;
@property (nonatomic) BOOL hasAmountType;
@property (retain, nonatomic) _INPBCurrencyAmountValue *value;
@property (readonly, nonatomic) BOOL hasValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (int)StringAsAmountType:(id)a0;
- (id)amountTypeAsString:(int)a0;

@end
