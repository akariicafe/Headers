@class _INPBContact, NSString, _INPBCurrencyAmount, _INPBString, _INPBPaymentMethodValue;

@interface _INPBPaymentRecord : PBCodable <_INPBPaymentRecord, NSSecureCoding, NSCopying> {
    struct { unsigned char status : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBCurrencyAmount *currencyAmount;
@property (readonly, nonatomic) BOOL hasCurrencyAmount;
@property (retain, nonatomic) _INPBCurrencyAmount *feeAmount;
@property (readonly, nonatomic) BOOL hasFeeAmount;
@property (retain, nonatomic) _INPBString *note;
@property (readonly, nonatomic) BOOL hasNote;
@property (retain, nonatomic) _INPBContact *payee;
@property (readonly, nonatomic) BOOL hasPayee;
@property (retain, nonatomic) _INPBContact *payer;
@property (readonly, nonatomic) BOOL hasPayer;
@property (retain, nonatomic) _INPBPaymentMethodValue *paymentMethod;
@property (readonly, nonatomic) BOOL hasPaymentMethod;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsStatus:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)statusAsString:(int)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;

@end
