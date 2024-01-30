@class NSString, ATDeviceService, NSObject;
@protocol OS_dispatch_queue;

@interface ATDevicePairedSyncManager : NSObject <ICNanoPairedDeviceStatusObserver, ATMessageLinkObserver, ATSessionObserver> {
    ATDeviceService *_deviceService;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPairedSyncManager;

- (void)_setInstallDateIfNeededForBundleID:(id)a0;
- (void)_triggerInitialSync;
- (void)nanoPairedDeviceStatusMonitor:(id)a0 didChangeClientSyncState:(unsigned long long)a1;
- (void)nanoPairedDeviceStatusMonitor:(id)a0 didFinishInitialSyncForPairingIdentifier:(id)a1;
- (BOOL)hasRestriction;
- (void)start;
- (void).cxx_destruct;
- (void)nanoPairedDeviceStatusMonitorNewActiveDevice:(id)a0;
- (id)init;
- (void)nanoPairedDeviceStatusMonitorPairedDeviceChanged:(id)a0;
- (void)_cleanupSyncState;
- (void)stop;

@end
