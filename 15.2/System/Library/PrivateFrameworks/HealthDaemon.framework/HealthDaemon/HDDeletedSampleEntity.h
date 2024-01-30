@interface HDDeletedSampleEntity : HDDeletedObjectEntity

+ (id)databaseTable;
+ (BOOL)isConcreteEntity;
+ (BOOL)addCodableObject:(id)a0 toCollection:(id)a1;
+ (id)codableObjectsFromObjectCollection:(id)a0;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (long long)protectionClass;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)insertCodableDeletedSamples:(id)a0 provenance:(id)a1 profile:(id)a2 error:(id *)a3;
+ (Class)_entityClassForDeletion;
+ (id)insertDeletedObject:(id)a0 dataType:(id)a1 provenanceIdentifier:(id)a2 deletionDate:(id)a3 persistStartAndEndDates:(BOOL)a4 startTimestamp:(double)a5 endTimestamp:(double)a6 inDatabase:(id)a7 error:(id *)a8;
+ (BOOL)enumerateDeletedSamplesWithTypes:(id)a0 profile:(id)a1 restrictedSourceEntities:(id)a2 limit:(unsigned long long)a3 anchor:(long long)a4 error:(id *)a5 handler:(id /* block */)a6;
+ (long long)nextSyncAnchorWithStartAnchor:(long long)a0 predicate:(id)a1 session:(id)a2 healthDatabase:(id)a3 error:(id *)a4;
+ (BOOL)enumerateEntitiesForSyncWithProperties:(id)a0 predicate:(id)a1 session:(id)a2 syncAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a3 limit:(unsigned long long)a4 lastSyncAnchor:(long long *)a5 healthDatabase:(id)a6 error:(id *)a7 block:(id /* block */)a8;

@end
