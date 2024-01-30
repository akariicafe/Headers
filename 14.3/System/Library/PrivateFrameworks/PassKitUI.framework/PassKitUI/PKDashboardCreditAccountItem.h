@class PKSpendingSummary, NSArray, NSString, PKSpendingSummaryFetcher, PKTransactionSource, PKAccount;

@interface PKDashboardCreditAccountItem : NSObject <PKDashboardItem>

@property (readonly, nonatomic) PKAccount *account;
@property (retain, nonatomic) PKTransactionSource *transactionSource;
@property (readonly, nonatomic) unsigned long long type;
@property (retain, nonatomic) NSArray *weeks;
@property (retain, nonatomic) NSArray *months;
@property (retain, nonatomic) NSArray *years;
@property (retain, nonatomic) PKSpendingSummary *summary;
@property (retain, nonatomic) PKSpendingSummaryFetcher *summaryFetcher;
@property (retain, nonatomic) NSArray *mostRecentTransactions;
@property (retain, nonatomic) NSArray *upcomingScheduledPayments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 transactionSource:(id)a1 type:(unsigned long long)a2;

@end
