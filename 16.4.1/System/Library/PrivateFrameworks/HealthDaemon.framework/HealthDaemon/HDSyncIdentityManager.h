@class HDDatabaseValueCache, HDProfile, HDConcreteSyncIdentity;

@interface HDSyncIdentityManager : NSObject <HDProfileInitializedObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HDConcreteSyncIdentity *_currentSyncIdentity;
    HDConcreteSyncIdentity *_legacySyncIdentity;
    HDDatabaseValueCache *_entityByIdentityCache;
    HDDatabaseValueCache *_identityByEntityPersisitentIDCache;
}

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, copy, nonatomic) HDConcreteSyncIdentity *currentSyncIdentity;
@property (readonly, copy, nonatomic) HDConcreteSyncIdentity *legacySyncIdentity;

+ (void)unitTest_resetCachedHardwareIdentifier;

- (id)initWithProfile:(id)a0;
- (void)profileDidInitialize:(id)a0;
- (id)identityForEntityID:(long long)a0 transaction:(id)a1 error:(id *)a2;
- (id)concreteIdentityForIdentity:(id)a0 shouldCreate:(BOOL)a1 transaction:(id)a2 error:(id *)a3;
- (id)description;
- (void).cxx_destruct;

@end
