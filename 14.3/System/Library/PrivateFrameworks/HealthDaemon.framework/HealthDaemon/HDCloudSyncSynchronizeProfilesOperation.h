@class NSString, HDSynchronousTaskGroup, NSMutableDictionary;

@interface HDCloudSyncSynchronizeProfilesOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    HDSynchronousTaskGroup *_registryFetchTaskGroup;
    HDSynchronousTaskGroup *_zoneDeletionTaskGroup;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_zonesWithIdentityLossByContainer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (void)synchronousTaskGroup:(id)a0 didFinishWithSuccess:(BOOL)a1 errors:(id)a2;
- (void)_fetchRegistryRecordsForContainer:(id)a0 database:(id)a1;
- (id)_registryRecordsToFetchForContainer:(id)a0 database:(id)a1;
- (void)_fetchRegistryRecords:(id)a0 container:(id)a1 database:(id)a2;
- (void)_receivedLimitExceededError:(id)a0 fetchingRegistryRecords:(id)a1 container:(id)a2 database:(id)a3;
- (void)_recordIdentityLossForPartialError:(id)a0 container:(id)a1;
- (void)_synchronizeProfilesForFetchedRegistryRecords:(id)a0 container:(id)a1 database:(id)a2;
- (void)_synchronizeProfileForRegistryRecord:(id)a0 share:(id)a1 container:(id)a2 database:(id)a3;
- (BOOL)_shouldSynchronizeProfileType:(long long)a0;
- (BOOL)_shouldStoreOwnerParticipantForProfileType:(long long)a0;
- (BOOL)_storeOwnerParticipantForProfile:(id)a0 share:(id)a1 zoneID:(id)a2;
- (void)_registryFetchDidFinish;
- (void)_zoneDeletionDidFinish;

@end
