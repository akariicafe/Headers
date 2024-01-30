@class NSString, PKInstallmentPlan, PKTransactionSource, PKAccount;

@interface PKDashboardInstallmentPlanStatusItem : NSObject <PKDashboardItem>

@property (retain, nonatomic) PKInstallmentPlan *installmentPlan;
@property (retain, nonatomic) PKAccount *account;
@property (retain, nonatomic) PKTransactionSource *transactionSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void).cxx_destruct;

@end
