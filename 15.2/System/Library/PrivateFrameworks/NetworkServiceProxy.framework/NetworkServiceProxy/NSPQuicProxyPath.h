@protocol NSPQUICProxyPathDelegate;

@interface NSPQuicProxyPath : NSPProxyPath

@property (weak) id<NSPQUICProxyPathDelegate> quicProxyPathDelegate;

- (void).cxx_destruct;
- (void)resetSingleHopProxyAgent;
- (void)resetMultiHopProxyAgent;
- (id)initWithDelegate:(id)a0 ingressProxy:(id)a1 egressProxy:(id)a2 proxyPathWeight:(unsigned long long)a3 allowFallback:(BOOL)a4 forceFallback:(BOOL)a5 allowFailOpen:(BOOL)a6 geohashSharingEnabled:(BOOL)a7 networkCharacteristics:(id)a8;
- (void)setupSingleHopProxyRegistrations;
- (void)setupMultiHopProxyRegistrations;
- (BOOL)proxyPathIsValid:(id)a0 proxyPathList:(id)a1;
- (void)enableFallback:(BOOL)a0;

@end
