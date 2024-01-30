@interface CXProviderExtensionContext : NSExtensionContext

@property (readonly, retain) id remoteObjectProxy;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;

@end
