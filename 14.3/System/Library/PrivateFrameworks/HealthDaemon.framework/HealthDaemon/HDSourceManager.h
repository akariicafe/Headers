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

+ (BOOL)_isLocalDeviceBundleIdentifier:(id)a0;

- (id)initWithProfile:(id)a0;
- (id)clientSourceForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)allSourcesForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)_predicateForSourceBundleIdentifier:(id)a0 localOnly:(BOOL)a1;
- (id)init;
- (id)sourceForClient:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)clientSourcesForSourceIDs:(id)a0 error:(id *)a1;
- (id)localSourceForSourceID:(id)a0 copyIfNecessary:(BOOL)a1 error:(id *)a2;
- (BOOL)_createSourcesWithCodables:(id)a0 provenance:(long long)a1 sourceUUIDSToDelete:(id)a2 deleteSamples:(BOOL)a3 transaction:(id)a4 error:(id *)a5;
- (id)_createSourceEntityForSpartanDeviceWithError:(id *)a0;
- (id)clientSourceForUUID:(id)a0 error:(id *)a1;
- (id)sourceEntityForClientSource:(id)a0 createOrUpdateIfNecessary:(BOOL)a1 error:(id *)a2;
- (void)dealloc;
- (id)sourceForAppleDeviceWithUUID:(id)a0 identifier:(id)a1 name:(id)a2 productType:(id)a3 createIfNecessary:(BOOL)a4 error:(id *)a5;
- (id)clientSourceForPersistentID:(id)a0 error:(id *)a1;
- (id)_sourcePersistentIDsFromSourceEntities:(id)a0;
- (BOOL)updateCurrentDeviceNameWithError:(id *)a0;
- (BOOL)deleteSourceWithBundleIdentifier:(id)a0 error:(id *)a1;
- (id)_sourceFromEphemeralSource:(id)a0 provenance:(long long)a1 createOrUpdateIfNecessary:(BOOL)a2 error:(id *)a3;
- (id)localSourceForBundleIdentifier:(id)a0 copyIfNecessary:(BOOL)a1 error:(id *)a2;
- (id)_createCopyOfFirstSourceWithPredicate:(id)a0 database:(id)a1 error:(id *)a2;
- (id)_sourceForBundleIdentifier:(id)a0 createSourceBlock:(id /* block */)a1 modifySourceBlock:(id /* block */)a2 error:(id *)a3;
- (id)sourceForCodableSource:(id)a0 provenance:(long long)a1 createIfNecessary:(BOOL)a2 isDeleted:(BOOL *)a3 error:(id *)a4;
- (id)allWatchSourcesWithError:(id *)a0;
- (id)_fetchClientSourceForPersistentID:(id)a0 error:(id *)a1;
- (BOOL)createSourcesWithCodables:(id)a0 provenance:(long long)a1 error:(id *)a2;
- (id)_sourceUUIDsForBundleIdentifier:(id)a0 error:(id *)a1;
- (BOOL)_deleteSourcesWithUUIDs:(id)a0 localSourceEntityCacheKey:(id)a1 deleteSamples:(BOOL)a2 transaction:(id)a3 error:(id *)a4;
- (id)_createSourceEntityForBundleIdentifier:(id)a0 owningAppBundleIdentifier:(id)a1 name:(id)a2 options:(unsigned long long)a3 isCurrentDevice:(BOOL)a4 productType:(id)a5 error:(id *)a6;
- (id)localSourceForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)privateSourceForClinicalAccountIdentifier:(id)a0 provenance:(long long)a1 createOrUpdateIfNecessary:(BOOL)a2 nameOnCreateOrUpdate:(id)a3 error:(id *)a4;
- (id)_bundleIDsWithoutLocalSourceForSourcesWithPredicate:(id)a0 database:(id)a1 error:(id *)a2;
- (void)_applicationsUninstalledNotification:(id)a0;
- (id)sourceForApplicationIdentifier:(id)a0 createOrUpdateIfNecessary:(BOOL)a1 entitlements:(id)a2 name:(id)a3 error:(id *)a4;
- (id)localDeviceSourceWithError:(id *)a0;
- (BOOL)_deleteSourceIfNoSampleFound:(id)a0;
- (id)clientSourceForSourceEntity:(id)a0 error:(id *)a1;
- (id)publicSourceForGatewayExternalIdentifier:(id)a0 provenance:(long long)a1 createOrUpdateIfNecessary:(BOOL)a2 nameOnCreateOrUpdate:(id)a3 error:(id *)a4;
- (id)clientSourceForSourceEntities:(id)a0 error:(id *)a1;
- (id)_localSourcesForBundleIDs:(id)a0 database:(id)a1 error:(id *)a2;
- (BOOL)setLocalDeviceSourceUUID:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
- (id)_createSourceEntityForLocalDeviceWithError:(id *)a0;
- (id)sourceUUIDForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)_clientSourcesWithPredicate:(id)a0 error:(id *)a1;
- (id)createOrUpdateSourceForClient:(id)a0 error:(id *)a1;
- (id)allSourcesWithError:(id *)a0;

@end
