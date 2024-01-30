@class NSDecimalNumber, NSString, NSNumberFormatter;

@interface PKSavingsAccountSummary : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDecimalNumber *currentBalance;
@property (copy, nonatomic) NSDecimalNumber *availableBalance;
@property (copy, nonatomic) NSDecimalNumber *pendingBalance;
@property (copy, nonatomic) NSDecimalNumber *interestYTD;
@property (copy, nonatomic) NSDecimalNumber *interestTotal;
@property (copy, nonatomic, setter=setAPY:) NSDecimalNumber *apy;
@property (nonatomic) BOOL hasWithdrawalLimit;
@property (nonatomic) unsigned long long withdrawalsRemaining;
@property (readonly, nonatomic) NSString *formattedAPY;
@property (readonly, nonatomic) NSNumberFormatter *apyFormatter;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
