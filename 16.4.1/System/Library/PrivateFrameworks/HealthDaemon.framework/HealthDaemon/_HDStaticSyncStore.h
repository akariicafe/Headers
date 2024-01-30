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

- (id)databaseIdentifier;
- (id)syncStoreIdentifier;
- (id)orderedSyncEntities;
- (void).cxx_destruct;
- (BOOL)canRecieveSyncObjectsForEntityClass:(Class)a0;
- (BOOL)enforceSyncEntityOrdering;
- (long long)expectedSequenceNumberForSyncEntityClass:(Class)a0;
- (id)initWithProfile:(id)a0 storeIdentifier:(id)a1 error:(id *)a2;
- (void)setExpectedSequenceNumber:(long long)a0 forSyncEntityClass:(Class)a1;
- (BOOL)shouldContinueAfterAnchorValidationError:(id)a0;
- (BOOL)shouldEnforceSequenceOrdering;
- (BOOL)supportsSpeculativeChangesForSyncEntityClass:(Class)a0;
- (id)syncEntityDependenciesForSyncEntity:(Class)a0;
- (long long)syncEpoch;
- (long long)syncProvenance;
- (id)syncStoreDefaultSourceBundleIdentifier;

@end
