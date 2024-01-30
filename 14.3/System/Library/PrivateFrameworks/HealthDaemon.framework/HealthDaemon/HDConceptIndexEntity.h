@interface HDConceptIndexEntity : HDHealthEntity

+ (id)indices;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)storeState:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)_keyValueDomainWithProfile:(id)a0;
+ (id)databaseTable;
+ (BOOL)removeConceptIndexEntriesForSampleUUID:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)_conceptIndexEntriesWithPredicate:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)insertConceptIndexEntries:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)stateWithProfile:(id)a0 error:(id *)a1;
+ (id)allConceptIndexEntriesWithProfile:(id)a0 error:(id *)a1;
+ (id)conceptIndexEntriesForSampleUUID:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)sampleUUIDsForConceptIdentifier:(long long)a0 keyPaths:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)_enumerateConceptIndexEntriesWithPredicate:(id)a0 transaction:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (BOOL)_insertConceptIndexEntry:(id)a0 database:(id)a1 error:(id *)a2;
+ (id)_propertiesForEntity;
+ (id)conceptIndexEntriesForSampleUUID:(id)a0 type:(unsigned long long)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)removeAllConceptIndexEntriesWithProfile:(id)a0 error:(id *)a1;
+ (long long)protectionClass;

@end
