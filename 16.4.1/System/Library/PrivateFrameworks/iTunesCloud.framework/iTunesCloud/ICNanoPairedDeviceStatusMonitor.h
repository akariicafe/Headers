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

@property (class, readonly, nonatomic) ICNanoPairedDeviceStatusMonitor *sharedMonitor;

@property (readonly, copy, nonatomic) NSArray *allPairedDevicePairingIDs;
@property (readonly, copy, nonatomic) NSArray *allPairedDeviceGUIDs;
@property (readonly, copy, nonatomic) NSUUID *activePairedDevicePairingID;
@property (readonly, copy, nonatomic) NSUUID *pairedDevicePairingID;
@property (readonly, copy, nonatomic) NSString *pairedDeviceGUID;
@property (readonly, copy, nonatomic) NSString *pairedDeviceMediaGUID;
@property (readonly, nonatomic) BOOL isInitialSyncComplete;
@property (readonly, nonatomic, getter=isMediaSyncingSupported) BOOL mediaSyncingSupported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_activePairedDevice;
- (void)addObserver:(id)a0;
- (id)_init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)initialSyncStateObserver:(id)a0 initialSyncDidCompleteForPairingIdentifier:(id)a1;
- (id)_allObservers;
- (void)_handlePairedDeviceChangedNotification;
- (void).cxx_destruct;
- (void)deviceBecameActive:(id)a0;

@end
