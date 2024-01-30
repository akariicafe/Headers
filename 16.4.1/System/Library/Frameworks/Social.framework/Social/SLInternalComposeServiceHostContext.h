@interface SLInternalComposeServiceHostContext : NSExtensionContext <SLInternalComposeServiceHostProtocol, SLInternalComposeServiceVendorProtocol>

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)shouldShowNetworkActivityIndicator:(id)a0;

@end
