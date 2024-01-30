@class _INPBBillPayeeValue, _INPBDateTimeRange, NSString, _INPBIntentMetadata;

@interface _INPBSearchForBillsIntent : PBCodable <_INPBSearchForBillsIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char billType : 1; unsigned char status : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBBillPayeeValue *billPayee;
@property (readonly, nonatomic) BOOL hasBillPayee;
@property (nonatomic) int billType;
@property (nonatomic) BOOL hasBillType;
@property (retain, nonatomic) _INPBDateTimeRange *dueDateRange;
@property (readonly, nonatomic) BOOL hasDueDateRange;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (retain, nonatomic) _INPBDateTimeRange *paymentDateRange;
@property (readonly, nonatomic) BOOL hasPaymentDateRange;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
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
