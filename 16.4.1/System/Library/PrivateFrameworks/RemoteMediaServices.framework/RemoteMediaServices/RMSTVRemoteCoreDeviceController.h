@class NSString, TVRCDeviceQuery, NSMapTable;

@interface RMSTVRemoteCoreDeviceController : NSObject <TVRCDeviceQueryDelegate> {
    TVRCDeviceQuery *_deviceQuery;
    NSMapTable *_discoveryCompletionHandlers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (id)deviceForIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)_deviceForIdentifier:(id)a0;
- (void)deviceQueryDidUpdateDevices:(id)a0;
- (void)_finishDiscoveryWithDevice:(id)a0 forIdentifier:(id)a1;
- (void)discoverDeviceWithIdentifier:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;

@end
