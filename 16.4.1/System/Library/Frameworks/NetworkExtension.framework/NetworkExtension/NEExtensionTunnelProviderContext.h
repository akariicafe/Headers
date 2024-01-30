@class NSString, NEIPC, NSObject;
@protocol OS_dispatch_source;

@interface NEExtensionTunnelProviderContext : NEExtensionProviderContext <NEExtensionTunnelProviderProtocol, NEExtensionTunnelProviderHostProtocol> {
    NEIPC *_ipc;
    NSObject<OS_dispatch_source> *_ipcIdleTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)cancelWithError:(id)a0;
- (void).cxx_destruct;
- (void)didSetReasserting:(BOOL)a0;
- (void)establishIPCWithCompletionHandler:(id /* block */)a0;
- (void)handleIPCDetached;
- (void)setConfiguration:(id)a0 extensionIdentifier:(id)a1;
- (void)setTunnelConfiguration:(id)a0 completionHandler:(id /* block */)a1;

@end
