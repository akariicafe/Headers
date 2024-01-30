@class NSString, NSSet, TVRCDeviceQuery, NSMapTable;
@protocol RMSServiceProviderDelegate;

@interface RMSTVRemoteCoreServiceProvider : NSObject <TVRCDeviceQueryDelegate, RMSServiceProvider> {
    TVRCDeviceQuery *_deviceQuery;
    NSSet *_devices;
    NSMapTable *_services;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<RMSServiceProviderDelegate> delegate;

+ (id)_serviceWithDevice:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)beginDiscovery;
- (void)endDiscovery;
- (void)deviceQueryDidUpdateDevices:(id)a0;
- (void)_didDiscoverDevice:(id)a0;
- (void)_didRemoveDevice:(id)a0;

@end
