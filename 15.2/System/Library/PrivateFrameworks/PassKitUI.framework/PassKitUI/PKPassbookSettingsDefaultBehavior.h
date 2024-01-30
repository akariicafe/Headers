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
- (BOOL)supportsCredentialType:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)secureElementIsProductionSigned;
- (void)dealloc;
- (id)secureElementID;
- (id)optionsDelegate;
- (id)passLibraryDataProvider;
- (id)paymentDataProvider;
- (id)setupDelegate;
- (id)peerPaymentDelegate;
- (id)peerPaymentDataSource;
- (BOOL)canRegisterForPeerPayment;
- (BOOL)deviceInRestrictedMode;
- (BOOL)hasFelicaSecureElement;
- (BOOL)deviceSupportsInAppPayments;

@end
