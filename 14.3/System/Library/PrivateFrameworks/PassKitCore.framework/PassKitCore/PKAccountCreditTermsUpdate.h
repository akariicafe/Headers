@class NSString, PKCreditAccountRates, PKCurrencyAmount;

@interface PKAccountCreditTermsUpdate : NSObject <NSSecureCoding, PKRecordObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (nonatomic) long long initiator;
@property (copy, nonatomic) NSString *requestIdentifier;
@property (copy, nonatomic) NSString *adverseActionContentIdentifier;
@property (retain, nonatomic) PKCurrencyAmount *creditLimit;
@property (retain, nonatomic) PKCreditAccountRates *rates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recordNamePrefix;
+ (id)recordType;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithRecord:(id)a0;
- (id)initWithRecord:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
