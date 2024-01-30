@interface HDAuthorizationEntity : HDHealthEntity

+ (id)foreignKeys;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)allSourcesRequestingTypes:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)authorizationStatusesForBundleIdentifier:(id)a0 types:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)authorizationRecordsBySourceForType:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)_insertCodableSourceAuthorizations:(id)a0 overwriteExisting:(BOOL)a1 syncStore:(id)a2 profile:(id)a3 error:(id *)a4;
+ (void)_addAuthorizationWithRow:(struct HDSQLiteRow { } *)a0 toCodableCollection:(id)a1;
+ (id)_predicateForBundleIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)resetAuthorizationStatusesForBundleIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)setAuthorizationStatuses:(id)a0 sourceEntity:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)setAuthorizationStatuses:(id)a0 authorizationRequests:(id)a1 authorizationModes:(id)a2 sourceEntity:(id)a3 options:(unsigned long long)a4 profile:(id)a5 error:(id *)a6;
+ (id)_propertiesForCodableAuthorization;
+ (id)readAuthorizationStatusesByTypeForBundleIdentifier:(id)a0 types:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)_sourceEntityForCodableSourceAuthorization:(id)a0 syncStore:(id)a1 profile:(id)a2 database:(id)a3 error:(id *)a4;
+ (id)authorizationRecordsByTypeForBundleIdentifier:(id)a0 types:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)_predicateForSourceEntities:(id)a0 types:(id)a1;
+ (id)_predicateForType:(id)a0;
+ (BOOL)_setAuthorizationStatuses:(id)a0 authorizationRequests:(id)a1 authorizationModes:(id)a2 sourceEntity:(id)a3 dateModified:(id)a4 syncProvenance:(long long)a5 objectAnchor:(long long)a6 options:(unsigned long long)a7 profile:(id)a8 database:(id)a9 error:(id *)a10;
+ (id)_nextModificationEpochForSourceIdentifier:(long long)a0 type:(long long)a1 profile:(id)a2 database:(id)a3 error:(id *)a4;
+ (BOOL)resetAllAuthorizationStatusesWithProfile:(id)a0 error:(id *)a1;
+ (id)_predicateForTypes:(id)a0;
+ (id)uniquedColumns;
+ (id)propertyForSyncProvenance;
+ (id)_predicateForSourceEntities:(id)a0;
+ (BOOL)_insertCodableAuthorizations:(id)a0 sourceEntity:(id)a1 syncProvenance:(long long)a2 objectAnchor:(long long)a3 currentDate:(id)a4 options:(unsigned long long)a5 profile:(id)a6 database:(id)a7 error:(id *)a8;
+ (BOOL)_insertAuthorizationWithSourceIdentifier:(long long)a0 dataTypeCode:(long long)a1 authorizationStatus:(long long)a2 authorizationRequest:(long long)a3 authorizationMode:(long long)a4 modificationDate:(id)a5 currentDate:(id)a6 syncProvenance:(long long)a7 objectAnchor:(long long)a8 modificationEpoch:(id)a9 options:(unsigned long long)a10 profile:(id)a11 database:(id)a12 error:(id *)a13;
+ (id)modificationDateForSourceEntity:(id)a0 type:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)_resetAuthorizationStatusesWithPredicate:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)_allSourcesRequestingTypes:(id)a0 additionalPredicate:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)_maxObjectPersistentIDForProfile:(id)a0 error:(id *)a1;
+ (long long)protectionClass;

@end
