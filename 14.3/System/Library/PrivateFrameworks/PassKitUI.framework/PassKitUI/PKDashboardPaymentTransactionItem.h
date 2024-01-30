@class PKAccount, NSString, PKPaymentPass, PKTransactionSource, PKPaymentTransaction;

@interface PKDashboardPaymentTransactionItem : NSObject <PKDashboardItem> {
    PKPaymentPass *_pass;
}

@property (readonly, nonatomic) PKPaymentTransaction *transaction;
@property (readonly, nonatomic) PKTransactionSource *transactionSource;
@property (retain, nonatomic) PKTransactionSource *secondaryTransactionSource;
@property (retain, nonatomic) PKAccount *account;
@property (nonatomic) BOOL isFeaturedTransaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

@end
