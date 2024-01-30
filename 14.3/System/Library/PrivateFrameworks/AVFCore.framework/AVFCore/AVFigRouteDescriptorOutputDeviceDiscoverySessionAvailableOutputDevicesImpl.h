@class NSArray, NSString;

@interface AVFigRouteDescriptorOutputDeviceDiscoverySessionAvailableOutputDevicesImpl : NSObject <AVOutputDeviceDiscoverySessionAvailableOutputDevicesImpl> {
    NSArray *_routeDescriptors;
    struct OpaqueFigRouteDiscoverer { } *_routeDiscoverer;
    struct OpaqueAPSyncController { } *_syncController;
}

@property (readonly, nonatomic) NSArray *allDevices;
@property (readonly, nonatomic) NSArray *availableOutputDeviceGroups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithRouteDescriptors:(id)a0 routeDiscoverer:(struct OpaqueFigRouteDiscoverer { } *)a1 syncController:(struct OpaqueAPSyncController { } *)a2;

@end
