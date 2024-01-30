@class NSObject, NSHashTable, RPCompanionLinkClient, NSMutableArray, IDSService;
@protocol OS_dispatch_queue;

@interface AXRDeviceDiscoveryManager : NSObject {
    NSObject<OS_dispatch_queue> *_deviceQueue;
    NSHashTable *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
}

@property (retain, nonatomic) RPCompanionLinkClient *companionLinkClient;
@property (retain, nonatomic) NSMutableArray *discoveredDevices;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } devicesLock;
@property (retain, nonatomic) IDSService *service;

+ (id)sharedInstance;

- (void)addObserver:(id)a0;
- (id)_init;
- (void)removeObserver:(id)a0;
- (void)_enumerateObservers:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_discoveredDevicesChanged;
- (unsigned long long)_indexOfDeviceWithEffectiveIdentifier:(id)a0;
- (id)cachedDiscoveredDevices;
- (id)mineDevices;

@end
