@class NSString, FMXPCSession, FMXPCServiceDescription, NSObject;
@protocol OS_dispatch_queue, SPSecureLocationsXPCProtocol;

@interface SPSecureLocationsManager : NSObject <SPSecureLocationsXPCProtocol, SPSecureLocationsClientXPCProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) id<SPSecureLocationsXPCProtocol> proxy;
@property (copy, nonatomic) id /* block */ locationUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remoteInterface;
+ (id)exportedInterface;

- (oneway void)subscribeAndFetchLocationForIds:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (oneway void)shareCurrentKeyWithId:(id)a0 completion:(id /* block */)a1;
- (oneway void)receivedLocationCommand:(id)a0 completion:(id /* block */)a1;
- (void)invalidationHandler:(id)a0;
- (void)setLocationUpdateBlock:(id /* block */)a0;
- (oneway void)unsubscribeForId:(id)a0 clientApp:(id)a1 completion:(id /* block */)a2;
- (oneway void)fetchConfigFromServerWithCompletion:(id /* block */)a0;
- (oneway void)receivedUpdatedLocations:(id)a0;
- (oneway void)updateLocationCacheWith:(id)a0 completion:(id /* block */)a1;
- (oneway void)publishLocation:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (oneway void)isLocationPublishingDeviceWithCompletion:(id /* block */)a0;
- (id)init;
- (oneway void)shouldStartLocationMonitorWithCompletion:(id /* block */)a0;
- (void)interruptionHandler:(id)a0;
- (oneway void)performKeyRollWithCompletion:(id /* block */)a0;
- (oneway void)simulateFeatureDisabled:(BOOL)a0 completion:(id /* block */)a1;
- (oneway void)receivedLocationPayload:(id)a0 completion:(id /* block */)a1;
- (oneway void)unsubscribeForIds:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (oneway void)latestLocationFromCacheForId:(id)a0 completion:(id /* block */)a1;
- (oneway void)subscribeAndFetchLocationForIds:(id)a0 clientApp:(id)a1 completion:(id /* block */)a2;

@end
