@class NSUUID, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface _SYDeviceMonitor : NSObject {
    NSMutableSet *_devices;
    NSUUID *_currentTargetDeviceUUID;
    NSObject<OS_dispatch_queue> *_syncQ;
}

+ (id)sharedInstance;

- (id)deviceForPairingID:(id)a0;
- (void)addNRDevice:(id)a0;
- (void)_deviceDidBecomeActive:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_rebuildDeviceList;
- (void)removeNRDevice:(id)a0;
- (void)_deviceDidBecomeInactive:(id)a0;
- (void)deviceBecameTargetable:(id)a0;
- (id)allDevices;
- (id)deviceForNRDevice:(id)a0;
- (void)_clearDeviceList;
- (id)currentTargetableDevice;

@end
