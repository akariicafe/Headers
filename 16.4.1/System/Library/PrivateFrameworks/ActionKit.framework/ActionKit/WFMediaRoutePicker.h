@class WFBluetoothSettingsClient, MPAVRoutingController, NSArray, AVAudioSession, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface WFMediaRoutePicker : NSObject <MPAVRoutingControllerDelegate>

@property (retain, nonatomic) AVAudioSession *routingAudioSession;
@property (retain, nonatomic) MPAVRoutingController *routingController;
@property (readonly, nonatomic) WFBluetoothSettingsClient *bluetoothClient;
@property (readonly, nonatomic) NSMutableArray *observers;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) long long routeType;
@property (readonly, nonatomic) NSArray *availableRoutes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)routingControllerAvailableRoutesDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)findHandoffRoutesMatchingDescriptors:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;
- (void)addAvailableRoutesObserver:(id)a0;
- (void)findHandoffRouteMatchingDescriptor:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;
- (void)findRouteMatchingDescriptor:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;
- (void)findRoutesMatchingDescriptors:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;
- (void)getPairedAudioDevicesMatchingRouteDescriptor:(id)a0 withCompletion:(id /* block */)a1;
- (void)handOffFromSourceUID:(id)a0 toDestinationUID:(id)a1 timeout:(double)a2 completionHandler:(id /* block */)a3;
- (id)initWithRouteType:(long long)a0;
- (void)removeAvailableRoutesObserver:(id)a0;
- (void)selectRoute:(id)a0 operation:(long long)a1 timeout:(double)a2 completionHandler:(id /* block */)a3;
- (void)startDiscoveringRoutes;
- (void)stopDiscoveringRoutes;

@end
