@class NSString, PKPeerPaymentAccount, PKCurrencyAmount;
@protocol PKPaymentSetupDelegate;

@interface PKPeerPaymentRegistrationFlowController : NSObject

@property (readonly, nonatomic) PKPeerPaymentAccount *account;
@property (readonly, nonatomic) PKCurrencyAmount *currencyAmount;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSString *senderAddress;
@property (readonly, weak, nonatomic) id<PKPaymentSetupDelegate> setupDelegate;

- (void).cxx_destruct;
- (void)preflightWithCompletion:(id /* block */)a0;
- (id)initWithUserInfo:(id)a0 setupDelegate:(id)a1;
- (id)initWithAccount:(id)a0 currencyAmount:(id)a1 state:(unsigned long long)a2 senderAddress:(id)a3 setupDelegate:(id)a4;

@end
