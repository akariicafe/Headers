@class NSUUID, NSString, HDProfile, HDSharingPredicate;

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
@property (readonly, copy, nonatomic) NSString *sharingIdentifier;
@property (readonly, nonatomic) HDSharingPredicate *sharingPredicate;
@property (readonly, nonatomic) BOOL syncTombstonesOnly;
@property (readonly) int protocolVersion;
@property (readonly) long long syncStoreType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)samplesDeletedInProfile:(id)a0 byUser:(BOOL)a1;
+ (id)syncStoreForProfile:(id)a0 storeIdentifier:(id)a1 syncCircleName:(id)a2 ownerIdentifier:(id)a3 containerIdentifier:(id)a4 error:(id *)a5;
+ (id)syncStoreForProfile:(id)a0 storeIdentifier:(id)a1 syncCircleName:(id)a2 ownerIdentifier:(id)a3 containerIdentifier:(id)a4 sharingIdentifier:(id)a5 predicate:(id)a6 error:(id *)a7;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)syncStoreIdentifier;
- (id)orderedSyncEntities;
- (id)databaseIdentifier;
- (id)syncStoreForEpoch:(long long)a0;
- (id)syncStoreForTombstoneSyncOnly:(BOOL)a0;
- (BOOL)replacePersistedAnchorMap:(id)a0 error:(id *)a1;
- (BOOL)replaceFrozenAnchorMap:(id)a0 updateDate:(id)a1 error:(id *)a2;
- (id)persistedStateWithError:(id *)a0;
- (BOOL)persistState:(id)a0 error:(id *)a1;
- (long long)syncProvenance;
- (BOOL)supportsSpeculativeChangesForSyncEntityClass:(Class)a0;
- (BOOL)resetReceivedSyncAnchorMapWithError:(id *)a0;
- (long long)syncEpoch;
- (id)syncStoreDefaultSourceBundleIdentifier;
- (id)syncEntityDependenciesForSyncEntity:(Class)a0;
- (BOOL)canRecieveSyncObjectsForEntityClass:(Class)a0;
- (BOOL)enforceSyncEntityOrdering;
- (BOOL)shouldContinueAfterAnchorValidationError:(id)a0;
- (BOOL)shouldEnforceSequenceOrdering;
- (long long)expectedSequenceNumberForSyncEntityClass:(Class)a0;
- (void)setExpectedSequenceNumber:(long long)a0 forSyncEntityClass:(Class)a1;
- (id)getPersistedAnchorMapWithError:(id *)a0;
- (id)syncStoreForProtocolVersion:(int)a0;
- (BOOL)clearAllSyncAnchorsWithError:(id *)a0;
- (id)initWithProfile:(id)a0 storeIdentifier:(id)a1 syncCircleName:(id)a2 ownerIdentifier:(id)a3 containerIdentifier:(id)a4 sharingIdentifier:(id)a5 predicate:(id)a6 error:(id *)a7;
- (id)receivedSyncAnchorMapWithError:(id *)a0;
- (id)_syncAnchorMapByStrippingBlacklistedEntities:(id)a0;

@end
