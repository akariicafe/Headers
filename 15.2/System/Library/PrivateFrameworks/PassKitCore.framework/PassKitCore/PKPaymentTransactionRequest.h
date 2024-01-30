@class NSDecimalNumber, NSSet, NSArray, PKMerchant, NSDate, NSString, PKCurrencyAmount;

@interface PKPaymentTransactionRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSSet *transactionSourceIdentifiers;
@property (retain, nonatomic) NSArray *transactionTypes;
@property (retain, nonatomic) NSArray *transactionSources;
@property (retain, nonatomic) NSArray *transactionStatuses;
@property (nonatomic) long long peerPaymentSubType;
@property (retain, nonatomic) NSDecimalNumber *rewardsValue;
@property (nonatomic) unsigned long long rewardsValueUnit;
@property (retain, nonatomic) PKMerchant *merchant;
@property (nonatomic) long long merchantCategory;
@property (retain, nonatomic) NSArray *regions;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) long long dateOrder;
@property (retain, nonatomic) NSString *currencyCode;
@property (retain, nonatomic) PKCurrencyAmount *amount;
@property (nonatomic) long long amountComparison;
@property (retain, nonatomic) NSSet *tags;
@property (retain, nonatomic) NSString *panIdentifier;
@property (nonatomic) long long limit;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
