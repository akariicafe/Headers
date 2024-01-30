@class _INPBBillDetailsValue, _INPBPaymentAmountValue, _INPBDateTimeRange, NSString, _INPBString, _INPBFinancialAccountValue;

@interface _INPBPayBillIntentResponse : PBCodable <_INPBPayBillIntentResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBBillDetailsValue *billDetails;
@property (readonly, nonatomic) BOOL hasBillDetails;
@property (retain, nonatomic) _INPBFinancialAccountValue *fromAccount;
@property (readonly, nonatomic) BOOL hasFromAccount;
@property (retain, nonatomic) _INPBPaymentAmountValue *transactionAmount;
@property (readonly, nonatomic) BOOL hasTransactionAmount;
@property (retain, nonatomic) _INPBString *transactionNote;
@property (readonly, nonatomic) BOOL hasTransactionNote;
@property (retain, nonatomic) _INPBDateTimeRange *transactionScheduledDate;
@property (readonly, nonatomic) BOOL hasTransactionScheduledDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
