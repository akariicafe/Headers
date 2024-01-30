@class NSObject;
@protocol OS_dispatch_queue;

@interface MPAVRoutingDataSource : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (nonatomic) long long discoveryMode;
@property (readonly, nonatomic) BOOL devicePresenceDetected;
@property (readonly, nonatomic) BOOL supportsMultipleSelection;
@property (nonatomic) long long filterMode;

- (id)init;
- (void).cxx_destruct;
- (BOOL)routeIsLeaderOfEndpoint:(id)a0;
- (void)dealloc;
- (void)_activeAudioRouteDidChangeNotification:(id)a0;
- (id)getRoutesForCategory:(id)a0;
- (void)_externalScreenTypeDidChangeNotification:(id)a0;
- (void)getExternalScreenTypeWithCompletion:(id /* block */)a0;
- (void)unpickAirPlayAVRoutesWithCompletion:(id /* block */)a0;
- (void)_superclassRegisterNotifications;
- (void)_superclassUnregisterNotifications;
- (void)setPickedRoute:(id)a0 withPassword:(id)a1 completion:(id /* block */)a2;
- (void)_volumeControlAvailabilityDidChangeNotification:(id)a0;
- (void)getPickedRouteHasVolumeControlWithCompletion:(id /* block */)a0;

@end
