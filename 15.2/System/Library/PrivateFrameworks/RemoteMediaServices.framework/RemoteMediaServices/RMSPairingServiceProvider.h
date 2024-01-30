@class NSArray, NSMutableDictionary;

@interface RMSPairingServiceProvider : RMSBonjourServiceProvider {
    NSMutableDictionary *_unmonitoredServices;
}

@property (retain, nonatomic) NSArray *pairedNetworkNames;

- (void)netServiceBrowser:(id)a0 didFindService:(id)a1 moreComing:(BOOL)a2;
- (id)searchType;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (long long)serviceDiscoverySource;
- (long long)serviceFlagsFromTXTDictionary:(id)a0;

@end
