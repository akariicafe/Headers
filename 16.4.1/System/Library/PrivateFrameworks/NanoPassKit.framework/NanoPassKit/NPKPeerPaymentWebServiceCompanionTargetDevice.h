@class NSString, PKPeerPaymentWebService;

@interface NPKPeerPaymentWebServiceCompanionTargetDevice : NSObject <PKPeerPaymentWebServiceTargetDeviceProtocol>

@property (weak, nonatomic) PKPeerPaymentWebService *peerPaymentWebService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)attemptToDownloadPeerPaymentPassAtURL:(id)a0 withWebService:(id)a1 completion:(id /* block */)a2;

- (id)deviceRegion;
- (id)secureElementIdentifiers;
- (id)appleAccountInformation;
- (id)preferences;
- (id)bridgedClientInfo;
- (void)downloadPassIfNecessaryWithCompletion:(id /* block */)a0;
- (void)provisionPeerPaymentPassWithProvisioningController:(id)a0 credential:(id)a1 completion:(id /* block */)a2;
- (id)deviceClass;
- (void)updateAccountWithCompletion:(id /* block */)a0;
- (void)checkTLKsMissingWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)setUserHasDisabledPeerPayment:(BOOL)a0;
- (id)account;
- (id)init;
- (BOOL)userHasDisabledPeerPayment;
- (void)cloudStoreStatusWithCompletion:(id /* block */)a0;
- (void)resetApplePayManateeViewWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setPreferences:(id)a0 completion:(id /* block */)a1;
- (void)peerPaymentReRegisterWithURL:(id)a0 pushToken:(id)a1 peerPaymentWebService:(id)a2 completion:(id /* block */)a3;
- (void)_handleAccountChanged:(id)a0;
- (void)initalizeCloudStoreIfNecessaryWithHandler:(id /* block */)a0;
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(id /* block */)a0;

@end
