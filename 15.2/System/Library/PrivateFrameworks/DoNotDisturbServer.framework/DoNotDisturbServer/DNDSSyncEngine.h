@class NSString, NSMapTable, NSObject, CKContainer;
@protocol DNDSSyncEngineSynchronizing, DNDSSyncEngineLastChanceDataStoring, DNDSSyncEngineMetadataStoring, OS_dispatch_queue, DNDSKeybagStateProviding;

@interface DNDSSyncEngine : NSObject <DNDSKeybagStateObserver, DNDSSysdiagnoseDataProvider, CKSyncEngineDataSource> {
    id<DNDSSyncEngineMetadataStoring> _store;
    id<DNDSSyncEngineSynchronizing> _syncEngine;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_accountUpdateQueue;
    NSMapTable *_sourcesByZoneName;
    id<DNDSSyncEngineMetadataStoring> _metadataStore;
    id<DNDSSyncEngineLastChanceDataStoring> _lastChanceStore;
    struct { BOOL syncEnabled; BOOL featureEnabled; BOOL accountAvailable; BOOL encryptionAvailable; BOOL supportedDevice; BOOL testing; } _state;
    BOOL _allowSyncEngineCreation;
    CKContainer *_container;
    id<DNDSKeybagStateProviding> _keybag;
}

@property (nonatomic, getter=isSyncPreferenceEnabled) BOOL syncPreferenceEnabled;
@property (readonly, nonatomic, getter=isSyncEnabled) BOOL syncEnabled;
@property (readonly, nonatomic, getter=isSyncAvailable) BOOL syncAvailable;
@property (readonly, nonatomic) unsigned long long cloudSyncState;
@property (readonly, nonatomic) BOOL hasLocalChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;

+ (id)sharedInstance;

- (void)addRecordIDsToSave:(id)a0 recordIDsToDelete:(id)a1;
- (void)pairedDeviceDidChange;
- (void)sendChangesWithCompletionHandler:(id /* block */)a0;
- (void)_handleAccountFetchWithUpdatedUserRecordID:(id)a0 updatedAccountStatus:(long long)a1 updatedEncryptionAvailable:(BOOL)a2 updatedSyncEnabled:(BOOL)a3;
- (void)setTesting:(BOOL)a0;
- (void)syncEngine:(id)a0 zoneWithIDWasDeleted:(id)a1;
- (void)_retryLastChanceRecords;
- (void)keybagDidUnlockForTheFirstTime:(id)a0;
- (void)_lock_destroySyncEngine;
- (void)_updateAccountWithCurrentSyncEnabledState;
- (BOOL)_lock_isSyncAvailable;
- (void)_retryLastChanceRecordsForDataSource:(id)a0 withZoneName:(id)a1;
- (id)_lock_currentUserRecordID;
- (void)syncEngine:(id)a0 didFetchRecord:(id)a1;
- (void)_cloudKitAccountChanged:(id)a0;
- (void)_lock_setCurrentAccountStatus:(long long)a0;
- (BOOL)_lock_encryptionAvailable;
- (void)_lock_setCurrentUserRecordID:(id)a0;
- (void)_fetchAccountStateWithCompletionHandler:(id /* block */)a0;
- (BOOL)syncEngine:(id)a0 shouldFetchChangesForZoneID:(id)a1;
- (void)_lock_purgeData;
- (id)syncEngine:(id)a0 recordToSaveForRecordID:(id)a1;
- (void)syncEngine:(id)a0 didUpdateMetadata:(id)a1;
- (id)initWithMetadataStore:(id)a0 lastChanceDataStore:(id)a1 keybag:(id)a2 syncEnabled:(BOOL)a3;
- (void)_purgeDataFromDataSources;
- (id)sysdiagnoseDataForDate:(id)a0 redacted:(BOOL)a1;
- (void)removeZoneWithID:(id)a0;
- (void).cxx_destruct;
- (void)sync:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (void)syncEngine:(id)a0 failedToDeleteRecordWithID:(id)a1 error:(id)a2;
- (id)initWithMetadataStore:(id)a0 lastChanceDataStore:(id)a1 syncEngine:(id)a2 keybag:(id)a3 syncEnabled:(BOOL)a4;
- (id)_lock_dataSourceForZoneID:(id)a0;
- (void)purgeZoneWithID:(id)a0;
- (void)syncEngine:(id)a0 zoneWithIDWasPurged:(id)a1;
- (void)handleFetchedRecord:(id)a0;
- (long long)_lock_currentAccountStatus;
- (void)handleDeletedRecordID:(id)a0;
- (void)syncEngine:(id)a0 failedToSaveRecord:(id)a1 error:(id)a2;
- (void)syncEngine:(id)a0 didSaveRecord:(id)a1;
- (void)_initialSyncForDataSources;
- (void)_lock_setEncryptionAvailable:(BOOL)a0;
- (void)_lock_startSyncEngine;
- (id)_zoneIDForRecord:(id)a0;
- (void)_accountUpdateQueue_updateAccountWithSyncEnabledState:(BOOL)a0;
- (void)syncEngine:(id)a0 recordWithIDWasDeleted:(id)a1 recordType:(id)a2;
- (BOOL)_lock_isSyncPreferenceEnabled;
- (void)syncEngine:(id)a0 didDeleteRecordWithID:(id)a1;
- (BOOL)_lock_isSyncEnabled;
- (id)_lock_dataSourceForRecord:(id)a0;
- (void)_updateAccountWithSyncEnabledState:(BOOL)a0;
- (void)setDataSource:(id)a0 forZoneName:(id)a1;
- (void)_migrateOldStoresWithSyncEnabledState:(BOOL)a0;
- (void)fetchChanges:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (void)_initialSyncForDataSource:(id)a0 withZoneName:(id)a1;
- (id)_lock_dataSources;

@end
