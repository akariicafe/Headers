@class NSDate, NSString, NSArray, PKInstallmentPlanMerchant, PKInstallmentPlanProduct, PKInstallmentPlanSummary, PKInstallmentPlanPayment, PKPaymentTransactionRewards, NSDecimalNumber;

@interface PKInstallmentPlan : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (retain, nonatomic) NSDecimalNumber *apr;
@property (nonatomic) unsigned long long duration;
@property (copy, nonatomic) NSString *currencyCode;
@property (retain, nonatomic) NSDecimalNumber *totalAmount;
@property (retain, nonatomic) NSDecimalNumber *totalProductAmount;
@property (retain, nonatomic) NSDecimalNumber *totalInterestAmount;
@property (nonatomic) long long periodType;
@property (copy, nonatomic) NSString *transactionReferenceIdentifier;
@property (retain, nonatomic) PKInstallmentPlanSummary *summary;
@property (retain, nonatomic) PKInstallmentPlanMerchant *merchant;
@property (retain, nonatomic) PKInstallmentPlanProduct *product;
@property (copy, nonatomic) NSArray *lineItems;
@property (copy, nonatomic) NSArray *payments;
@property (retain, nonatomic) PKPaymentTransactionRewards *rewards;
@property (readonly, nonatomic) NSDecimalNumber *remainingAmount;
@property (readonly, nonatomic) NSDecimalNumber *totalBilled;
@property (readonly, nonatomic) PKInstallmentPlanPayment *nextPaymentDue;
@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (nonatomic) BOOL userViewedIntroduction;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToInstallmentPlan:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
