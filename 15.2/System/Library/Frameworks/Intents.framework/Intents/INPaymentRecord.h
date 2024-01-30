@class NSString, INCurrencyAmount, INPerson, INPaymentMethod;

@interface INPaymentRecord : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) INPerson *payee;
@property (readonly, copy, nonatomic) INPerson *payer;
@property (readonly, copy, nonatomic) INCurrencyAmount *currencyAmount;
@property (readonly, copy, nonatomic) NSString *note;
@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) INPaymentMethod *paymentMethod;
@property (readonly, copy, nonatomic) INCurrencyAmount *feeAmount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)_dictionaryRepresentation;
- (id)_intents_cacheableObjects;
- (void)encodeWithCoder:(id)a0;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (void)_intents_updateContainerWithCache:(id)a0;
- (id)initWithPayee:(id)a0 payer:(id)a1 currencyAmount:(id)a2 paymentMethod:(id)a3 note:(id)a4 status:(long long)a5;
- (id)initWithPayee:(id)a0 payer:(id)a1 currencyAmount:(id)a2 paymentMethod:(id)a3 note:(id)a4 status:(long long)a5 feeAmount:(id)a6;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
