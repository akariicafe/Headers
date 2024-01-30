@class NSArray, NSDictionary, PKCurrencyAmount, NSDate, PKPaymentTransactionGroup;

@interface PKSpendingSummary : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long summaryType;
@property (nonatomic) unsigned long long summaryUnit;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) PKCurrencyAmount *totalSpending;
@property (copy, nonatomic) NSArray *orderedSpendingCategories;
@property (copy, nonatomic) NSArray *orderedSpendingPerMerchants;
@property (retain, nonatomic) PKCurrencyAmount *previousTotalSpending;
@property (retain, nonatomic) PKCurrencyAmount *previousMaxAmount;
@property (retain, nonatomic) PKPaymentTransactionGroup *rewards;
@property (retain, nonatomic) PKPaymentTransactionGroup *interest;
@property (retain, nonatomic) PKPaymentTransactionGroup *payments;
@property (retain, nonatomic) PKPaymentTransactionGroup *refunds;
@property (retain, nonatomic) PKPaymentTransactionGroup *adjustments;
@property (copy, nonatomic) NSDictionary *spendingsPerAltDSID;
@property (retain, nonatomic) NSArray *spendingsPerCalendarUnit;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
