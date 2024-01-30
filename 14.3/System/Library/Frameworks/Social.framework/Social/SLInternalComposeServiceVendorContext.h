@interface SLInternalComposeServiceVendorContext : NSExtensionContext <SLInternalComposeServiceHostProtocol, SLInternalComposeServiceVendorProtocol>

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)shouldShowNetworkActivityIndicator:(id)a0;

@end
