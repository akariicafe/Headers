@class NSString;

@interface NEAgentAppProxyExtension : NEAgentTunnelExtension <NEExtensionAppProxyProviderHostDelegate, NEFlowDivertPluginDriver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)extension:(id)a0 didRequestFlowDivertControlSocketWithCompletionHandler:(id /* block */)a1;
- (void)connectWithParameters:(id)a0;
- (id)driverInterface;
- (void)setDelegateInterface:(unsigned int)a0;
- (id)managerInterface;

@end
