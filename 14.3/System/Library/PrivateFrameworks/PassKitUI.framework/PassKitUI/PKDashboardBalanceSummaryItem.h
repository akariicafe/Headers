@class NSString, NSArray, PKCreditAccountStatement, PKPaymentWebService, PKTransactionSource, PKCreditAccountSummary, PKPaymentTransactionGroup, PKAccount;

@interface PKDashboardBalanceSummaryItem : NSObject <PKDashboardItem>

@property (retain, nonatomic) PKAccount *account;
@property (retain, nonatomic) PKTransactionSource *transactionSource;
@property (retain, nonatomic) PKPaymentWebService *webService;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) PKPaymentTransactionGroup *transactionGroup;
@property (retain, nonatomic) PKCreditAccountStatement *statement;
@property (retain, nonatomic) PKCreditAccountSummary *summary;
@property (retain, nonatomic) NSArray *statements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void).cxx_destruct;

@end
