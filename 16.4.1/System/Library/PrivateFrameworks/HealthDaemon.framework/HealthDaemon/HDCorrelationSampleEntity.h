@interface HDCorrelationSampleEntity : HDSampleEntity

+ (id)codableObjectsFromObjectCollection:(id)a0;
+ (id)deleteStatementsForRelatedEntitiesWithTransaction:(id)a0;
+ (BOOL)isConcreteEntity;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (id)createTableSQL;
+ (BOOL)isBackedByTable;
+ (BOOL)requiresSampleTypePredicate;
+ (BOOL)addCodableObject:(id)a0 toCollection:(id)a1;
+ (id)insertDataObject:(id)a0 withProvenance:(id)a1 inDatabase:(id)a2 persistentID:(id)a3 error:(id *)a4;
+ (BOOL)acceptsObject:(id)a0;

- (BOOL)deleteFromDatabase:(id)a0 error:(id *)a1;

@end
