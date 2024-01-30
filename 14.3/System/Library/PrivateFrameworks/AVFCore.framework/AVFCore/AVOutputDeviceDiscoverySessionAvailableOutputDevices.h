@class NSArray, AVOutputDeviceDiscoverySessionAvailableOutputDevicesInternal;

@interface AVOutputDeviceDiscoverySessionAvailableOutputDevices : NSObject {
    AVOutputDeviceDiscoverySessionAvailableOutputDevicesInternal *_availableOutputDevices;
}

@property (readonly, nonatomic) NSArray *recentlyUsedDevices;
@property (readonly, nonatomic) NSArray *otherDevices;

+ (id)outputDeviceDiscoverySessionAvailableOutputDevicesWithAvailableFigEndpoints:(id)a0;

- (id)impl;
- (id)init;
- (void)dealloc;
- (id)initWithOutputDeviceDiscoverySessionAvailableOutputDevicesImpl:(id)a0;
- (void)_loadOutputDevices;
- (id)availableOutputDeviceGroups;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
