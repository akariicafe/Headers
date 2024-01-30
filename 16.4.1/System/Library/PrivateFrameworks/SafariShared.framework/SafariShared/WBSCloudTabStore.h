@class NSError, NSString, NSArray, WBSCloudTabDevice, NSMutableDictionary, NSDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, WBSCloudTabStoreDelegate;

@interface WBSCloudTabStore : NSObject <WBSCloudTabDeviceProvider> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableArray *_syncedCloudTabDevicesFromKVS;
    NSMutableDictionary *_deviceUUIDsToCloseRequestsFromKVS;
    BOOL _hasAttemptedToRemoveCurrentDeviceFromKVS;
    BOOL _isFetchingDataFromCloudKit;
    BOOL _hasAttemptedToFetchDevicesAtLeastOnce;
    NSMutableArray *_syncedCloudTabDevicesFromCloudKit;
    NSArray *_filteredAndSortedSyncedCloudTabDevicesFromCloudKit;
    WBSCloudTabDevice *_currentDevice;
    NSMutableDictionary *_deviceUUIDsToCloseRequestsFromCloudKit;
    NSError *_lastFetchError;
}

@property (readonly, nonatomic) BOOL atLeastOneOtherActiveDeviceIsRegistered;
@property (weak, nonatomic) id<WBSCloudTabStoreDelegate> wbsDelegate;
@property (readonly, nonatomic) BOOL syncAgentIsAvailable;
@property (readonly, nonatomic) long long uniqueDeviceMultiplicity;
@property (readonly, nonatomic) BOOL currentDeviceIsRegisteredInCloudKit;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentationOfCurrentDeviceInCloudKit;
@property (readonly, nonatomic) NSError *lastFetchError;
@property (readonly, copy, nonatomic) NSArray *syncedCloudTabDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)closeAllTabsOnDevice:(id)a0;
- (id)_currentDeviceUUID;
- (void)_removeObjectFromKeyValueStore:(long long)a0 forKey:(id)a1;
- (void)_closeRequestedTabIfPossible:(id)a0;
- (BOOL)closeTab:(id)a0 onDevice:(id)a1;
- (id)init;
- (void)_setDictionaryInKeyValueStore:(long long)a0 dictionary:(id)a1 forKey:(id)a2;
- (BOOL)closeTabs:(id)a0 onDevice:(id)a1;
- (void)fetchSyncedCloudTabDevicesAndCloseRequestsFromCloudKit;
- (void).cxx_destruct;
- (id)_keyValueStoreDictionaryRepresentation:(long long)a0;
- (void)clearTabsForFirstDuplicateDeviceInCloudKitWithName:(id)a0 passingTest:(id /* block */)a1;
- (void)pruneExpiredDevicesFromCloudKit;
- (void)_addCloseRequestDictionary:(id)a0 toDeviceUUIDsToCloseRequestsDictionary:(id)a1 requestUUID:(id)a2;
- (void)_addDeviceDictionaryFromKVS:(id)a0 deviceUUID:(id)a1;
- (BOOL)_closeTabs:(id)a0 onDevice:(id)a1;
- (BOOL)_deviceIsStoredInCloudKit:(id)a0;
- (id)_deviceWithTabsWithOutstandingCloseRequestsRemoved:(id)a0 closeRequestsForDevice:(id)a1;
- (id)_devicesByFilteringAndSortingDevices:(id)a0;
- (id)_devicesByRemovingDevicesFromKVSWithOutstandingCloseRequests:(id)a0;
- (void)_didFetchDeviceDictionariesFromCloudKit:(id)a0 fetchedCloseRequests:(id)a1 error:(id)a2;
- (void)_didFetchDeviceDictionariesFromCloudKit:(id)a0 fetchedCloseRequests:(id)a1 fetchedDevicesBySyncing:(BOOL)a2 error:(id)a3;
- (unsigned long long)_indexOfDevice:(id)a0 inSyncedCloudTabDevices:(id)a1;
- (void)_pruneOrphanedCloseRequestsFromKVS;
- (void)_syncAgentProxyConnectionWasInvalidated:(id)a0;
- (void)_tabWasClosed:(id)a0 onDevice:(id)a1 deviceIsStoredInCloudKit:(BOOL)a2 syncedCloudTabDevices:(id)a3;
- (void)_tabsWereClosed:(id)a0 onDevice:(id)a1 deviceIsStoredInCloudKit:(BOOL)a2 syncedCloudTabDevices:(id)a3;
- (BOOL)_writeCloseRequestForTab:(id)a0 onDevice:(id)a1 deviceIsStoredInCloudKit:(BOOL)a2;
- (void)clearTabsForFirstDuplicateDeviceInCloudKitWithName:(id)a0;
- (void)createSyncedCloudTabDevicesAndCloseRequestsFromKVS;
- (void)deleteAllDevicesFromCloudKit;
- (void)handleCloseTabRequestsFromCloudKit;
- (void)resetSyncedCloudTabDevicesAndCloseRequestsFromCloudKit;
- (void)resetSyncedCloudTabDevicesAndCloseRequestsFromKVS;
- (void)saveCurrentCloudTabDeviceDictionaryToCloudKit:(id)a0 completionHandler:(id /* block */)a1;

@end
