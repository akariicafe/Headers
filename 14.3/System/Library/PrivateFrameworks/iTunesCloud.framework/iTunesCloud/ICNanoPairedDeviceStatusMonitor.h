@class PSYInitialSyncStateObserver, NSArray, NSUUID, NSString, NSObject, NSMapTable;
@protocol OS_dispatch_queue;

@interface ICNanoPairedDeviceStatusMonitor : NSObject <PSYInitialSyncStateObserverDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callBackQueue;
    NSMapTable *_observers;
    NSString *_pairingIDPropertyName;
    NSString *_pairedDeviceGUID;
    NSString *_pairedDeviceMediaGUID;
    PSYInitialSyncStateObserver *_initialSyncStateObserver;
}

@property (class, readonly) ICNanoPairedDeviceStatusMonitor *sharedMonitor;

@property (readonly, copy, nonatomic) NSArray *allPairedDevicePairingIDs;
@property (readonly, copy, nonatomic) NSUUID *activePairedDevicePairingID;
@property (readonly, copy, nonatomic) NSUUID *pairedDevicePairingID;
@property (readonly, copy, nonatomic) NSString *pairedDeviceGUID;
@property (readonly, copy, nonatomic) NSString *pairedDeviceMediaGUID;
@property (nonatomic) BOOL isInitialSyncComplete;
@property (readonly, nonatomic, getter=isMediaSyncingSupported) BOOL mediaSyncingSupported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)deviceBecameActive:(id)a0;
- (id)_init;
- (id)_activePairedDevice;
- (void)initialSyncStateObserver:(id)a0 initialSyncDidCompleteForPairingIdentifier:(id)a1;
- (id)_allObservers;
- (void)_handlePairedDeviceChangedNotification;

@end
