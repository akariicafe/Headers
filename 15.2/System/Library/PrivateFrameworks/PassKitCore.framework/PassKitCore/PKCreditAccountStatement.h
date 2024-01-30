@class NSString, NSDecimalNumber, NSDate;

@interface PKCreditAccountStatement : NSObject <NSSecureCoding, PKRecordObject, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSDate *openingDate;
@property (copy, nonatomic) NSDate *closingDate;
@property (copy, nonatomic) NSDate *paymentDueDate;
@property (copy, nonatomic) NSString *currencyCode;
@property (copy, nonatomic) NSDecimalNumber *statementBalance;
@property (copy, nonatomic) NSDecimalNumber *totalBalance;
@property (copy, nonatomic) NSDecimalNumber *minimumDue;
@property (copy, nonatomic) NSDecimalNumber *purchases;
@property (copy, nonatomic) NSDecimalNumber *feesCharged;
@property (copy, nonatomic) NSDecimalNumber *interestCharged;
@property (copy, nonatomic) NSDecimalNumber *balanceTransfers;
@property (copy, nonatomic) NSDecimalNumber *paymentsAndCredits;
@property (copy, nonatomic) NSDecimalNumber *payments;
@property (copy, nonatomic) NSDecimalNumber *credits;
@property (copy, nonatomic) NSDecimalNumber *rewardsBalance;
@property (copy, nonatomic) NSDecimalNumber *rewardsEarned;
@property (copy, nonatomic) NSDecimalNumber *rewardsRedeemed;
@property (copy, nonatomic) NSDecimalNumber *rewardsYTD;
@property (copy, nonatomic) NSDecimalNumber *rewardsLifetime;
@property (readonly, nonatomic) unsigned long long monthNumber;
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
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;

@end
