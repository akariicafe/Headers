@class NSString, PKPeerPaymentWebService;

@interface NPKPeerPaymentWebServiceCompanionTargetDevice : NSObject <PKPeerPaymentWebServiceTargetDeviceProtocol>

@property (weak, nonatomic) PKPeerPaymentWebService *peerPaymentWebService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)attemptToDownloadPeerPaymentPassAtURL:(id)a0 withWebService:(id)a1 completion:(id /* block */)a2;

- (id)appleAccountInformation;
- (id)deviceRegion;
- (void)cloudStoreStatusWithCompletion:(id /* block */)a0;
- (void)downloadPassIfNecessaryWithCompletion:(id /* block */)a0;
- (id)secureElementIdentifiers;
- (id)init;
- (id)deviceClass;
- (void).cxx_destruct;
- (void)dealloc;
- (id)account;
- (void)updateAccountWithCompletion:(id /* block */)a0;
- (void)_handleAccountChanged:(id)a0;
- (id)bridgedClientInfo;
- (BOOL)userHasDisabledPeerPayment;
- (void)initalizeCloudStoreIfNecessaryWithHandler:(id /* block */)a0;
- (void)checkTLKsMissingWithCompletion:(id /* block */)a0;
- (void)setPreferences:(id)a0 completion:(id /* block */)a1;
- (void)provisionPeerPaymentPassWithProvisioningController:(id)a0 credential:(id)a1 completion:(id /* block */)a2;
- (void)resetApplePayManateeViewWithCompletion:(id /* block */)a0;
- (void)peerPaymentReRegisterWithURL:(id)a0 pushToken:(id)a1 peerPaymentWebService:(id)a2 completion:(id /* block */)a3;
- (void)peerPaymentReRegisterWithURL:(id)a0 pushToken:(id)a1 completion:(id /* block */)a2;
- (id)preferences;
- (void)setUserHasDisabledPeerPayment:(BOOL)a0;
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(id /* block */)a0;

@end
