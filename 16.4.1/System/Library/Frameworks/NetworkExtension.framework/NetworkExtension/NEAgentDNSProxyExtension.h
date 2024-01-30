@interface NEAgentDNSProxyExtension : NEAgentAppProxyExtension <NEDNSProxyPluginDriver>

- (id)driverInterface;
- (void)setSystemDNSSettings:(id)a0;

@end
