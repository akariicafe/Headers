@class NSString, PKPaymentWebService, PKPeerPaymentWebService;

@interface PKPassbookPeerPaymentSettingsDefaultBehavior : NSObject <PKPassbookPeerPaymentSettingsDataSource, PKPassbookPeerPaymentSettingsDelegate> {
    PKPaymentWebService *_paymentWebService;
    PKPeerPaymentWebService *_peerPaymentWebService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)peerPaymentWebService;
- (void)peerPaymentRegistrationStatusHasChanged:(BOOL)a0 completion:(id /* block */)a1;
- (void)_registerForPeerPaymentWithCompletion:(id /* block */)a0;
- (void)_unregisterForPeerPaymentWithCompletion:(id /* block */)a0;

@end
