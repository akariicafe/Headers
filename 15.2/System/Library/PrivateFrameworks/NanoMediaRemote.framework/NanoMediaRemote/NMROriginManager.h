@class MPAVRoutingController, NSString, NSArray, NMROrigin, NSOrderedSet, NSDictionary, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface NMROriginManager : NSObject <MPAVRoutingControllerDelegate> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSOrderedSet *_availableOrigins;
    NSDictionary *_availableOriginsByDeviceIdentifier;
    NSDictionary *_availableOriginsByOriginIdentifier;
    NSNumber *_activeOriginIdentifier;
    NSNumber *_localOriginIdentifier;
    struct __CFArray { } *_availableOriginRefs;
    MPAVRoutingController *_companionRoutingController;
    MPAVRoutingController *_proxiedEndpointRoutingController;
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

- (void)_handleDeviceInfoDidChangeNotification:(id)a0;
- (void)routingControllerAvailableRoutesDidChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)_originFromTestOptions:(id)a0;
- (id)originWithUniqueIdentifier:(id)a0;
- (void)_handleMediaRemoteActiveOriginDidChangeNotification:(id)a0;
- (void)_handleMediaRemoteAvailableOriginsDidChangeNotification:(id)a0;
- (void)_updateMediaRemoteLocalOrigin;
- (void)_updateMediaRemoteAvailableAndActiveOrigins;
- (id)originWithDeviceIdentifier:(id)a0;
- (void)_onQueue_updateAvailableOrigins;
- (void)_onQueue_updateActiveOriginIdentifier:(id)a0;
- (id)originForPlayerPath:(id)a0;
- (void)_beginProxiedEndpointDiscovery;
- (void)_endProxiedEndpointDiscovery;

@end
