@class NSMutableSet, _DKEventTypeResultStatsCounter, NSDictionary, NSString, RPCompanionLinkClient, NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

@interface _DKSyncRapportCommonStorage : NSObject <_DKSyncRemoteStorage, _DKSyncCommonClass> {
    BOOL _running;
    NSDictionary *_failIfAsleepOption;
    _DKEventTypeResultStatsCounter *_failIfAsleepStats;
    NSString *_deviceID;
    RPCompanionLinkClient *_client;
    NSMutableDictionary *_companionLinkClients;
    unsigned long long _outstandingRequestCount;
    NSObject<OS_dispatch_source> *_companionLinkClientsCleanupTimer;
    double _retryTimeout;
    NSMutableSet *_peerSourceDeviceIDsWithCompletedHandshakes;
}

@property (nonatomic) BOOL isAvailable;

+ (id)sharedInstance;

- (void)cancelOutstandingOperations;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isTransportActiveForPeer:(id)a0;
- (void)sendRequestID:(id)a0 request:(id)a1 peer:(id)a2 highPriority:(BOOL)a3 options:(id)a4 responseHandler:(id /* block */)a5;
- (long long)transportType;
- (void)dealloc;
- (void)handleAvailabilityFailureWithPeer:(id)a0 completion:(id /* block */)a1;
- (id)myDeviceID;
- (void)fetchSourceDeviceIDFromPeer:(id)a0 highPriority:(BOOL)a1 completion:(id /* block */)a2;
- (void)start;
- (id)name;
- (id)transformCaughtObject:(id)a0 existingError:(id)a1;
- (id)client;
- (void)handshakeWithDuetSyncPeer:(id)a0 orError:(id)a1;
- (void)setDeviceID:(id)a0;
- (id)transformResponseError:(id)a0;

@end
