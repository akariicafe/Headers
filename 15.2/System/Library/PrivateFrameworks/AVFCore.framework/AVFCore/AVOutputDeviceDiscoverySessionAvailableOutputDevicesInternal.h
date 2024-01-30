@class NSMutableArray;
@protocol AVOutputDeviceDiscoverySessionAvailableOutputDevicesImpl;

@interface AVOutputDeviceDiscoverySessionAvailableOutputDevicesInternal : NSObject {
    id<AVOutputDeviceDiscoverySessionAvailableOutputDevicesImpl> impl;
    NSMutableArray *_recentlyUsedDevices;
    NSMutableArray *_otherDevices;
}

@end
