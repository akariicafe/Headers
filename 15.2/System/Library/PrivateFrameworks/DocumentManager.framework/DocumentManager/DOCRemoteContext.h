@interface DOCRemoteContext : NSExtensionContext <DOCRemoteContextInterface>

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)serviceProxyWithErrorHandler:(id /* block */)a0;
- (void)updateAppearance:(id)a0 completionBlock:(id /* block */)a1;
- (void)updateAppearance:(id)a0 shouldFlushCA:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)updateEditingTo:(BOOL)a0 animated:(BOOL)a1;

@end
