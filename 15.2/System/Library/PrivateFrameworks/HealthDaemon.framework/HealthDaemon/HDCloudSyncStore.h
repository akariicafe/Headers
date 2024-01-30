@class NSUUID, NSString, HDProfile, HDCloudSyncShardPredicate, HDSharingPredicate;

@interface HDCloudSyncStore : NSObject <NSCopying, HDSyncStore> {
    long long _syncProvenance;
    long long _syncEpoch;
    int _syncProtocolVersion;
}

@property (readonly, copy, nonatomic) NSUUID *storeIdentifier;
@property (readonly, copy, nonatomic) NSString *ownerIdentifier;
@property (readonly, copy, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) BOOL canPush;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, copy, nonatomic) HDCloudSyncShardPredicate *shardPredicate;
@property (readonly, copy, nonatomic) NSString *sharingIdentifier;
@property (readonly, nonatomic) HDSharingPredicate *sharingPredicate;
@property (readonly, nonatomic) BOOL syncTombstonesOnly;
@property (readonly, nonatomic) BOOL supportsRebase;
@property (readonly) int protocolVersion;
@property (readonly) long long syncStoreType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createOrUpdateShardStoresForProfile:(id)a0 throughDate:(id)a1 syncCircleName:(id)a2 ownerIdentifier:(id)a3 containerIdentifier:(id)a4 error:(id *)a5;
+ (id)syncStoreForProfile:(id)a0 storeIdentifier:(id)a1 syncCircleName:(id)a2 ownerIdentifier:(id)a3 containerIdentifier:(id)a4 error:(id *)a5;
+ (void)samplesDeletedInProfile:(id)a0 byUser:(BOOL)a1 intervals:(id)a2;
+ (id)shardPredicatesForProfile:(id)a0 syncCircleName:(id)a1 ownerIdentifier:(id)a2 containerIdentifier:(id)a3 currentDate:(id)a4 error:(id *)a5;

- (id)persistedStateWithError:(id *)a0;
- (long long)syncProvenance;
- (id)syncStoreIdentifier;
- (id)databaseIdentifier;
- (long long)expectedSequenceNumberForSyncEntityClass:(Class)a0;
- (id)orderedSyncEntities;
- (id)_syncAnchorMapByStrippingBlockedEntities:(id)a0;
- (id)getPersistedAnchorMapWithError:(id *)a0;
- (id)syncStoreForProtocolVersion:(int)a0;
- (long long)syncEpoch;
- (BOOL)replaceFrozenAnchorMap:(id)a0 updateDate:(id)a1 error:(id *)a2;
- (BOOL)clearAllSyncAnchorsWithError:(id *)a0;
- (BOOL)shouldEnforceSequenceOrdering;
- (id)primaryOrderedSyncEntities;
- (id)syncEntityDependenciesForSyncEntity:(Class)a0;
- (void).cxx_destruct;
- (id)syncStoreForEpoch:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)persistState:(id)a0 error:(id *)a1;
- (id)receivedSyncAnchorMapWithError:(id *)a0;
- (BOOL)canRecieveSyncObjectsForEntityClass:(Class)a0;
- (BOOL)shouldContinueAfterAnchorValidationError:(id)a0;
- (BOOL)enforceSyncEntityOrdering;
- (BOOL)replacePersistedAnchorMap:(id)a0 error:(id *)a1;
- (BOOL)resetReceivedSyncAnchorMapWithError:(id *)a0;
- (void)setExpectedSequenceNumber:(long long)a0 forSyncEntityClass:(Class)a1;
- (id)syncStoreForTombstoneSyncOnly:(BOOL)a0;
- (id)syncStoreDefaultSourceBundleIdentifier;
- (BOOL)supportsSpeculativeChangesForSyncEntityClass:(Class)a0;

@end
