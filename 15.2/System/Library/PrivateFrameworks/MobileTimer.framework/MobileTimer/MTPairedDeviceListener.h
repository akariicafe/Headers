@class NSObject, NRDevice, NSString, MTObserverStore;
@protocol OS_dispatch_queue, NAScheduler;

@interface MTPairedDeviceListener : NSObject

@property (class, readonly) MTPairedDeviceListener *sharedListener;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serializerQueue;
@property (retain, nonatomic) id<NAScheduler> serializer;
@property (retain, nonatomic) MTObserverStore *observers;
@property (nonatomic) BOOL sleepEnabled;
@property (retain, nonatomic) NRDevice *pairedDevice;
@property (readonly) NSString *pairedDeviceVersion;
@property (readonly) BOOL hasActivePairedDevice;
@property (readonly) BOOL hasActivePairedDeviceSupportingSyncing;

+ (id)_handledNotifications;

- (BOOL)handlesNotification:(id)a0 ofType:(long long)a1;
- (void)handleNotification:(id)a0 ofType:(long long)a1 completion:(id /* block */)a2;
- (void)printDiagnostics;
- (void)notifyObserversWithBlock:(id /* block */)a0;
- (void)registerObserver:(id)a0;
- (void)_registerForLocalNotifications;
- (void)didReceiveNotification:(id)a0;
- (void)didReceiveNotificationNamed:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)hasActivePairedDeviceCheckSyncing:(BOOL)a0;
- (void)updateActiveDeviceInfo;

@end
