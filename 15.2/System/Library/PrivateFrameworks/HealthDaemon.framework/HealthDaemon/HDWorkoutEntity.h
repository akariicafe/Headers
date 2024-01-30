@interface HDWorkoutEntity : HDSampleEntity

+ (id)databaseTable;
+ (BOOL)isConcreteEntity;
+ (BOOL)addCodableObject:(id)a0 toCollection:(id)a1;
+ (id)codableObjectsFromObjectCollection:(id)a0;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (BOOL)enumerateCondensedWorkoutsWithPredicate:(id)a0 profile:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (id)insertDataObject:(id)a0 withProvenance:(id)a1 inDatabase:(id)a2 persistentID:(id)a3 error:(id *)a4;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)workoutActivityType:(unsigned long long *)a0 associatedWithRouteUUID:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (id)deleteStatementsForRelatedEntitiesWithTransaction:(id)a0;
+ (id)orderingTermForSortDescriptor:(id)a0;
+ (BOOL)copySampleAssociationsFromWorkout:(id)a0 toWorkout:(id)a1 profile:(id)a2 error:(id *)a3;

- (BOOL)updateCondenserVersion:(long long)a0 date:(id)a1 transaction:(id)a2 error:(id *)a3;
- (BOOL)isCondenserVersionLessThan:(long long)a0 transaction:(id)a1;
- (BOOL)getCondenserVersion:(out long long *)a0 date:(out id *)a1 profile:(id)a2 error:(id *)a3;
- (id)codableCondensedWorkoutWithTransaction:(id)a0 error:(id *)a1;

@end
