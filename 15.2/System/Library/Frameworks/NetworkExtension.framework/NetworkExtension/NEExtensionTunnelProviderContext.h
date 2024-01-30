@class NEIPC, NSString, NSObject;
@protocol OS_dispatch_source;

@interface NEExtensionTunnelProviderContext : NEExtensionProviderContext <NEExtensionTunnelProviderProtocol, NEExtensionTunnelProviderHostProtocol>

@property (retain) NEIPC *ipc;
@property (retain) NSObject<OS_dispatch_source> *ipcIdleTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)setConfiguration:(id)a0 extensionIdentifier:(id)a1;
- (void)establishIPCWithCompletionHandler:(id /* block */)a0;
- (void)didSetReasserting:(BOOL)a0;
- (void)setTunnelConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleIPCDetached;
- (void).cxx_destruct;
- (void)cancelWithError:(id)a0;
- (void)handleAppMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)resetIPCIdleTimer;

@end
