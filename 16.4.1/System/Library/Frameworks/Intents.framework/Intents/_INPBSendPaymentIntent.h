@class _INPBContact, NSString, _INPBString, _INPBCurrencyAmount, _INPBIntentMetadata;

@interface _INPBSendPaymentIntent : PBCodable <_INPBSendPaymentIntent, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBCurrencyAmount *currencyAmount;
@property (readonly, nonatomic) BOOL hasCurrencyAmount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (retain, nonatomic) _INPBString *note;
@property (readonly, nonatomic) BOOL hasNote;
@property (retain, nonatomic) _INPBContact *payee;
@property (readonly, nonatomic) BOOL hasPayee;
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

@end
