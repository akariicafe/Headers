@class NSDecimalNumber;

@interface PKMutableAccountUserPreferences : PKAccountUserPreferences

@property (nonatomic) BOOL spendingEnabled;
@property (nonatomic) BOOL showAvailableCredit;
@property (nonatomic) BOOL transactionSpendLimitEnabled;
@property (retain, nonatomic) NSDecimalNumber *transactionSpendLimitAmount;
@property (nonatomic) BOOL monthlySpendLimitEnabled;
@property (retain, nonatomic) NSDecimalNumber *monthlySpendLimitAmount;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
