@class NSString, HDProfile, NSUUID;

@interface _HDStaticSyncStore : NSObject <HDSyncStore> {
    long long _syncProvenance;
    NSUUID *_storeIdentifier;
}

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly) int protocolVersion;
@property (readonly) long long syncStoreType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)syncProvenance;
- (id)syncStoreIdentifier;
- (id)databaseIdentifier;
- (long long)expectedSequenceNumberForSyncEntityClass:(Class)a0;
- (id)orderedSyncEntities;
- (long long)syncEpoch;
- (BOOL)shouldEnforceSequenceOrdering;
- (id)syncEntityDependenciesForSyncEntity:(Class)a0;
- (void).cxx_destruct;
- (BOOL)canRecieveSyncObjectsForEntityClass:(Class)a0;
- (BOOL)shouldContinueAfterAnchorValidationError:(id)a0;
- (BOOL)enforceSyncEntityOrdering;
- (void)setExpectedSequenceNumber:(long long)a0 forSyncEntityClass:(Class)a1;
- (id)syncStoreDefaultSourceBundleIdentifier;
- (BOOL)supportsSpeculativeChangesForSyncEntityClass:(Class)a0;
- (id)initWithProfile:(id)a0 storeIdentifier:(id)a1 error:(id *)a2;

@end
