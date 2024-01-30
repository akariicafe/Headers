@class PKPaymentTransactionRewards, NSString, NSSet, PKCurrencyAmount;

@interface PKAccountRewards : NSObject <NSSecureCoding, PKRecordObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) PKCurrencyAmount *currencyAmount;
@property (copy, nonatomic) NSString *status;
@property (nonatomic) long long statusCode;
@property (retain, nonatomic) PKPaymentTransactionRewards *rewards;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSSet *transactionIdentifiers;
@property (copy, nonatomic) NSSet *rewardsAddedIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recordType;
+ (id)recordNamePrefix;

- (id)initWithRecord:(id)a0;
- (void)encodeWithRecord:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToAccountEvent:(id)a0;

@end
