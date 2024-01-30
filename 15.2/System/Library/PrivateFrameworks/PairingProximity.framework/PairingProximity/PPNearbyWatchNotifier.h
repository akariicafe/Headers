@class NSString, NSXPCConnection, PPDiscoveryManager, NSObject;
@protocol OS_dispatch_source;

@interface PPNearbyWatchNotifier : NSObject <PPDiscoveryManagerDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timerSource;
@property (retain, nonatomic) PPDiscoveryManager *discoveryManager;
@property (copy, nonatomic) id /* block */ discoveryCompletion;
@property (retain, nonatomic) NSXPCConnection *notificationService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedNotifier;
+ (BOOL)shouldScanForNearbyDevices;
+ (BOOL)isWatchAppRemoved;

- (void).cxx_destruct;
- (id)discoverForTimeInterval:(double)a0 signalLimit:(long long)a1 completion:(id /* block */)a2;
- (void)didStopDiscovering;
- (void)_cleanupDiscoveryDidFindDevice:(BOOL)a0 error:(id)a1;
- (void)prepareServiceConnectionIfNeeded;
- (void)didDiscoverDeviceWithAdvertisingID:(id)a0 signalStrength:(long long)a1;
- (id)discoverForNearbyWatchesWithCompletion:(id /* block */)a0;
- (void)cancelDiscovery;

@end
