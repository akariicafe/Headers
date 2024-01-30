@class MPAVRoutingController, NSString, NSArray, BKSProcessAssertion, NMROrigin, NSOrderedSet, NSDictionary, NSObject, NSMutableSet, NSNumber;
@protocol OS_dispatch_queue;

@interface NMROriginManager : NSObject <MPAVRoutingControllerDelegate> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSOrderedSet *_availableOrigins;
    NSDictionary *_availableOriginsByDeviceIdentifier;
    NSDictionary *_availableOriginsByOriginIdentifier;
    NSNumber *_activeOriginIdentifier;
    NSNumber *_localOriginIdentifier;
    MPAVRoutingController *_endpointRoutingController;
    NSMutableSet *_lastAvailableEndpointRouteUIDs;
    BKSProcessAssertion *_endpointDiscoveryProcessAssertion;
    struct __CFArray { } *_availableOriginRefs;
}

@property (class, readonly) NMROriginManager *sharedManager;

@property (readonly, nonatomic) NSArray *availableOrigins;
@property (readonly, nonatomic) NMROrigin *activeOrigin;
@property (readonly, nonatomic) NMROrigin *localOrigin;
@property (readonly, nonatomic) NMROrigin *companionOrigin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)routingControllerAvailableRoutesDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_handleDeviceInfoDidChangeNotification:(id)a0;
- (id)_originFromTestOptions:(id)a0;
- (id)originWithDeviceIdentifier:(id)a0;
- (void)_handleMediaRemoteActiveOriginDidChangeNotification:(id)a0;
- (void)_handleMediaRemoteAvailableOriginsDidChangeNotification:(id)a0;
- (void)_updateMediaRemoteLocalOrigin;
- (void)_updateMediaRemoteAvailableAndActiveOrigins;
- (void)_onQueue_updateAvailableOrigins;
- (void)_onQueue_updateActiveOriginIdentifier:(id)a0;
- (id)originWithUniqueIdentifier:(id)a0;
- (BOOL)_isEndpointDiscoveryEnabled;
- (void)_setEndpointDiscoveryEnabled:(BOOL)a0;
- (void)_forgetDiscoveredEndpoints;

@end
