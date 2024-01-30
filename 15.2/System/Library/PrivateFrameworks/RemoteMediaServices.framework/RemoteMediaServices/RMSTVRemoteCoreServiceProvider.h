@class NSString, NSSet, TVRCDeviceQuery, NSMapTable, NSObject;
@protocol OS_dispatch_queue, RMSServiceProviderDelegate;

@interface RMSTVRemoteCoreServiceProvider : NSObject <TVRCDeviceQueryDelegate, RMSServiceProvider> {
    NSObject<OS_dispatch_queue> *_queue;
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

- (void)beginDiscovery;
- (void)endDiscovery;
- (void).cxx_destruct;
- (id)init;
- (void)_didRemoveDevice:(id)a0;
- (void)_didDiscoverDevice:(id)a0;
- (void)deviceQueryDidUpdateDevices:(id)a0;

@end
