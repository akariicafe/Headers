@class NSArray, NSMutableDictionary;

@interface RMSPairingServiceProvider : RMSBonjourServiceProvider {
    NSMutableDictionary *_unmonitoredServices;
}

@property (retain, nonatomic) NSArray *pairedNetworkNames;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)netServiceBrowser:(id)a0 didFindService:(id)a1 moreComing:(BOOL)a2;
- (id)searchType;
- (long long)serviceDiscoverySource;
- (long long)serviceFlagsFromTXTDictionary:(id)a0;

@end
