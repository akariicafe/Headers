@class NSString, PKPeerPaymentService;
@protocol PKPeerPaymentTargetDeviceDelegate;

@interface PKPeerPaymentWebServiceTargetDevice : NSObject <PKPeerPaymentWebServiceTargetDeviceProtocol> {
    PKPeerPaymentService *_peerPaymentService;
    id<PKPeerPaymentTargetDeviceDelegate> _targetDeviceDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)deviceRegion;
- (void)renewAppleAccountWithCompletionHandler:(id /* block */)a0;
- (id)secureElementIdentifiers;
- (id)appleAccountInformation;
- (id)preferences;
- (id)bridgedClientInfo;
- (void)downloadPassIfNecessaryWithCompletion:(id /* block */)a0;
- (void)_handlePreferencesChangedNotification:(id)a0;
- (void)provisionPeerPaymentPassWithProvisioningController:(id)a0 credential:(id)a1 completion:(id /* block */)a2;
- (id)deviceClass;
- (void)updateAccountWithCompletion:(id /* block */)a0;
- (void)checkTLKsMissingWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)provisionPeerPaymentPassWithProvisioningController:(id)a0 peerPaymentWebService:(id)a1 credential:(id)a2 completion:(id /* block */)a3;
- (void)setUserHasDisabledPeerPayment:(BOOL)a0;
- (id)initWithTargetDeviceDelegate:(id)a0;
- (id)account;
- (BOOL)userHasDisabledPeerPayment;
- (void)cloudStoreStatusWithCompletion:(id /* block */)a0;
- (void)resetApplePayManateeViewWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setPreferences:(id)a0 completion:(id /* block */)a1;
- (void)_handleAccountChangedNotification:(id)a0;
- (void)peerPaymentReRegisterWithURL:(id)a0 pushToken:(id)a1 peerPaymentWebService:(id)a2 completion:(id /* block */)a3;

@end
