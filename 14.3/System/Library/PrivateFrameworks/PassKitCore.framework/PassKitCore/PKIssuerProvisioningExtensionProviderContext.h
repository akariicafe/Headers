@class NSString, PKIssuerProvisioningExtensionHandler;

@interface PKIssuerProvisioningExtensionProviderContext : NSExtensionContext <PKIssuerProvisioningExtensionProviderContextExportedInterface>

@property (retain, nonatomic) PKIssuerProvisioningExtensionHandler *handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)connect;
- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)statusWithCompletion:(id /* block */)a0;
- (void)passEntriesWithCompletion:(id /* block */)a0;
- (void)remotePassEntriesWithCompletion:(id /* block */)a0;
- (void)generateRequestWithEntryIdentifier:(id)a0 configuration:(id)a1 certificateChain:(id)a2 nonce:(id)a3 nonceSignature:(id)a4 completionHandler:(id /* block */)a5;

@end
