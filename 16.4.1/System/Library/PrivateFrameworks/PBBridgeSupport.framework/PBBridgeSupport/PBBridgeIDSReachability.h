@class PBBridgeIDSReachabilityStatusObject, NSString, NSMutableOrderedSet, NSObject, IDSService;
@protocol OS_dispatch_queue;

@interface PBBridgeIDSReachability : NSObject <IDSServiceDelegate> {
    NSMutableOrderedSet *_observers;
    IDSService *_reachabilityService;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    PBBridgeIDSReachabilityStatusObject *_activeDeviceStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)deviceStatusFromIDSDevices:(id)a0 nrDevices:(id)a1;
+ (id)nrDevices;

- (void)service:(id)a0 nearbyDevicesChanged:(id)a1;
- (void)service:(id)a0 devicesChanged:(id)a1;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)service:(id)a0 activeAccountsChanged:(id)a1;
- (void)service:(id)a0 connectedDevicesChanged:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)service:(id)a0 linkedDevicesChanged:(id)a1;
- (void)_processDevices:(id)a0;
- (id)getDeviceStatusChangeFromIDSDevices:(id)a0 nrDevices:(id)a1;
- (unsigned long long)reachabilityForDevice:(id)a0;

@end
