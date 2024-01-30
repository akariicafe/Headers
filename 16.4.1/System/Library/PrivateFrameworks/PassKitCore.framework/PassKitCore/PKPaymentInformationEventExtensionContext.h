@interface PKPaymentInformationEventExtensionContext : PKPaymentInformationEventExtensionBaseContext <PKPaymentInformationEventExtensionVendorContextProtocol>

- (oneway void)handleConfigurationRequest:(id)a0 completion:(id /* block */)a1;
- (oneway void)handleInformationRequest:(id)a0 completion:(id /* block */)a1;
- (oneway void)handleSignatureRequest:(id)a0 completion:(id /* block */)a1;

@end
