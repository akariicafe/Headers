@class NSArray, AVOutputDeviceDiscoverySessionAvailableOutputDevicesInternal;

@interface AVOutputDeviceDiscoverySessionAvailableOutputDevices : NSObject {
    AVOutputDeviceDiscoverySessionAvailableOutputDevicesInternal *_availableOutputDevices;
}

@property (readonly, nonatomic) NSArray *recentlyUsedDevices;
@property (readonly, nonatomic) NSArray *otherDevices;

+ (id)outputDeviceDiscoverySessionAvailableOutputDevicesWithAvailableFigEndpoints:(id)a0;

- (id)impl;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)_loadOutputDevices;
- (id)initWithOutputDeviceDiscoverySessionAvailableOutputDevicesImpl:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)availableOutputDeviceGroups;

@end
