@class PKPaymentTransaction;

@interface PKActivityEventPeerPaymentTransaction : PKActivityEventTransaction

@property (readonly, nonatomic) PKPaymentTransaction *relatedTopUpFundingSourceWithdrawlTransaction;
@property (readonly, nonatomic) PKPaymentTransaction *relatedTopUpPeerPaymentAccountDepositTransaction;

- (unsigned long long)hash;
- (id)eventType;
- (void).cxx_destruct;
- (id)initWithTransaction:(id)a0 relatedTopUpWithdrawlTransaction:(id)a1 relatedTopUpDepositTransaction:(id)a2 unread:(BOOL)a3;
- (BOOL)isEqualToActivityEvent:(id)a0;

@end
