@interface NSPPrivacyProxySingleHopFallbackNetworkRegistration : NSPPrivacyProxyNetworkRegistration

- (id)initWithAgentUUID:(id)a0 delegate:(id)a1;
- (BOOL)setProxyAgentConfiguration:(id)a0 proxyKeyArray:(id)a1 tokenAgentUUID:(id)a2 shouldFailOpen:(BOOL)a3;

@end
