@class NSString, PKPeerPaymentWebService;

@interface NPKPeerPaymentWebServiceCompanionTargetDevice : NSObject <PKPeerPaymentWebServiceTargetDeviceProtocol>

@property (weak, nonatomic) PKPeerPaymentWebService *peerPaymentWebService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)attemptToDownloadPeerPaymentPassAtURL:(id)a0 withWebService:(id)a1 completion:(id /* block */)a2;

- (void)updateAccountWithCompletion:(id /* block */)a0;
- (id)preferences;
- (void)cloudStoreStatusWithCompletion:(id /* block */)a0;
- (id)bridgedClientInfo;
- (id)account;
- (id)deviceClass;
- (void)peerPaymentReRegisterWithURL:(id)a0 pushToken:(id)a1 peerPaymentWebService:(id)a2 completion:(id /* block */)a3;
- (void)_handleAccountChanged:(id)a0;
- (BOOL)userHasDisabledPeerPayment;
- (void)provisionPeerPaymentPassWithProvisioningController:(id)a0 credential:(id)a1 completion:(id /* block */)a2;
- (void)resetApplePayManateeViewWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setPreferences:(id)a0 completion:(id /* block */)a1;
- (id)appleAccountInformation;
- (void)downloadPassIfNecessaryWithCompletion:(id /* block */)a0;
- (id)deviceRegion;
- (id)secureElementIdentifiers;
- (void)initalizeCloudStoreIfNecessaryWithHandler:(id /* block */)a0;
- (void)checkTLKsMissingWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)setUserHasDisabledPeerPayment:(BOOL)a0;
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(id /* block */)a0;

@end
