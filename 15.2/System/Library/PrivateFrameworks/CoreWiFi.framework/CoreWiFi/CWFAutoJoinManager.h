@class NSError, CWFAutoJoinRequest, NSSet, NSMutableDictionary, CWFAutoJoinMetric, NSMutableArray, NSObject, CLLocation, CWFScanResult, NSMutableSet;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CWFAutoJoinManager : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    long long _retrySchedule;
    unsigned long long _retryScheduleIndex;
    NSObject<OS_dispatch_source> *_retryTimer;
    BOOL _isRetryScheduled;
    NSMutableDictionary *_retryIntervalMap;
    unsigned long long _maxRetryIntervalIndex;
    NSMutableArray *_pendingRequests;
    CWFAutoJoinRequest *_activeRequest;
    CWFAutoJoinMetric *_metric;
    long long _state;
    NSMutableSet *_failedToJoinKnownNetworkIDs;
    BOOL _invalidated;
    BOOL _cancelled;
    NSError *_underlyingCancelError;
    NSMutableDictionary *_triggerTimestampMap;
    long long _previousNonRetryTrigger;
}

@property (copy) id /* block */ allowAutoJoinHandler;
@property (copy) id /* block */ allowKnownNetworkHandler;
@property (copy) id /* block */ knownNetworkComparator;
@property (copy) id /* block */ scanForNetworksHandler;
@property (copy) id /* block */ performGASQueryHandler;
@property (copy) id /* block */ allowJoinCandidateHandler;
@property (copy) id /* block */ joinCandidateComparator;
@property (copy) id /* block */ associateToNetworkHandler;
@property (copy) id /* block */ allowAutoHotspotHandler;
@property (copy) id /* block */ allowHotspotHandler;
@property (copy) id /* block */ browseForHotspotsHandler;
@property (copy) id /* block */ connectToHotspotHandler;
@property (copy) id /* block */ updateKnownNetworkHandler;
@property (copy) id /* block */ eventHandler;
@property (copy) id /* block */ invalidationHandler;
@property (retain) NSObject<OS_dispatch_queue> *targetQueue;
@property (copy) CLLocation *location;
@property (copy) CWFScanResult *associatedNetwork;
@property (copy) NSSet *knownNetworks;
@property (copy) NSSet *supportedChannels;
@property long long retrySchedule;

- (id)__passpointScanResults:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)__updateRetrySchedule;
- (void)__addRequest:(id)a0;
- (BOOL)__shouldResetRetryIntervalIndexForTrigger:(long long)a0;
- (void)__nextRequest;
- (void)__performAutoJoin;
- (BOOL)__allowAutoJoinWithTrigger:(long long)a0 error:(id *)a1;
- (void)setRetrySchedule:(long long)a0;
- (void)__updateAutoJoinState:(long long)a0;
- (BOOL)__allowKnownNetwork:(id)a0 trigger:(long long)a1 error:(id *)a2;
- (void)__prepareKnownNetworksContext:(id)a0;
- (BOOL)__discoverKnownNetworksWithContext:(id)a0 error:(id *)a1;
- (BOOL)__performAutoHotspotWithBrowseTimeout:(unsigned long long)a0 maxCacheAge:(unsigned long long)a1 cacheOnly:(BOOL)a2 error:(id *)a3;
- (id)__descriptionForError:(id)a0;
- (void)__sortKnownNetworks:(id)a0;
- (id)__basicChannelRepresentation:(id)a0;
- (long long)retrySchedule;
- (unsigned long long)__retryScheduleIndex;
- (id)__performScanWithChannelList:(id)a0 SSIDList:(id)a1 dwellTime:(unsigned long long)a2 maxCacheAge:(unsigned long long)a3 minimumRSSI:(long long)a4 cacheOnly:(BOOL)a5 isPreAssociationScan:(BOOL)a6 error:(id *)a7;
- (id)__performGASQueryWithScanResults:(id)a0 ANQPElementIDList:(id)a1 maxCacheAge:(unsigned long long)a2 cacheOnly:(BOOL)a3 error:(id *)a4;
- (id)__cachedScanResultsWithChannelList:(id)a0 maxCacheAge:(unsigned long long)a1 minimumRSSI:(long long)a2 ANQPElementIDList:(id)a3 maxANQPCacheAge:(unsigned long long)a4;
- (BOOL)__matchAndJoinScanResults:(id)a0 allowPreAssociationScan:(BOOL)a1 context:(id)a2 error:(id *)a3;
- (void)__sortJoinCandidates:(id)a0;
- (BOOL)__allowJoinCandidate:(id)a0 trigger:(long long)a1 error:(id *)a2;
- (id)__morePreferredKnownNetworksWithCandidate:(id)a0 knownNetworks:(id)a1;
- (id)__performPreAssociationScanWithContext:(id)a0 network:(id)a1;
- (BOOL)__performJoinWithNetwork:(id)a0 error:(id *)a1;
- (void)__updateDiscoverTimestampForJoinCandidates:(id)a0;
- (BOOL)__isAutoJoinCancelled:(id *)a0;
- (BOOL)__calloutToAllowAutoJoinWithTrigger:(long long)a0 error:(id *)a1;
- (BOOL)__calloutToAllowKnownNetwork:(id)a0 trigger:(long long)a1 error:(id *)a2;
- (id)__calloutToPerformGASQueryWithParameters:(id)a0 GASQueryNetworks:(id *)a1 error:(id *)a2;
- (id)__calloutToScanForNetworksWithParameters:(id)a0 scanChannels:(id *)a1 error:(id *)a2;
- (BOOL)__calloutToAllowJoinCandidate:(id)a0 trigger:(long long)a1 error:(id *)a2;
- (BOOL)__calloutToAssociateToNetwork:(id)a0 error:(id *)a1;
- (BOOL)__calloutToConnectToHotspot:(id)a0 error:(id *)a1;
- (id)__calloutToBrowseForHotspotsWithTimeout:(unsigned long long)a0 maxCacheAge:(unsigned long long)a1 cacheOnly:(BOOL)a2 error:(id *)a3;
- (long long)__calloutToAllowAutoHotspotWithTrigger:(long long)a0 error:(id *)a1;
- (BOOL)__calloutToAllowHotspot:(id)a0 error:(id *)a1;
- (long long)__allowAutoHotspotWithTrigger:(long long)a0 error:(id *)a1;
- (id)__browseForHotspotsWithTimeout:(unsigned long long)a0 maxCacheAge:(unsigned long long)a1 cacheOnly:(BOOL)a2 error:(id *)a3;
- (BOOL)__allowHotspot:(id)a0 error:(id *)a1;
- (void)__sortHotspotCandidates:(id)a0;
- (BOOL)__connectToHotspot:(id)a0 error:(id *)a1;
- (BOOL)__retryScheduleRepeatsLastInterval:(long long)a0;
- (id)__retryIntervalWithScheduleIndex:(unsigned long long)a0;
- (id)performAutoJoinWithParameters:(id)a0 reply:(id /* block */)a1;
- (void)cancelAutoJoinWithUUID:(id)a0 error:(id)a1 reply:(id /* block */)a2;

@end
