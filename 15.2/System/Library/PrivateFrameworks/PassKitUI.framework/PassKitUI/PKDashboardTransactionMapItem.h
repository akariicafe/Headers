@class NSString, PKPaymentTransaction;

@interface PKDashboardTransactionMapItem : NSObject <PKDashboardItem>

@property (retain, nonatomic) PKPaymentTransaction *transaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void).cxx_destruct;

@end
