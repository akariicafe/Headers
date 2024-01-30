@class _INPBBillPayeeValue, _INPBCurrencyAmountValue, _INPBDateTime, _INPBValueMetadata, NSString;

@interface _INPBBillDetailsValue : PBCodable <_INPBBillDetailsValue, NSSecureCoding, NSCopying> {
    struct { unsigned char billType : 1; unsigned char status : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBCurrencyAmountValue *amountDue;
@property (readonly, nonatomic) BOOL hasAmountDue;
@property (retain, nonatomic) _INPBBillPayeeValue *billPayee;
@property (readonly, nonatomic) BOOL hasBillPayee;
@property (nonatomic) int billType;
@property (nonatomic) BOOL hasBillType;
@property (retain, nonatomic) _INPBDateTime *dueDate;
@property (readonly, nonatomic) BOOL hasDueDate;
@property (retain, nonatomic) _INPBCurrencyAmountValue *lateFee;
@property (readonly, nonatomic) BOOL hasLateFee;
@property (retain, nonatomic) _INPBCurrencyAmountValue *minimumDue;
@property (readonly, nonatomic) BOOL hasMinimumDue;
@property (retain, nonatomic) _INPBDateTime *paymentDate;
@property (readonly, nonatomic) BOOL hasPaymentDate;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)billTypeAsString:(int)a0;
- (int)StringAsBillType:(id)a0;
- (id)dictionaryRepresentation;

@end
