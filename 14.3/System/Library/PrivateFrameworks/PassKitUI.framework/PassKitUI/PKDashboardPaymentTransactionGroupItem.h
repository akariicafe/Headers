@class PKAccount, NSArray, NSString, PKTransactionSource, PKPaymentTransactionGroup;

@interface PKDashboardPaymentTransactionGroupItem : NSObject <PKDashboardItem>

@property (retain, nonatomic) PKPaymentTransactionGroup *group;
@property (retain, nonatomic) PKTransactionSource *transactionSource;
@property (retain, nonatomic) PKAccount *account;
@property (retain, nonatomic) NSArray *tokens;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
