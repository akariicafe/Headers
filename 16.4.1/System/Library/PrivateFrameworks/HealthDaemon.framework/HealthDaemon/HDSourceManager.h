@class HDDatabaseValueCache, HDProfile, NSObject;
@protocol OS_dispatch_queue;

@interface HDSourceManager : NSObject <HDProfileReadyObserver> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HDDatabaseValueCache *_sourceEntityByBundleIdentifierCache;
    HDDatabaseValueCache *_clientSourceCache;
    HDDatabaseValueCache *_localSourceForBundleIdentifierCache;
    HDDatabaseValueCache *_localSourceForSourceID;
}

- (void)profileDidBecomeReady:(id)a0;
- (id)allSourcesWithError:(id *)a0;
- (id)initWithProfile:(id)a0;
- (id)insertCodableSource:(id)a0 provenance:(long long)a1 syncIdentity:(long long)a2 profile:(id)a3 error:(id *)a4;
- (id)sourceForCodableSource:(id)a0 provenance:(long long)a1 syncIdentity:(long long)a2 createIfNecessary:(BOOL)a3 isDeleted:(BOOL *)a4 error:(id *)a5;
- (id)localDeviceSourceWithError:(id *)a0;
- (BOOL)deleteSourceWithBundleIdentifier:(id)a0 error:(id *)a1;
- (id)sourceForApplicationIdentifier:(id)a0 createOrUpdateIfNecessary:(BOOL)a1 entitlements:(id)a2 name:(id)a3 error:(id *)a4;
- (id)clientSourceForSourceEntities:(id)a0 error:(id *)a1;
- (id)publicSourceForClinicalExternalIdentifier:(id)a0 provenance:(long long)a1 syncIdentity:(long long)a2 createOrUpdateIfNecessary:(BOOL)a3 nameOnCreateOrUpdate:(id)a4 error:(id *)a5;
- (id)clientSourceForUUID:(id)a0 error:(id *)a1;
- (id)localSourceForBundleIdentifier:(id)a0 copyIfNecessary:(BOOL)a1 error:(id *)a2;
- (BOOL)_deleteSourcesWithUUIDs:(id)a0 localSourceEntityCacheKey:(id)a1 deleteSamples:(BOOL)a2 transaction:(id)a3 error:(id *)a4;
- (id)allSourcesForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)createOrUpdateSourceForClient:(id)a0 error:(id *)a1;
- (id)localSourceForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)sourceForAppleDeviceWithUUID:(id)a0 identifier:(id)a1 name:(id)a2 productType:(id)a3 createIfNecessary:(BOOL)a4 error:(id *)a5;
- (id)sourceEntityForClientSource:(id)a0 createOrUpdateIfNecessary:(BOOL)a1 error:(id *)a2;
- (id)clientSourceForSourceEntity:(id)a0 error:(id *)a1;
- (void)dealloc;
- (id)privateSourceForClinicalAccountIdentifier:(id)a0 provenance:(long long)a1 syncIdentity:(long long)a2 createOrUpdateIfNecessary:(BOOL)a3 nameOnCreateOrUpdate:(id)a4 error:(id *)a5;
- (id)_createSourceEntityForLocalDeviceWithError:(id *)a0;
- (BOOL)updateCurrentDeviceNameWithError:(id *)a0;
- (id)sourceForClient:(id)a0 error:(id *)a1;
- (void)_applicationsUninstalledNotification:(id)a0;
- (BOOL)createSourcesWithCodables:(id)a0 provenance:(long long)a1 error:(id *)a2;
- (id)init;
- (id)clientSourceForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)allWatchSourcesWithError:(id *)a0;
- (id)localSourceForSourceID:(id)a0 copyIfNecessary:(BOOL)a1 error:(id *)a2;
- (id)clientSourcesForSourceIDs:(id)a0 error:(id *)a1;
- (id)sourceUUIDForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)clientSourceForPersistentID:(id)a0 error:(id *)a1;
- (id)uncachedClientSourceForPersistentID:(id)a0 transaction:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)insertSourceWithBundleIdentifier:(id)a0 owningAppBundleIdentifier:(id)a1 UUID:(id)a2 name:(id)a3 options:(unsigned long long)a4 isCurrentDevice:(BOOL)a5 productType:(id)a6 modificationDate:(id)a7 provenance:(long long)a8 syncIdentity:(long long)a9 error:(id *)a10;
- (BOOL)setLocalDeviceSourceUUID:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;

@end
