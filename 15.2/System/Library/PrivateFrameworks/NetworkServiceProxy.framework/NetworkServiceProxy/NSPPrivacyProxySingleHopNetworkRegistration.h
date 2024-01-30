@interface NSPPrivacyProxySingleHopNetworkRegistration : NSPPrivacyProxyNetworkRegistration

- (id)initWithAgentUUID:(id)a0 delegate:(id)a1;
- (BOOL)setProxyAgentConfiguration:(id)a0 proxyKeyArray:(id)a1 tokenAgentUUID:(id)a2 fallbackAgentUUID:(id)a3 shouldFailOpen:(BOOL)a4 fallbackProxyConfigHash:(id)a5;

@end
