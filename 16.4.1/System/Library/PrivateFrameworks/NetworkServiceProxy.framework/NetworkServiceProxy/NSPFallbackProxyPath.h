@interface NSPFallbackProxyPath : NSPProxyPath

- (void)resetMultiHopProxyAgent;
- (BOOL)proxyPathIsValid:(id)a0 proxyPathList:(id)a1;
- (void)setupMultiHopProxyRegistrations;
- (void)setupSingleHopProxyRegistrations;
- (void)resetSingleHopProxyAgent;
- (void)resetObliviousHopProxyAgents;

@end
