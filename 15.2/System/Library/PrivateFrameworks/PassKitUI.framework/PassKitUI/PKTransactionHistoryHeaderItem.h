@class PKMerchant, NSString, CNContact, PKCreditInstallmentPlanProduct, PKPaymentTransaction, PKPaymentTransactionGroup;

@interface PKTransactionHistoryHeaderItem : NSObject <PKDashboardItem>

@property (readonly, nonatomic) unsigned long long type;
@property (retain, nonatomic) PKMerchant *merchant;
@property (retain, nonatomic) PKPaymentTransaction *transaction;
@property (copy, nonatomic) NSString *peerPaymentCounterpartHandle;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) PKPaymentTransactionGroup *transactionGroup;
@property (nonatomic) long long transactionType;
@property (retain, nonatomic) PKCreditInstallmentPlanProduct *installmentProduct;
@property (nonatomic) unsigned long long featureIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;

@end
