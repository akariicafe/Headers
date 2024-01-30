@interface HDFitnessFriendActivitySnapshotEntity : HDSampleEntity

+ (id)databaseTable;
+ (id)uniquedColumns;
+ (id)mergeDataObject:(id)a0 provenance:(id)a1 profile:(id)a2 transaction:(id)a3 error:(id *)a4 insertHandler:(id /* block */)a5;
+ (BOOL)isConcreteEntity;
+ (BOOL)addCodableObject:(id)a0 toCollection:(id)a1;
+ (BOOL)supportsObjectMerging;
+ (id)codableObjectsFromObjectCollection:(id)a0;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (id)insertDataObject:(id)a0 withProvenance:(id)a1 inDatabase:(id)a2 persistentID:(id)a3 error:(id *)a4;
+ (long long)protectionClass;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)enumerateSnapshotsWithPredicate:(id)a0 anchor:(id *)a1 profile:(id)a2 error:(id *)a3 handler:(id /* block */)a4;

@end
