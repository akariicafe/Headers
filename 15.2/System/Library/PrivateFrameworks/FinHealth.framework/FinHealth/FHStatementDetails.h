@class NSString, NSDecimalNumber, NSArray;

@interface FHStatementDetails : NSObject

@property (retain, nonatomic) NSString *statementIdentifier;
@property (retain, nonatomic) NSDecimalNumber *remainingStatementBalance;
@property (retain, nonatomic) NSDecimalNumber *remainingMinimumPayment;
@property (retain, nonatomic) NSDecimalNumber *minimumDue;
@property (retain, nonatomic) NSDecimalNumber *creditLimit;
@property (retain, nonatomic) NSDecimalNumber *statementBalance;
@property (retain, nonatomic) NSDecimalNumber *currentBalance;
@property (retain, nonatomic) NSString *currentStatementIdentifier;
@property (retain, nonatomic) NSArray *transactionPurchasesDetails;
@property (retain, nonatomic) NSArray *transactionPaymentDetails;
@property (nonatomic) BOOL isMonthZero;
@property (nonatomic) BOOL isMonthOne;

- (void).cxx_destruct;

@end
