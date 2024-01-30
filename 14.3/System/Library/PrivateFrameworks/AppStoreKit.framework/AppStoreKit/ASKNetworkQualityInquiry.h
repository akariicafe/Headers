@class NSMutableArray, NSMutableSet, NSObject, NWNetworkOfInterestManager;
@protocol OS_dispatch_queue;

@interface ASKNetworkQualityInquiry : NSObject <NWNetworkOfInterestManagerDelegate>

@property (readonly, nonatomic) NWNetworkOfInterestManager *manager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableSet *knownNetworks;
@property (retain, nonatomic) NSMutableArray *knownNetworksReadyHandlers;

- (void)didStartTrackingNOI:(id)a0;
- (id)init;
- (BOOL)areKnownNetworksReady;
- (void).cxx_destruct;
- (void)dealloc;
- (void)investigateNetworksWithCompletionBlock:(id /* block */)a0;
- (void)performWhenKnownNetworksReady:(id /* block */)a0;
- (void)didStopTrackingNOI:(id)a0;
- (void)didStopTrackingAllNOIs:(id)a0;
- (void)drainKnownNetworksReadyHandlers;

@end
