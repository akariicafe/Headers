@interface HDQuantitySampleEntity : HDSampleEntity

+ (BOOL)validateEntityWithProfile:(id)a0 error:(id *)a1 validationErrorHandler:(id /* block */)a2;
+ (id)databaseTable;
+ (BOOL)addCodableObject:(id)a0 toCollection:(id)a1;
+ (id)joinClausesForProperty:(id)a0;
+ (id)codableObjectsFromObjectCollection:(id)a0;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (id)foreignKeys;
+ (id)insertDataObject:(id)a0 withProvenance:(id)a1 inDatabase:(id)a2 persistentID:(id)a3 error:(id *)a4;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)orderingTermForSortDescriptor:(id)a0;
+ (long long)compareForReplacmentWithObject:(id)a0 existingObject:(id)a1;

@end
