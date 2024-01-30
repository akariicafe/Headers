@class NSSet, WFClient, NSObject;
@protocol OS_dispatch_queue;

@interface WFKnownNetworkStore : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *knownNetworksQueue;
@property (retain, nonatomic) NSSet *knownNetworks;
@property (retain, nonatomic) NSSet *managedNetworkNames;
@property (nonatomic) BOOL hasHS20Networks;
@property (weak, nonatomic) WFClient *wifiClient;

+ (id)sharedInstance;

- (id)initWithClient:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_preferredNetworksDidChange:(id)a0;
- (void)_forceUpdateKnownNetworksAndWait:(BOOL)a0;
- (void)_clientServerRestarted:(id)a0;
- (id)_networkProfileFromNetworkAttributes:(id)a0;
- (void)_forceUpdateKnownNetworks;
- (id)networkProfileWithSSID:(id)a0 securityMode:(long long)a1 securityModeExt:(long long)a2;
- (void)updateKnownNetworks;
- (id)networkProfileForNetwork:(id)a0;
- (id)networkProfileWithSSID:(id)a0;
- (BOOL)saveNetworkProfile:(id)a0 forReason:(unsigned long long)a1 error:(out id *)a2;
- (BOOL)removeNetworkProfile:(id)a0 error:(id *)a1;
- (BOOL)setAutoJoinEnabled:(BOOL)a0 forProfile:(id)a1 error:(out id *)a2;
- (BOOL)networkMatchesManagedProfile:(id)a0;
- (id)getGeoTagsForNetworkProfile:(id)a0;
- (id)getScoreForNetworkProfile:(id)a0;

@end
