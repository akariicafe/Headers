@interface HDSourceEntity : HDHealthEntity

+ (id)propertyForSyncAnchor;
+ (id)databaseTable;
+ (id)indices;
+ (id)propertyForSyncProvenance;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (long long)protectionClass;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)sourcesWithPredicate:(id)a0 includeDeleted:(BOOL)a1 profile:(id)a2 error:(id *)a3;
+ (id)firstSourceWithPredicate:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)enumerateBundleIdentifiersForSourcesForUUIDData:(id)a0 transaction:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (id)sourceForBundleIdentifier:(id)a0 localOnly:(BOOL)a1 transaction:(id)a2 error:(id *)a3;
+ (id)firstSourceWithPredicate:(id)a0 database:(id)a1 error:(id *)a2;
+ (id)insertCodableSource:(id)a0 provenance:(long long)a1 profile:(id)a2 error:(id *)a3;
+ (id)sourcesWithPredicate:(id)a0 orderingTerms:(id)a1 includeDeleted:(BOOL)a2 database:(id)a3 error:(id *)a4;
+ (id)insertSourceWithUUID:(id)a0 bundleIdentifier:(id)a1 owningAppBundleIdentifier:(id)a2 name:(id)a3 options:(unsigned long long)a4 isCurrentDevice:(BOOL)a5 productType:(id)a6 modificationDate:(id)a7 provenance:(long long)a8 profile:(id)a9 error:(id *)a10;
+ (id)sourcesWithPredicate:(id)a0 includeDeleted:(BOOL)a1 database:(id)a2 error:(id *)a3;
+ (BOOL)enumerateBundleIdentifiersForSourcesWithPredicate:(id)a0 database:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (id)sourceForLocalDeviceWithDatabase:(id)a0 error:(id *)a1;

- (BOOL)setName:(id)a0 profile:(id)a1 error:(id *)a2;
- (id)sourceUUIDWithProfile:(id)a0 error:(id *)a1;
- (id)codableSourceWithEncoder:(id)a0 error:(id *)a1;
- (id)sourceUUIDWithHealthDatabase:(id)a0 error:(id *)a1;
- (BOOL)setOptions:(unsigned long long)a0 profile:(id)a1 didUpdate:(BOOL *)a2 error:(id *)a3;
- (id)sourceBundleIdentifierInDatabase:(id)a0 error:(id *)a1;
- (id)sourceWithProfile:(id)a0 error:(id *)a1;
- (id)codableSourceWithProfile:(id)a0 error:(id *)a1;
- (BOOL)deleteSourceWithDatabase:(id)a0 error:(id *)a1;
- (BOOL)adoptAsLocalSourceWithBundleIdentifier:(id)a0 UUID:(id)a1 name:(id)a2 productType:(id)a3 profile:(id)a4 error:(id *)a5;

@end
