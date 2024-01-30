@class NSMapTable, ATDeviceSyncManager, ATLockdownListener, NSObject, MSVXPCTransaction, ATXPCListener, ATEventScheduler, ATServiceProxyListener, ATStatusObserverListener, ATLegacyDeviceSyncManager, NSString, ATIDSService, ATEnvironmentMonitor, ATDeviceSettings, ATDevicePairedSyncManager, ATNetServiceListener;
@protocol OS_dispatch_queue;

@interface ATDeviceService : ATConcreteService <ATMessageLinkListenerDelegate, ATMessageLinkRequestHandler, ATEnvironmentMonitorObserver, ATXPCInterfaceProtocol, ATSyncClientDelegate, ATIDSServiceListener> {
    ATLockdownListener *_lockdownListener;
    ATLockdownListener *_legacyLockdownListener;
    ATNetServiceListener *_netServiceListener;
    ATDevicePairedSyncManager *_pairedSyncManager;
    ATIDSService *_idsService;
    ATXPCListener *_xpcListener;
    ATServiceProxyListener *_proxyListener;
    NSMapTable *_messageLinkProxyListeners;
    ATStatusObserverListener *_statusObserverListener;
    ATDeviceSyncManager *_deviceSyncManager;
    ATLegacyDeviceSyncManager *_legacyDeviceSyncManager;
    ATDeviceSettings *_settings;
    ATEventScheduler *_eventScheduler;
    ATEnvironmentMonitor *_environmentMonitor;
    MSVXPCTransaction *_xpcTransaction;
    int _atcRunningToken;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)run;
- (void)keepATCAlive:(BOOL)a0 withCompletion:(id /* block */)a1;
- (id)init;
- (void)getDataRestoreIsCompleteWithCompletion:(id /* block */)a0;
- (void)_addObserversToMessageLink:(id)a0;
- (void).cxx_destruct;
- (void)applicationInstallsDidChange:(id)a0;
- (void)messageLink:(id)a0 didReceiveRequest:(id)a1;
- (void)cancelSyncWithCompletion:(id /* block */)a0;
- (void)requestKeybagSyncToPairedDeviceWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (id)proxyListenerForMessageLink:(id)a0;
- (void)messageLinkWasClosed:(id)a0;
- (BOOL)stop;
- (void)purgePartialAsset:(id)a0 forDataclass:(id)a1 withCompletion:(id /* block */)a2;
- (void)listener:(id)a0 didReceiveMessageLinkRequest:(id)a1;
- (void)_requestSyncForLibrary:(id)a0 onMessageLink:(id)a1;
- (id)_deviceMessageLink;
- (void)syncChangesForDataClass:(id)a0 withPriority:(int)a1;
- (void)_cancelSyncForMessageLink:(id)a0;
- (void)getSyncStateWithCompletion:(id /* block */)a0;
- (void)lowBatteryNotificationWithCompletion:(id /* block */)a0;
- (void)applicationInstallsDidCancel:(id)a0;
- (void)environmentMonitorDidChangePower:(id)a0;
- (void)getAssetMetricswithCompletion:(id /* block */)a0;
- (void)addMessageLink:(id)a0;
- (void)syncClient:(id)a0 hasChangesWithPriority:(int)a1;
- (void)openDeviceMessageLinkWithPriority:(int)a0 withCompletion:(id /* block */)a1;
- (void)applicationInstallsArePrioritized:(id)a0 arePaused:(id)a1;
- (id)allMessageLinkProxyListeners;
- (void)handleDataMigrationFinished;
- (void)requestSyncForPairedDeviceWithPriority:(int)a0 withCompletion:(id /* block */)a1;
- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (void)applicationInstallsDidPrioritize:(id)a0;
- (void)initiateAssetDownloadSessionsWithCompletion:(id /* block */)a0;
- (void)_scheduleNewSyncIfNeeded;
- (void)requestSyncForLibrary:(id)a0 withCompletion:(id /* block */)a1;
- (void)registerForStatusOfDataclasses:(id)a0 enabled:(id)a1 withCompletion:(id /* block */)a2;
- (void)clearSyncDataWithCompletion:(id /* block */)a0;
- (void)idsServiceDevicesDidChange:(id)a0;
- (void)prioritizeAsset:(id)a0 forDataclass:(id)a1 withCompletion:(id /* block */)a2;
- (void)applicationsDidUninstall:(id)a0;
- (void)restoreFromDeviceWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_removeObserversFromMessageLink:(id)a0;
- (void)applicationsDidInstall:(id)a0;
- (void)cancelAssetTransferForFailedAsset:(id)a0;
- (void)removeMessageLink:(id)a0;
- (void)prioritizeAsset:(id)a0 withCompletion:(id /* block */)a1;

@end
