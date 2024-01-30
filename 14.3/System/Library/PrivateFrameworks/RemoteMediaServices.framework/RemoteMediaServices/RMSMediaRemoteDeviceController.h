@class NSMapTable;

@interface RMSMediaRemoteDeviceController : NSObject {
    NSMapTable *_devices;
}

+ (id)sharedController;

- (id)init;
- (void).cxx_destruct;
- (void)addDevice:(void *)a0;
- (void)removeDevice:(void *)a0;
- (void)discoverDeviceWithUniqueIdentifier:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;
- (id)_keyWithDevice:(void *)a0;
- (void *)deviceForUniqueIdentifier:(id)a0;

@end
