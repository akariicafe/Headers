@class NSString, NSSet, NSData, DNDSIDSSyncEngine, DNDSSyncEngine;
@protocol DNDSContactMonitoring, DNDSBackingStore, DNDSModeConfigurationsStoreDelegate;

@interface DNDSModeConfigurationsStore : NSObject <DNDSCachedBackingStoreDelegate, DNDSSyncEngineDataSource, DNDSIDSSyncEngineDataSource, DNDSModeConfigurationsStoring, DNDSContactMonitorListener> {
    id<DNDSBackingStore> _backingStore;
    id<DNDSContactMonitoring> _contactMonitor;
    DNDSSyncEngine *_syncEngine;
    DNDSIDSSyncEngine *_idsSyncEngine;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak, nonatomic) id<DNDSModeConfigurationsStoreDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSData *contactHistoryToken;
@property (readonly, copy, nonatomic) NSSet *monitoredContacts;

- (void)_lock_updateModeConfigurationWithDNDSIDSRecord:(id)a0;
- (id)_lock_recordIDsForIDSSyncEngine:(id)a0;
- (unsigned long long)writeRecord:(id)a0 writePartition:(BOOL)a1 error:(id *)a2;
- (BOOL)_lock_populateCKRecord:(id)a0;
- (BOOL)syncEngine:(id)a0 wantsRecord:(id)a1;
- (void)_purgeData;
- (id)backingStore:(id)a0 migrateDictionaryRepresentation:(id)a1 fromVersionNumber:(unsigned long long)a2 toVersionNumber:(unsigned long long)a3;
- (void)syncEngine:(id)a0 didFetchRecord:(id)a1;
- (void)syncEngine:(id)a0 zoneWithIDWasDeleted:(id)a1 removingRecordIDs:(id)a2;
- (id)readRecordWithError:(id *)a0;
- (void)_notifyDelegateOfAvailableModes;
- (void)cachedBackingStoreDidPurgeCache:(id)a0;
- (id)_lock_modeIdentifiers;
- (void)_lock_removeModeConfigurationWithModeIdentifier:(id)a0;
- (void)idsSyncEngine:(id)a0 recordWithIDWasDeleted:(id)a1;
- (void)_lock_purgeData;
- (id)_lock_existingConfigurations;
- (void)_lock_purgeRecordIDs:(id)a0;
- (id)_lock_mutableExistingConfigurations;
- (void)idsSyncEngine:(id)a0 didFetchRecord:(id)a1;
- (id)syncEngine:(id)a0 recordTypeForRecordID:(id)a1;
- (void).cxx_destruct;
- (BOOL)syncEngine:(id)a0 prepareRecordToSave:(inout id)a1;
- (void)syncEngine:(id)a0 failedToDeleteRecordWithID:(id)a1 error:(id)a2;
- (void)_lock_updateModeConfigurationWithCKRecord:(id)a0;
- (void)syncEngine:(id)a0 recordWithIDWasDeleted:(id)a1;
- (void)syncEngine:(id)a0 resolveConflictBetweenClientRecord:(id)a1 andServerRecord:(id)a2;
- (BOOL)_lock_populateDNDSIDSRecord:(id)a0;
- (id)_lock_modeConfigurationForModeIdentifier:(id)a0;
- (void)idsSyncEngine:(id)a0 prepareRecordToSave:(inout id)a1;
- (unsigned long long)_lock_writeRecord:(id)a0 writePartition:(BOOL)a1 error:(id *)a2;
- (unsigned long long)writeRecord:(id)a0 error:(id *)a1;
- (id)initWithBackingStore:(id)a0 syncEngine:(id)a1 idsSyncEngine:(id)a2;
- (void)_lock_updateModeConfigurationWithConfiguration:(id)a0;
- (void)contactMonitor:(id)a0 didReceiveUpdatedContacts:(id)a1 deletedContactIdentifiers:(id)a2 withContactHistoryToken:(id)a3;
- (id)_lock_modeConfigurationForCKRecordID:(id)a0;
- (void)contactMonitor:(id)a0 didReceiveUpdatedContactsForContactsWithoutIdentifiers:(id)a1;
- (void)purgeRecordsForSyncEngine:(id)a0;
- (void)_lock_removeModeConfigurationWithCKRecordID:(id)a0;
- (id)recordIDsForSyncEngine:(id)a0;
- (void)_purgeRecordIDs:(id)a0;
- (id)recordIDsForIDSSyncEngine:(id)a0;
- (id)_lock_modeConfigurationForDNDSIDSRecordID:(id)a0;
- (void)purgeRecordsForIDSSyncEngine:(id)a0;

@end
