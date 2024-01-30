@interface CDPUIAccountRecoveryController : CDPUIController

- (id)_accountRecoveryDevicePickerEscapeOffer;
- (id)_accountRecoveryEscapeOfferForDevice:(id)a0;
- (void)_presentRemoteSecretControllerWithNewestDevice:(id)a0;
- (void)_setupDevicePickerController:(id /* block */)a0;
- (void)devicePicker:(id)a0 didSelectDevice:(id)a1;
- (id)devicePicker:(id)a0 escapeOffersForDevices:(id)a1;
- (BOOL)performingAccountRecovery;

@end
