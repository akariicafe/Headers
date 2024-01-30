@interface NSPFallbackProxyPath : NSPProxyPath

- (void)resetSingleHopProxyAgent;
- (void)resetMultiHopProxyAgent;
- (void)setupSingleHopProxyRegistrations;
- (void)setupMultiHopProxyRegistrations;
- (BOOL)proxyPathIsValid:(id)a0 proxyPathList:(id)a1;

@end
