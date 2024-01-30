@class PKAccount, PKTransactionReceipt, NSString, PKPaymentTransaction, PKTransactionSource;

@interface PKDashboardTransactionReceiptItem : NSObject <PKDashboardItem>

@property (retain, nonatomic) PKTransactionReceipt *receipt;
@property (retain, nonatomic) PKPaymentTransaction *transaction;
@property (retain, nonatomic) PKTransactionSource *transactionSource;
@property (retain, nonatomic) PKAccount *account;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void).cxx_destruct;

@end
