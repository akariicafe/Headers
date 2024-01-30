@class PKPaymentTransaction;

@interface PKActivityEventPeerPaymentTransaction : PKActivityEventTransaction

@property (readonly, nonatomic) PKPaymentTransaction *relatedTopUpFundingSourceWithdrawlTransaction;
@property (readonly, nonatomic) PKPaymentTransaction *relatedTopUpPeerPaymentAccountDepositTransaction;

- (void).cxx_destruct;
- (id)eventType;
- (unsigned long long)hash;
- (BOOL)isEqualToActivityEvent:(id)a0;
- (id)initWithTransaction:(id)a0 relatedTopUpWithdrawlTransaction:(id)a1 relatedTopUpDepositTransaction:(id)a2 unread:(BOOL)a3;

@end
