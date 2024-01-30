@interface CXProviderExtensionContext : NSExtensionContext

@property (readonly, retain) id remoteObjectProxy;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;

@end
