@class PKMerchant, NSSet, NSArray, NSDate, PKCurrencyAmount, PKSearchQuery;

@interface PKPaymentTransactionGroup : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) long long merchantCategory;
@property (retain, nonatomic) PKMerchant *merchant;
@property (retain, nonatomic) NSSet *handles;
@property (retain, nonatomic) NSArray *regions;
@property (retain, nonatomic) PKSearchQuery *searchQuery;
@property (nonatomic) unsigned long long transactionCount;
@property (retain, nonatomic) PKCurrencyAmount *totalAmount;
@property (retain, nonatomic) NSArray *transactions;
@property (nonatomic) unsigned long long secondaryType;
@property (nonatomic) unsigned long long secondaryGroupCount;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
