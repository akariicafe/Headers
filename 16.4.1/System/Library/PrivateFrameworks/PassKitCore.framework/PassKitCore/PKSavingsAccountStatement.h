@class NSString, NSDecimalNumber, NSDate;

@interface PKSavingsAccountStatement : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *currencyCode;
@property (copy, nonatomic) NSDate *openingDate;
@property (copy, nonatomic) NSDate *closingDate;
@property (copy, nonatomic) NSDecimalNumber *openingBalance;
@property (copy, nonatomic) NSDecimalNumber *closingBalance;
@property (copy, nonatomic) NSDecimalNumber *interestEarned;
@property (copy, nonatomic) NSDecimalNumber *totalDeposits;
@property (copy, nonatomic) NSDecimalNumber *totalDailyCashDeposits;
@property (copy, nonatomic) NSDecimalNumber *totalWithdrawn;
@property (copy, nonatomic, setter=setAPY:) NSDecimalNumber *apy;
@property (nonatomic) long long statementPeriodDays;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
