@interface NEAgentDNSProxyExtension : NEAgentAppProxyExtension <NEDNSProxyPluginDriver>

- (void)setSystemDNSSettings:(id)a0;
- (id)driverInterface;

@end
