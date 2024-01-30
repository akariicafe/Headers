@class NSDecimalNumber, NSString, NSDate;

@interface PKInstallmentPlanSummary : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *originalEndDate;
@property (retain, nonatomic) NSDate *currentEndDate;
@property (retain, nonatomic) NSDecimalNumber *currentBalance;
@property (copy, nonatomic) NSString *currencyCode;
@property (retain, nonatomic) NSDecimalNumber *minimumDue;
@property (retain, nonatomic) NSDate *minimumDueDate;
@property (retain, nonatomic) NSDecimalNumber *interestCharged;
@property (retain, nonatomic) NSDecimalNumber *paymentsToDateAmount;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToInstallmentPlanSummary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;

@end
