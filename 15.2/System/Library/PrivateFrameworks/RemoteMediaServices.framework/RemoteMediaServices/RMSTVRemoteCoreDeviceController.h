@class NSString, NSMapTable, TVRCDeviceQuery, NSObject;
@protocol OS_dispatch_queue;

@interface RMSTVRemoteCoreDeviceController : NSObject <TVRCDeviceQueryDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    TVRCDeviceQuery *_deviceQuery;
    NSMapTable *_discoveryCompletionHandlers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (void).cxx_destruct;
- (id)init;
- (id)deviceForIdentifier:(id)a0;
- (id)_deviceForIdentifier:(id)a0;
- (void)deviceQueryDidUpdateDevices:(id)a0;
- (void)_finishDiscoveryWithDevice:(id)a0 forIdentifier:(id)a1;
- (void)discoverDeviceWithIdentifier:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;

@end
