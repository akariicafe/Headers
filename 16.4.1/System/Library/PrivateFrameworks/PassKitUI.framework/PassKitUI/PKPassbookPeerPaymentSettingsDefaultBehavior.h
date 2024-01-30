@class NSString, PKPaymentWebService, PKPeerPaymentWebService;

@interface PKPassbookPeerPaymentSettingsDefaultBehavior : NSObject <PKPassbookPeerPaymentSettingsDataSource, PKPassbookPeerPaymentSettingsDelegate> {
    PKPaymentWebService *_paymentWebService;
    PKPeerPaymentWebService *_peerPaymentWebService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_registerForPeerPaymentWithCompletion:(id /* block */)a0;
- (void)_unregisterForPeerPaymentWithCompletion:(id /* block */)a0;
- (void)peerPaymentRegistrationStatusHasChanged:(BOOL)a0 completion:(id /* block */)a1;
- (id)peerPaymentWebService;

@end
