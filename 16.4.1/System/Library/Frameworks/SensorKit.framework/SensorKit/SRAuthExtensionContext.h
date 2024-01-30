@interface SRAuthExtensionContext : NSExtensionContext

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)remoteProxy;
- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;

@end
