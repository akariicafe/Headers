@interface CLSContextProviderExtensionContext : NSExtensionContext <CLSContextProviderInternal, CLSContextProvider>

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)getMainAppContextPathWithCompletion:(id /* block */)a0;
- (void)updateDescendantsOfContext:(id)a0 completion:(id /* block */)a1;
- (void)updateDescendantsOfContextPath:(id)a0 completion:(id /* block */)a1;

@end
