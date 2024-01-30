@class NSString, NSDecimalNumber, NSDate;

@interface FHStatementDetails : NSObject

@property (retain, nonatomic) NSString *statementIdentifier;
@property (retain, nonatomic) NSDate *openingDate;
@property (retain, nonatomic) NSDate *closingDate;
@property (retain, nonatomic) NSDecimalNumber *remainingStatementBalance;
@property (retain, nonatomic) NSDecimalNumber *combinedBalance;
@property (retain, nonatomic) NSDecimalNumber *remainingMinimumPayment;
@property (retain, nonatomic) NSDecimalNumber *minimumDue;
@property (retain, nonatomic) NSDecimalNumber *creditLimit;
@property (retain, nonatomic) NSDecimalNumber *statementBalance;
@property (retain, nonatomic) NSDecimalNumber *currentBalance;
@property (retain, nonatomic) NSDecimalNumber *currentBalanceForMonthZero;
@property (retain, nonatomic) NSString *currentStatementIdentifier;
@property (nonatomic) BOOL isMonthZero;
@property (nonatomic) BOOL isMonthOne;
@property (nonatomic) BOOL isMonthOfMerge;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
