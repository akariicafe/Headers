@class NSString, FMXPCSession, FMXPCServiceDescription, NSObject;
@protocol OS_dispatch_queue, SPSecureLocationsXPCProtocol;

@interface SPSecureLocationsManager : NSObject <SPSecureLocationsClientXPCProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) id<SPSecureLocationsXPCProtocol> proxy;
@property (copy, nonatomic) id /* block */ locationUpdates;
@property (copy, nonatomic) id /* block */ stewieUpdateBlock;
@property (nonatomic) long long lastUpdatedStewieState;
@property (nonatomic) unsigned long long stewieRetryCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remoteInterface;
+ (id)exportedInterface;

- (void)invalidationHandler:(id)a0;
- (void)interruptionHandler:(id)a0;
- (void)performKeyRollWithCompletion:(id /* block */)a0;
- (void)unsubscribeForId:(id)a0 clientApp:(id)a1 completion:(id /* block */)a2;
- (void)isLocationPublishingDeviceWithCompletion:(id /* block */)a0;
- (void)setLocationUpdateBlock:(id /* block */)a0;
- (void)stewieServiceStateChanged:(long long)a0;
- (double)_decayedWaitIntervalForRetryCount:(unsigned long long)a0;
- (void)receivedLocationCommand:(id)a0 completion:(id /* block */)a1;
- (void)receivedUpdatedLocations:(id)a0;
- (void)shouldStartLocationMonitorWithCompletion:(id /* block */)a0;
- (void)receivedLocationPayload:(id)a0 completion:(id /* block */)a1;
- (void)fetchConfigFromServerWithCompletion:(id /* block */)a0;
- (void)unsubscribeForIds:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)subscribeAndFetchLocationForIds:(id)a0 clientApp:(id)a1 completion:(id /* block */)a2;
- (void)updateLocationCacheWith:(id)a0 completion:(id /* block */)a1;
- (void)stewiePublishStateWithCompletion:(id /* block */)a0;
- (void)startMonitoringStewieStateWithBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)subscribeAndFetchLocationForIds:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)latestLocationFromCacheForId:(id)a0 completion:(id /* block */)a1;
- (void)publishLocation:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)triggerStewieProactiveNotification;
- (void)currentStewieStateWithCompletion:(id /* block */)a0;
- (void)simulateFeatureDisabled:(BOOL)a0 completion:(id /* block */)a1;
- (void)shareCurrentKeyWithId:(id)a0 completion:(id /* block */)a1;
- (void)stopMonitoringStewieStateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)publishCurrentLocationToStewieWithReason:(long long)a0 completion:(id /* block */)a1;

@end
