@class NSDecimalNumber, NSDate;

@interface PKCreditAccountBalanceSummary : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *openingDate;
@property (copy, nonatomic) NSDate *closingDate;
@property (copy, nonatomic) NSDecimalNumber *purchases;
@property (copy, nonatomic) NSDecimalNumber *pendingPurchases;
@property (copy, nonatomic) NSDecimalNumber *balanceTransfers;
@property (copy, nonatomic) NSDecimalNumber *interestCharged;
@property (copy, nonatomic) NSDecimalNumber *feesCharged;
@property (copy, nonatomic) NSDecimalNumber *paymentsAndCredits;
@property (copy, nonatomic) NSDecimalNumber *payments;
@property (copy, nonatomic) NSDecimalNumber *credits;
@property (copy, nonatomic) NSDecimalNumber *rewardsEarned;
@property (copy, nonatomic) NSDecimalNumber *rewardsRedeemed;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
