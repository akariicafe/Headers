@class NSArray, NSString;

@interface AVFigEndpointOutputDeviceDiscoverySessionAvailableOutputDevicesImpl : NSObject <AVOutputDeviceDiscoverySessionAvailableOutputDevicesImpl> {
    NSArray *_figEndpoints;
}

@property (readonly, nonatomic) NSArray *allDevices;
@property (readonly, nonatomic) NSArray *availableOutputDeviceGroups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAvailableFigEndpoints:(id)a0;
- (id)init;
- (void)dealloc;

@end
