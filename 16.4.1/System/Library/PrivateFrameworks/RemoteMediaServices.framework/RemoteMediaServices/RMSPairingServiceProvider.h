@class NSArray, NSMutableDictionary;

@interface RMSPairingServiceProvider : RMSBonjourServiceProvider {
    NSMutableDictionary *_unmonitoredServices;
}

@property (retain, nonatomic) NSArray *pairedNetworkNames;

- (id)searchType;
- (void)dealloc;
- (id)init;
- (void)netServiceBrowser:(id)a0 didFindService:(id)a1 moreComing:(BOOL)a2;
- (void).cxx_destruct;
- (long long)serviceDiscoverySource;
- (long long)serviceFlagsFromTXTDictionary:(id)a0;

@end
