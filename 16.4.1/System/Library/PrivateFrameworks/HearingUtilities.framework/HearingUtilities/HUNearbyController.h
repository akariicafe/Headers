@class NSMutableArray, NSArray, NSMutableDictionary, AXDispatchTimer, NSString, NSObject, IDSService;
@protocol OS_dispatch_queue;

@interface HUNearbyController : NSObject <IDSServiceDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _syncLock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *nearbyUpdatesQueue;
@property (copy, nonatomic) NSArray *availableDevices;
@property (retain, nonatomic) IDSService *service;
@property (retain, nonatomic) NSMutableDictionary *domainQueues;
@property (retain, nonatomic) NSMutableArray *registeredDomains;
@property (retain, nonatomic) NSMutableDictionary *loggingUpdates;
@property (retain, nonatomic) NSMutableDictionary *messageUpdates;
@property (retain, nonatomic) NSMutableDictionary *discoveryUpdates;
@property (retain, nonatomic) AXDispatchTimer *nearbyHysteresisTimer;
@property (nonatomic) BOOL shouldPublishNearbyUpdates;
@property (nonatomic) BOOL hasPendingNearbyUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)service:(id)a0 nearbyDevicesChanged:(id)a1;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)logMessage:(id)a0;
- (id)nearbyDevices;
- (void)service:(id)a0 connectedDevicesChanged:(id)a1;
- (void)stop;
- (id)init;
- (void)start;
- (void).cxx_destruct;
- (void)discoverNearbyDevicesWithDomain:(id)a0;
- (id)nearbyDeviceWithIdentifier:(id)a0;
- (void)nearbyDevicesDidUpdateWithNewDevices:(id)a0 forDomain:(id)a1;
- (void)registerBlock:(id)a0 forKey:(id)a1 withUpdateGroup:(id)a2 forDomain:(id)a3 withListener:(id)a4;
- (void)registerDiscoveryBlock:(id /* block */)a0 forDomain:(id)a1 withListener:(id)a2;
- (void)registerLoggingBlock:(id /* block */)a0 forDomain:(id)a1 withListener:(id)a2;
- (void)registerMessageBlock:(id /* block */)a0 forDomain:(id)a1 withListener:(id)a2;
- (void)registerQueue:(id)a0 forDomain:(id)a1;
- (void)sendMessage:(id)a0 toDevicesWithDomain:(id)a1 withPriority:(unsigned long long)a2;
- (void)sendMessage:(id)a0 withDomain:(id)a1 toDevices:(id)a2 withPriority:(unsigned long long)a3;
- (void)stopDiscoveringDevicesWithDomain:(id)a0;

@end
