@interface HDDataProvenanceEntity : HDHealthEntity

+ (BOOL)validateEntityWithProfile:(id)a0 error:(id *)a1 validationErrorHandler:(id /* block */)a2;
+ (id)databaseTable;
+ (id)uniquedColumns;
+ (long long)protectionClass;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)sourceIDsWithProvenanceFromSourceIDs:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)originProvenanceForPersistentID:(long long)a0 database:(id)a1 error:(id *)a2;
+ (id)insertOrLookupDataProvenanceForSyncProvenance:(long long)a0 originProductType:(id)a1 originSystemBuild:(id)a2 originOSVersion:(struct { long long x0; long long x1; long long x2; })a3 localProductType:(id)a4 localSystemBuild:(id)a5 sourceVersion:(id)a6 timeZoneName:(id)a7 sourceID:(id)a8 deviceID:(id)a9 contributorID:(id)a10 transaction:(id)a11 error:(id *)a12;

@end
