@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MPAVRoutingDataSource : NSObject <NSObject> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSString *_activeAudioCategory;
}

@property (readonly, copy, nonatomic) NSString *activeAudioCategory;
@property (readonly, nonatomic) BOOL didFinishLoading;
@property (nonatomic) long long discoveryMode;
@property (readonly, nonatomic) BOOL devicePresenceDetected;
@property (readonly, nonatomic) BOOL supportsMultipleSelection;
@property (nonatomic) long long filterMode;
@property (nonatomic) unsigned int targetSessionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_volumeControlAvailabilityDidChangeNotification:(id)a0;
- (BOOL)routeIsLeaderOfEndpoint:(id)a0;
- (void)getPickedRouteHasVolumeControlWithCompletion:(id /* block */)a0;
- (void)_activeAudioRouteDidChangeNotification:(id)a0;
- (void).cxx_destruct;
- (id)getRoutesForCategory:(id)a0;
- (id)init;
- (void)dealloc;
- (id)_stateDumpObject;
- (void)_externalScreenTypeDidChangeNotification:(id)a0;
- (void)getExternalScreenTypeWithCompletion:(id /* block */)a0;
- (void)unpickAirPlayAVRoutesWithCompletion:(id /* block */)a0;
- (void)_reloadActiveAudioCategoryWithCompletion:(id /* block */)a0;
- (void)_superclassRegisterNotifications;
- (void)_superclassUnregisterNotifications;
- (void)setPickedRoute:(id)a0 withPassword:(id)a1 completion:(id /* block */)a2;

@end
