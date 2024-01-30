@class NSArray, NSMutableDictionary;

@interface TVRMSPairingServiceProvider : TVRMSBonjourServiceProvider {
    NSMutableDictionary *_unmonitoredServices;
    NSMutableDictionary *_monitoredServices;
}

@property (retain, nonatomic) NSArray *pairedNetworkNames;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)netServiceBrowser:(id)a0 didFindService:(id)a1 moreComing:(BOOL)a2;
- (id)searchType;
- (long long)serviceDiscoverySource;
- (long long)serviceLegacyFlagsFromTXTDictionary:(id)a0;

@end
