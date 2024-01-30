@interface SRAuthExtensionContext : NSExtensionContext

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)remoteProxy;

@end
