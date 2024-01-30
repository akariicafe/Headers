@class NSString;

@interface NEAgentTunnelExtension : NEAgentExtension <NEExtensionTunnelProviderHostDelegate, NEVPNPluginDriver>

@property BOOL cancelCalled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleCancel;
- (void)handleAppsUninstalled:(id)a0;
- (void)handleAppsUpdateBegins:(id)a0;
- (void)handleAppsUpdateEnding:(id)a0;
- (void)handleAppsUpdateEnds:(id)a0;
- (void)handleExtensionStartedWithCompletionHandler:(id /* block */)a0;
- (void)sendExtensionFailed;
- (void)connectWithParameters:(id)a0;
- (void)disconnectWithReason:(int)a0;
- (void)attachIPCWithCompletionHandler:(id /* block */)a0;
- (void)setAppUUIDMap:(id)a0;
- (id)driverInterface;
- (void)extension:(id)a0 didRequestSocket:(BOOL)a1 interface:(id)a2 local:(id)a3 remote:(id)a4 effectivePID:(int)a5 completionHandler:(id /* block */)a6;
- (void)extension:(id)a0 didStartWithError:(id)a1;
- (void)extension:(id)a0 didSetStatus:(long long)a1;
- (void)extension:(id)a0 didSetTunnelConfiguration:(id)a1 completionHandler:(id /* block */)a2;
- (void)extensionDidDetachIPC:(id)a0;
- (id)managerInterface;
- (void)sendStatus:(long long)a0 withDisconnectError:(id)a1;

@end
