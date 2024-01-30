@class PKPaymentTransactionGroup, NSDate;

@interface PKBalanceSummary : NSObject

@property (nonatomic) unsigned long long summaryType;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) PKPaymentTransactionGroup *orderedSpendingTransactions;
@property (retain, nonatomic) PKPaymentTransactionGroup *orderedInterestCharges;
@property (retain, nonatomic) PKPaymentTransactionGroup *orderedCredits;
@property (retain, nonatomic) PKPaymentTransactionGroup *rewards;

- (void).cxx_destruct;

@end
