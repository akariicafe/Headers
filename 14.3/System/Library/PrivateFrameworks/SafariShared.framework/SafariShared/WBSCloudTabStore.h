@class NSError, NSString, NSArray, NSDate, WBSCloudTabDevice, NSMutableDictionary, NSDictionary, NSMutableArray, NSObject;
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
@property (readonly, copy, nonatomic) NSDate *dateOfLastCloudTabDevicesUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_debugErrorMessageForCode:(long long)a0;
+ (id)errorWithCode:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_keyValueStoreDictionaryRepresentation:(long long)a0;
- (void)createSyncedCloudTabDevicesAndCloseRequestsFromKVS;
- (void)handleCloseTabRequestsFromCloudKit;
- (void)synchronizeCloudTabDevicesWithCompletionHandler:(id /* block */)a0;
- (BOOL)closeAllTabsOnDevice:(id)a0;
- (void)saveCurrentCloudTabDeviceDictionaryToCloudKit:(id)a0 completionHandler:(id /* block */)a1;
- (id)_deviceWithTabsWithOutstandingCloseRequestsRemoved:(id)a0 closeRequestsForDevice:(id)a1;
- (void)_removeObjectFromKeyValueStore:(long long)a0 forKey:(id)a1;
- (unsigned long long)_indexOfDevice:(id)a0 inSyncedCloudTabDevices:(id)a1;
- (BOOL)closeTabs:(id)a0 onDevice:(id)a1;
- (void)_didFetchDeviceDictionariesFromCloudKit:(id)a0 fetchedCloseRequests:(id)a1 fetchedDevicesBySyncing:(BOOL)a2 error:(id)a3;
- (void)pruneExpiredDevicesFromCloudKit;
- (void)_closeRequestedTabIfPossible:(id)a0;
- (void)_tabsWereClosed:(id)a0 onDevice:(id)a1 deviceIsStoredInCloudKit:(BOOL)a2 syncedCloudTabDevices:(id)a3;
- (void)clearTabsForFirstDuplicateDeviceInCloudKitWithName:(id)a0;
- (id)_currentDeviceUUID;
- (id)_devicesByRemovingDevicesFromKVSWithOutstandingCloseRequests:(id)a0;
- (BOOL)_closeTabs:(id)a0 onDevice:(id)a1;
- (void)fetchSyncedCloudTabDevicesAndCloseRequestsFromCloudKit;
- (BOOL)closeTab:(id)a0 onDevice:(id)a1;
- (void)_pruneOrphanedCloseRequestsFromKVS;
- (BOOL)_writeCloseRequestForTab:(id)a0 onDevice:(id)a1 deviceIsStoredInCloudKit:(BOOL)a2;
- (void)_setDictionaryInKeyValueStore:(long long)a0 dictionary:(id)a1 forKey:(id)a2;
- (void)deleteAllDevicesFromCloudKit;
- (void)resetSyncedCloudTabDevicesAndCloseRequestsFromCloudKit;
- (void)_syncAgentProxyConnectionWasInvalidated:(id)a0;
- (void)clearTabsForFirstDuplicateDeviceInCloudKitWithName:(id)a0 passingTest:(id /* block */)a1;
- (void)_didFetchDeviceDictionariesFromCloudKit:(id)a0 fetchedCloseRequests:(id)a1 error:(id)a2;
- (id)_devicesByFilteringAndSortingDevices:(id)a0;
- (void)resetSyncedCloudTabDevicesAndCloseRequestsFromKVS;
- (void)_tabWasClosed:(id)a0 onDevice:(id)a1 deviceIsStoredInCloudKit:(BOOL)a2 syncedCloudTabDevices:(id)a3;
- (void)pruneExpiredDevicesFromKVS;
- (BOOL)_deviceIsStoredInCloudKit:(id)a0;
- (void)handleCloseTabRequestsFromKVS;
- (void)_addCloseRequestDictionary:(id)a0 toDeviceUUIDsToCloseRequestsDictionary:(id)a1 requestUUID:(id)a2;
- (void)_addDeviceDictionaryFromKVS:(id)a0 deviceUUID:(id)a1;

@end
