@interface NSPPrivacyProxyMultiHopFallbackNetworkRegistration : NSPPrivacyProxyNetworkRegistration

- (id)initWithAgentUUID:(id)a0 delegate:(id)a1;
- (BOOL)setProxyAgentConfiguration:(id)a0 secondProxyHopURL:(id)a1 firstProxyHopKeyArray:(id)a2 secondProxyHopKeyArray:(id)a3 ingressTokenAgentUUID:(id)a4 egressTokenAgentUUID:(id)a5 shouldFailOpen:(BOOL)a6 allowGeohash:(BOOL)a7 enableDNSFilteringHint:(BOOL)a8;

@end
