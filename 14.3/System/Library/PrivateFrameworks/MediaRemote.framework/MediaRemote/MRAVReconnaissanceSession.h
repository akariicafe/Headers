@class NSString, NSArray, MRAVEndpoint, NSSet, NSMutableDictionary, NSMutableArray, MRAVRoutingDiscoverySession, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MRAVReconnaissanceSession : NSObject {
    double _timeoutTimerTimeout;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_localMatchingDevicesFound;
    BOOL _searchInProgress;
    BOOL _shouldWaitForUnanimousEndpoints;
    MRAVRoutingDiscoverySession *_discoverySession;
    NSSet *_matchingOutputDeviceUIDsSet;
    NSString *_matchingOutputDeviceGroupID;
    id _discoverySessionCallbackToken;
    id /* block */ _callback;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSObject<OS_dispatch_queue> *_callbackSyncQueue;
    NSMutableDictionary *_matchingDevicesFound;
    NSMutableArray *_matchingEndpointsFound;
    MRAVEndpoint *_unanimousEndpoint;
    NSArray *_availableOutputDevices;
    NSArray *_availableEndpoints;
    unsigned long long _updatesReceived;
    NSArray *_lastProcessedOutputDevices;
    NSArray *_lastProcessedEndpoints;
    unsigned long long _expectedLogicalDevices;
}

@property (readonly, nonatomic) NSArray *matchingOutputDeviceUIDs;
@property (readonly, nonatomic) NSString *matchingOutputDeviceGroupID;
@property (readonly, nonatomic) unsigned int endpointFeatures;
@property (readonly, nonatomic) MRAVRoutingDiscoverySession *discoverySession;
@property (nonatomic) BOOL useWeakMatching;
@property (nonatomic) BOOL returnPartialResults;
@property (nonatomic) BOOL waitForCompleteClusters;
@property (copy, nonatomic) NSArray *matchingLogicalDeviceIDs;

- (void)cancelSearch;
- (void).cxx_destruct;
- (void)dealloc;
- (void)beginSearchWithTimeout:(double)a0 mapCompletion:(id /* block */)a1;
- (id)initWithOutputDeviceUIDs:(id)a0 outputDeviceGroupID:(id)a1 features:(unsigned int)a2;
- (void)beginSearchWithTimeout:(double)a0 completion:(id /* block */)a1;
- (void)beginSearchWithTimeout:(double)a0 endpointsCompletion:(id /* block */)a1;

@end
