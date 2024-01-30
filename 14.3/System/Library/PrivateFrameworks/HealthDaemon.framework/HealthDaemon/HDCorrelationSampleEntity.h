@interface HDCorrelationSampleEntity : HDSampleEntity

+ (BOOL)addCodableObject:(id)a0 toCollection:(id)a1;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (id)codableObjectsFromObjectCollection:(id)a0;
+ (id)insertDataObject:(id)a0 withProvenance:(id)a1 inDatabase:(id)a2 persistentID:(id)a3 error:(id *)a4;
+ (id)deleteStatementsForRelatedEntitiesWithTransaction:(id)a0;
+ (BOOL)isConcreteEntity;
+ (BOOL)acceptsObject:(id)a0;
+ (id)createTableSQL;
+ (id)_objectsWithIDs:(id)a0 profile:(id)a1;
+ (BOOL)requiresSampleTypePredicate;
+ (BOOL)isBackedByTable;

- (BOOL)deleteFromDatabase:(id)a0 error:(id *)a1;

@end
