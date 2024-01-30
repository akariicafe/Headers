@class PKMerchant, NSString, CNContact, PKCreditInstallmentPlanProduct, PKPaymentTransaction, PKPaymentTransactionGroup;

@interface PKTransactionHistoryHeaderItem : NSObject <PKDashboardItem>

@property (readonly, nonatomic) unsigned long long type;
@property (retain, nonatomic) PKMerchant *merchant;
@property (nonatomic) BOOL showDetailedPropertyLocation;
@property (retain, nonatomic) PKPaymentTransaction *transaction;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long category;
@property (copy, nonatomic) NSString *peerPaymentCounterpartHandle;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) PKPaymentTransactionGroup *transactionGroup;
@property (nonatomic) unsigned long long historyCount;
@property (nonatomic) long long transactionType;
@property (retain, nonatomic) PKCreditInstallmentPlanProduct *installmentProduct;
@property (nonatomic) unsigned long long featureIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (id)initWithType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
