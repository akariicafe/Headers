@class NSDate, NSUUID, NSString, WBSEncryptedCloudKeyValueStore, NSTimer, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, CloudTabStoreDelegate;

@interface CloudTabStore : WBSCloudTabStore <WBSCloudTabStoreDelegate> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    WBSEncryptedCloudKeyValueStore *_syncedDevicesStore;
    WBSEncryptedCloudKeyValueStore *_userRequestsStore;
    NSTimer *_refreshTimer;
    long long _periodicUpdateRequestCount;
    BOOL _hasInitiatedFetchOfCloudKitDataAtLeastOnce;
    BOOL _hasCompletedFetchOfCloudKitDataAtLeastOnce;
    NSMutableArray *_fetchCloudKitDataCompletionHandlers;
    BOOL _didAttemptToCloseAtLeastOneTab;
    NSDate *_dateOfLastCloudTabDevicesUpdate;
}

@property (setter=_setCloudKitDataNeedsFetching:) BOOL _cloudKitDataNeedsFetching;
@property (readonly, nonatomic) NSUUID *currentDeviceUUID;
@property (weak, nonatomic) id<CloudTabStoreDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCloudTabStore;

- (id)currentDevice;
- (void)synchronizeCloudTabDevices;
- (id)_keyValueStoreDictionaryRepresentation:(long long)a0;
- (void)saveCurrentDeviceTabsFromBrowserSavedState:(id)a0 syncCompletionHandler:(id /* block */)a1;
- (void)_userRequestsStoreDidUpdate:(id)a0;
- (void)fetchSyncedCloudTabDevicesAndCloseRequestsFromCloudKit;
- (BOOL)cloudTabsAreEnabled;
- (void)clearTabsForCurrentDevice;
- (void)startPerformingPeriodicUpdates;
- (void)_clearAllDevices;
- (BOOL)_shouldUseCloudKitForSavingCurrentDevice;
- (id)dateOfLastCloudTabDevicesUpdate;
- (void)_saveCurrentDeviceCloudTabs:(id)a0 syncCompletionHandler:(id /* block */)a1;
- (id)_storeForIdentifier:(long long)a0;
- (BOOL)closeTabs:(id)a0 onDevice:(id)a1;
- (void)didUpdateDevicesAndCloseRequestsFromCloudKitForCloudTabStore:(id)a0 error:(id)a1;
- (void)didGetCachedDevicesFromCloudKitForCloudTabStore:(id)a0;
- (void)_clearTabsForCurrentDeviceWithSyncCompletionHandler:(id /* block */)a0;
- (void)_cloudTabsEnabledDidChange;
- (id)_currentDeviceUUID;
- (void).cxx_destruct;
- (void)_removeConflictingDevice;
- (void)synchronizeCloudTabDevicesWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (void)saveCurrentDeviceCloudTabsForEnteringBackground:(id)a0 completion:(id /* block */)a1;
- (void)_removeObjectFromKeyValueStore:(long long)a0 forKey:(id)a1;
- (void)_requestUpdateFromServer;
- (void)_callFetchCloudKitDataCompletionHandlers;
- (BOOL)closeAllTabsOnDevice:(id)a0;
- (void)_cloudKitDataDidUpdateOnServer:(id)a0;
- (void)_notifyCloudTabStoreDidUpdateWithType:(id)a0;
- (id)syncedCloudTabDevices;
- (BOOL)canSaveCloudTabsForCurrentDevice;
- (void)stopObservingTabStoreStateChanges;
- (void)stopPerformingPeriodicUpdates;
- (BOOL)closeTab:(id)a0 onDevice:(id)a1;
- (void)_waitForInitialCloudKitFetchToComplete:(id /* block */)a0;
- (void)_closeRequestedTabIfPossible:(id)a0;
- (void)saveCurrentDeviceTabsFromBrowserSavedState:(id)a0;
- (void)_setDictionaryInKeyValueStore:(long long)a0 dictionary:(id)a1 forKey:(id)a2;
- (void)startObservingTabStoreStateChanges;
- (void)_syncedDevicesStoreDidUpdate:(id)a0;
- (void)saveCurrentDeviceCloudTabs:(id)a0;
- (void)_refreshTimerDidFire:(id)a0;

@end
