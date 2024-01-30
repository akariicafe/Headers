@class NSString;

@interface NEAgentAppProxyExtension : NEAgentTunnelExtension <NEExtensionAppProxyProviderHostDelegate, NEFlowDivertPluginDriver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDelegateInterface:(unsigned int)a0;
- (id)managerInterface;
- (id)driverInterface;
- (void)connectWithParameters:(id)a0;
- (void)extension:(id)a0 didRequestFlowDivertControlSocketWithCompletionHandler:(id /* block */)a1;

@end
