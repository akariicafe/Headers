@interface HDDataProvenanceEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)validateEntityWithProfile:(id)a0 error:(id *)a1 validationErrorHandler:(id /* block */)a2;
+ (id)databaseTable;
+ (long long)protectionClass;
+ (id)sourceIDsWithProvenanceFromSourceIDs:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)originProvenanceForPersistentID:(long long)a0 database:(id)a1 error:(id *)a2;
+ (id)uniquedColumns;
+ (id)insertOrLookupDataProvenanceForSyncProvenance:(long long)a0 syncIdentity:(long long)a1 originProductType:(id)a2 originSystemBuild:(id)a3 originOSVersion:(struct { long long x0; long long x1; long long x2; })a4 localProductType:(id)a5 localSystemBuild:(id)a6 sourceVersion:(id)a7 timeZoneName:(id)a8 sourceID:(id)a9 deviceID:(id)a10 contributorID:(id)a11 transaction:(id)a12 error:(id *)a13;

@end
