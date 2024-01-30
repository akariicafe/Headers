@class HDDatabaseValueCache, HDProfile, NSObject;
@protocol OS_dispatch_queue;

@interface HDSourceManager : NSObject {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HDDatabaseValueCache *_sourceEntityByBundleIdentifierCache;
    HDDatabaseValueCache *_clientSourceCache;
    HDDatabaseValueCache *_localSourceForBundleIdentifierCache;
    HDDatabaseValueCache *_localSourceForSourceID;
}

- (id)initWithProfile:(id)a0;
- (id)clientSourceForPersistentID:(id)a0 error:(id *)a1;
- (id)clientSourceForUUID:(id)a0 error:(id *)a1;
- (id)allWatchSourcesWithError:(id *)a0;
- (id)clientSourceForSourceEntity:(id)a0 error:(id *)a1;
- (id)localSourceForBundleIdentifier:(id)a0 error:(id *)a1;
- (BOOL)deleteSourceWithBundleIdentifier:(id)a0 error:(id *)a1;
- (id)clientSourceForSourceEntities:(id)a0 error:(id *)a1;
- (id)sourceUUIDForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)sourceForAppleDeviceWithUUID:(id)a0 identifier:(id)a1 name:(id)a2 productType:(id)a3 createIfNecessary:(BOOL)a4 error:(id *)a5;
- (id)createOrUpdateSourceForClient:(id)a0 error:(id *)a1;
- (id)_createSourceEntityForLocalDeviceWithError:(id *)a0;
- (id)sourceEntityForClientSource:(id)a0 createOrUpdateIfNecessary:(BOOL)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)init;
- (id)uncachedClientSourceForPersistentID:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)privateSourceForClinicalAccountIdentifier:(id)a0 provenance:(long long)a1 createOrUpdateIfNecessary:(BOOL)a2 nameOnCreateOrUpdate:(id)a3 error:(id *)a4;
- (id)localSourceForBundleIdentifier:(id)a0 copyIfNecessary:(BOOL)a1 error:(id *)a2;
- (id)allSourcesForBundleIdentifier:(id)a0 error:(id *)a1;
- (BOOL)_deleteSourcesWithUUIDs:(id)a0 localSourceEntityCacheKey:(id)a1 deleteSamples:(BOOL)a2 transaction:(id)a3 error:(id *)a4;
- (id)clientSourceForBundleIdentifier:(id)a0 error:(id *)a1;
- (BOOL)updateCurrentDeviceNameWithError:(id *)a0;
- (id)sourceForClient:(id)a0 error:(id *)a1;
- (BOOL)setLocalDeviceSourceUUID:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
- (id)localDeviceSourceWithError:(id *)a0;
- (void)dealloc;
- (id)clientSourcesForSourceIDs:(id)a0 error:(id *)a1;
- (id)sourceForApplicationIdentifier:(id)a0 createOrUpdateIfNecessary:(BOOL)a1 entitlements:(id)a2 name:(id)a3 error:(id *)a4;
- (id)localSourceForSourceID:(id)a0 copyIfNecessary:(BOOL)a1 error:(id *)a2;
- (BOOL)createSourcesWithCodables:(id)a0 provenance:(long long)a1 error:(id *)a2;
- (id)sourceForCodableSource:(id)a0 provenance:(long long)a1 createIfNecessary:(BOOL)a2 isDeleted:(BOOL *)a3 error:(id *)a4;
- (id)publicSourceForClinicalExternalIdentifier:(id)a0 provenance:(long long)a1 createOrUpdateIfNecessary:(BOOL)a2 nameOnCreateOrUpdate:(id)a3 error:(id *)a4;
- (void)_applicationsUninstalledNotification:(id)a0;
- (id)allSourcesWithError:(id *)a0;

@end
