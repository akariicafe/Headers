@class NSObject, MCMSQLiteDB, MCMUserIdentityCache;
@protocol OS_dispatch_queue, MCMManagedPath, MCMChildParentMapCache;

@interface MCMCodeSigningMapping : NSObject

@property (retain, nonatomic) MCMSQLiteDB *codeSigningMappingDB;
@property (readonly, nonatomic) MCMUserIdentityCache *userIdentityCache;
@property (readonly, nonatomic) id<MCMManagedPath> library;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<MCMChildParentMapCache> childParentMapCache;

+ (id)_moveDBIfNeededFromURL:(id)a0 error:(id *)a1;
+ (id)codeSignMappingWithError:(id *)a0;

- (id)_onQueue_codeSigningInfoForIdentifier:(id)a0 externalRequest:(BOOL)a1;
- (id)identifiersWithError:(id *)a0;
- (void)migrateAppGroupIdsFromDataContainersToFile;
- (BOOL)_onQueue_removeGroupIdentifier:(id)a0 forIdentifier:(id)a1 containerClass:(unsigned long long)a2 error:(id *)a3 reconcileHandler:(id /* block */)a4;
- (BOOL)removeAllAdvanceCopiesWithError:(id *)a0;
- (void)_onQueue_migrateCachedCodeSigningInfoFromBundleContainerToMappingWithInfo:(id)a0 identifier:(id)a1 containerClass:(unsigned long long)a2;
- (void)_onQueue_handleChangeFromOldGroupContainerIds:(id)a0 toNewGroupContainerIds:(id)a1 containerClass:(unsigned long long)a2 reconcileHandler:(id /* block */)a3;
- (id)processCodeSigningInfo:(id)a0 identifier:(id)a1 options:(id)a2 error:(id *)a3;
- (void)_onQueue_migrateFromMappingFileToDBIfNecessary;
- (BOOL)_onQueue_removeAllAdvanceCopiesWithError:(id *)a0;
- (void)migrateCachedCodeSigningInfoFromBundleContainersToMapping;
- (id)_onQueue_removeReferenceForGroupIdentifiers:(id)a0 containerClass:(unsigned long long)a1;
- (id)_readCodeSigningMappingFromDiskAtURL:(id)a0;
- (BOOL)identifierHasSystemContainer:(id)a0;
- (unsigned long long)invalidateCodeSigningInfoForAppsWithoutDataContainer;
- (BOOL)_onqueue_enumerateOwnersAndGroupsWithGroupClass:(unsigned long long)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)_onQueue_processCodeSigningInfo:(id)a0 identifier:(id)a1 options:(id)a2 oldEntitlements:(id)a3 error:(id *)a4 reconcileHandler:(id /* block */)a5;
- (id)getCodeSigningInfoForIdentifier:(id)a0;
- (BOOL)_onQueue_identifierHasCallerRegisteredEntitlements:(id)a0;
- (id)codeSigningEntryForIdentifier:(id)a0 withError:(id *)a1;
- (BOOL)invalidateCodeSigningInfoForIdentifier:(id)a0 withError:(id *)a1;
- (BOOL)removeGroupIdentifier:(id)a0 forIdentifier:(id)a1 containerClass:(unsigned long long)a2 error:(id *)a3 reconcileHandler:(id /* block */)a4;
- (id)systemGroupIdentifiersForIdentifier:(id)a0;
- (id)groupContainerIdentifiersAssociatedWithIdentifier:(id)a0 containerClass:(unsigned long long)a1;
- (BOOL)enumerateOwnersAndGroupsWithGroupClass:(unsigned long long)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)registerKernelProvidedReferencesForIdentifier:(id)a0 withAppGroupContainers:(id)a1 systemGroupContainers:(id)a2 error:(unsigned long long *)a3;
- (BOOL)addGroupIdentifier:(id)a0 forIdentifier:(id)a1 containerClass:(unsigned long long)a2 error:(id *)a3 reconcileHandler:(id /* block */)a4;
- (BOOL)_onQueue_addGroupIdentifier:(id)a0 forIdentifier:(id)a1 containerClass:(unsigned long long)a2 error:(id *)a3 reconcileHandler:(id /* block */)a4;
- (BOOL)invalidateCodeSigningInfoForIdentifierAndItsChildren:(id)a0 withError:(id *)a1;
- (id)removeCodeSigningDictionaryForIdentifier:(id)a0;
- (unsigned long long)_onQueue_dataContainerTypeForIdentifier:(id)a0;
- (void)_onQueue_migrateCachedCodeSigningInfoFromBundleContainersToMappingWithContainersLegacy:(id)a0 containerClass:(unsigned long long)a1;
- (id)processCallerRegisteredEntitlements:(id)a0 identifier:(id)a1 error:(id *)a2;
- (id)_codeSigningInfoForCodeSigningEntry:(id)a0 externalRequest:(BOOL)a1;
- (id)_onQueue_codeSigningEntryForIdentifier:(id)a0 withError:(id *)a1;
- (id)appGroupIdentifiersForIdentifier:(id)a0;
- (unsigned long long)dataContainerTypeForIdentifier:(id)a0;
- (id)entitlementsForIdentifier:(id)a0;
- (void)performAllCodeSigningMigrationAndReconciliationWithContext:(id)a0;
- (id)initWithUserIdentityCache:(id)a0 queue:(id)a1 mappingDB:(id)a2 childParentMapCache:(id)a3 library:(id)a4;
- (id)_onQueue_invalidateCodeSigningInfoForIdentifierAndItsChildren:(id)a0;
- (void)_onQueue_reconcileSystemContainersWithContext:(id)a0;
- (id)_onQueue_copyReferenceCountSetForContainerClass:(unsigned long long)a0;
- (id)_entitlementsFromCodeSigningEntry:(id)a0;
- (id)_onQueue_identifiersWithError:(id *)a0;
- (BOOL)_onQueue_registerKernelProvidedReferencesForIdentifier:(id)a0 withAppGroupContainers:(id)a1 systemGroupContainers:(id)a2 error:(unsigned long long *)a3;
- (id)_onQueue_entitlementsForIdentifier:(id)a0;
- (void)_onQueue_iterateGroupIdsWithKey:(id)a0 fallBackKey:(id)a1 forAllIdentifiersUsingBlock:(id /* block */)a2;
- (BOOL)identifierHasCallerRegisteredEntitlements:(id)a0;
- (id)_onQueue_setCodeSigningDictionaryValues:(id)a0 forIdentifiers:(id)a1;
- (BOOL)_onQueue_invalidateCodeSigningInfoForIdentifier:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)copyReferenceCountSetForContainerClass:(unsigned long long)a0;
- (void)_onQueue_migrateDataFromLegacyEntitlementsFileToCodeSigningFile;
- (void)_onQueue_migrateAppGroupIdsFromDataContainersToFileUsingContainers:(id)a0;

@end
