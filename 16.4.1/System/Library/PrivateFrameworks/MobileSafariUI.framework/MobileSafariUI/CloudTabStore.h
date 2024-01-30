@class NSUUID, NSString, WBSEncryptedCloudKeyValueStore, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, CloudTabStoreDelegate;

@interface CloudTabStore : WBSCloudTabStore <WBSCloudTabStoreDelegate> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    WBSEncryptedCloudKeyValueStore *_syncedDevicesStore;
    WBSEncryptedCloudKeyValueStore *_userRequestsStore;
    BOOL _hasInitiatedFetchOfCloudKitDataAtLeastOnce;
    BOOL _hasCompletedFetchOfCloudKitDataAtLeastOnce;
    NSMutableArray *_fetchCloudKitDataCompletionHandlers;
    BOOL _didAttemptToCloseAtLeastOneTab;
}

@property (setter=_setCloudKitDataNeedsFetching:) BOOL _cloudKitDataNeedsFetching;
@property (readonly, nonatomic) NSUUID *currentDeviceUUID;
@property (weak, nonatomic) id<CloudTabStoreDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCloudTabStore;

- (BOOL)closeAllTabsOnDevice:(id)a0;
- (void)didGetCachedDevicesFromCloudKitForCloudTabStore:(id)a0;
- (void)saveCurrentDeviceCloudTabs:(id)a0;
- (id)_currentDeviceUUID;
- (void)_syncedDevicesStoreDidUpdate:(id)a0;
- (id)syncedCloudTabDevices;
- (void)_removeObjectFromKeyValueStore:(long long)a0 forKey:(id)a1;
- (id)currentDevice;
- (void)synchronizeCloudTabDevices;
- (BOOL)cloudTabsAreEnabled;
- (void)didUpdateDevicesAndCloseRequestsFromCloudKitForCloudTabStore:(id)a0 error:(id)a1;
- (void)_closeRequestedTabIfPossible:(id)a0;
- (void)clearTabsForCurrentDevice;
- (BOOL)closeTab:(id)a0 onDevice:(id)a1;
- (void)stopObservingTabStoreStateChanges;
- (void)saveCurrentDeviceTabsFromBrowserSavedState:(id)a0 syncCompletionHandler:(id /* block */)a1;
- (void)_clearTabsForCurrentDeviceWithSyncCompletionHandler:(id /* block */)a0;
- (void)_saveCurrentDeviceCloudTabs:(id)a0 syncCompletionHandler:(id /* block */)a1;
- (void)startObservingTabStoreStateChanges;
- (void)_cloudTabsEnabledDidChange;
- (void)_removeConflictingDevice;
- (void)saveCurrentDeviceCloudTabsForEnteringBackground:(id)a0 completion:(id /* block */)a1;
- (void)saveCurrentDeviceTabsFromBrowserSavedState:(id)a0;
- (id)_storeForIdentifier:(long long)a0;
- (void)_clearAllDevices;
- (void)_userRequestsStoreDidUpdate:(id)a0;
- (void)_callFetchCloudKitDataCompletionHandlers;
- (id)init;
- (void)_setDictionaryInKeyValueStore:(long long)a0 dictionary:(id)a1 forKey:(id)a2;
- (BOOL)canSaveCloudTabsForCurrentDevice;
- (BOOL)closeTabs:(id)a0 onDevice:(id)a1;
- (BOOL)_shouldUseCloudKitForSavingCurrentDevice;
- (void)_waitForInitialCloudKitFetchToComplete:(id /* block */)a0;
- (void)fetchSyncedCloudTabDevicesAndCloseRequestsFromCloudKit;
- (void).cxx_destruct;
- (id)_keyValueStoreDictionaryRepresentation:(long long)a0;
- (void)_notifyCloudTabStoreDidUpdateWithType:(id)a0;
- (void)_cloudKitDataDidUpdateOnServer:(id)a0;

@end
