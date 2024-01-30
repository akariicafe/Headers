@class PKPassLibraryDefaultDataProvider, NSString, PKPassbookPeerPaymentSettingsDefaultBehavior, PKPaymentDefaultDataProvider, PKPaymentOptionsDefaults;

@interface PKPassbookSettingsDefaultBehavior : NSObject <PKPassbookSettingsDataSource> {
    PKPassLibraryDefaultDataProvider *_passLibraryDataProvider;
    PKPaymentDefaultDataProvider *_paymentDataProvider;
    PKPaymentOptionsDefaults *_options;
    PKPassbookPeerPaymentSettingsDefaultBehavior *_peerPaymentDefaultBehavior;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)deviceName;
- (id)init;
- (void).cxx_destruct;
- (id)passLibraryDataProvider;
- (void)dealloc;
- (BOOL)supportsCredentialType:(long long)a0;
- (id)paymentDataProvider;
- (id)peerPaymentDelegate;
- (id)peerPaymentDataSource;
- (id)secureElementID;
- (BOOL)canRegisterForPeerPayment;
- (BOOL)deviceInRestrictedMode;
- (BOOL)secureElementIsProductionSigned;
- (id)optionsDelegate;
- (BOOL)hasFelicaSecureElement;
- (BOOL)deviceSupportsInAppPayments;
- (id)setupDelegate;

@end
