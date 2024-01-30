@class NSMutableArray, NSArray, SSPromise, NSMutableSet, NSObject, NWNetworkOfInterestManager;
@protocol OS_dispatch_queue;

@interface SSNetworkQualityInquiry : NSObject <NWNetworkOfInterestManagerDelegate> {
    NSArray *_lastKnownReports;
    long long _lastReportRefreshTimestamp;
    SSPromise *_currentInvestigation;
}

@property (readonly, nonatomic) NWNetworkOfInterestManager *manager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableSet *knownNetworks;
@property (retain, nonatomic) NSMutableArray *knownNetworksReadyHandlers;

+ (id)sharedInstance;
+ (BOOL)isEntitled;

- (void)didStartTrackingNOI:(id)a0;
- (id)investigateNetworks;
- (void)didStopTrackingAllNOIs:(id)a0;
- (void)drainKnownNetworksReadyHandlers;
- (void).cxx_destruct;
- (id)init;
- (void)didStopTrackingNOI:(id)a0;
- (void)performWhenKnownNetworksReady:(id /* block */)a0;
- (BOOL)areKnownNetworksReady;
- (void)dealloc;

@end
