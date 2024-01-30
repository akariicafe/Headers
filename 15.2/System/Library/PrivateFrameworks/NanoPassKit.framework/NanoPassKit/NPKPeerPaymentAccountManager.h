@class PKPeerPaymentAccount, PKPeerPaymentService;

@interface NPKPeerPaymentAccountManager : NSObject

@property (retain) PKPeerPaymentAccount *account;
@property (readonly, nonatomic) PKPeerPaymentService *peerPaymentService;

+ (id)sharedInstance;

- (void)_handleAccountChanged:(id)a0;
- (void)_updateAccount;
- (void).cxx_destruct;
- (id)init;
- (id)initWithPeerPaymentService:(id)a0;

@end
