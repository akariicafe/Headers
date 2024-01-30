@class NSString, INCurrencyAmount, NSDateComponents, INBillPayee;

@interface INBillDetails : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) INBillPayee *billPayee;
@property (copy, nonatomic) INCurrencyAmount *amountDue;
@property (copy, nonatomic) INCurrencyAmount *minimumDue;
@property (copy, nonatomic) INCurrencyAmount *lateFee;
@property (copy, nonatomic) NSDateComponents *dueDate;
@property (copy, nonatomic) NSDateComponents *paymentDate;
@property (nonatomic) long long billType;
@property (nonatomic) long long paymentStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithBillType:(long long)a0 paymentStatus:(long long)a1 billPayee:(id)a2 amountDue:(id)a3 minimumDue:(id)a4 lateFee:(id)a5 dueDate:(id)a6 paymentDate:(id)a7;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;

@end
