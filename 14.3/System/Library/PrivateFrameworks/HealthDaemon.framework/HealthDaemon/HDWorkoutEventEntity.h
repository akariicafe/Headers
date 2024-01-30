@interface HDWorkoutEventEntity : HDHealthEntity

+ (id)foreignKeys;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)statementForEnumeratingEventsForOwnerInDatabase:(id)a0 error:(id *)a1;
+ (Class)workoutEventClass;
+ (BOOL)enumerateEventsForOwner:(long long)a0 withStatement:(id)a1 error:(id *)a2 eventHandler:(id /* block */)a3;
+ (id)workoutEventsForOwner:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)workoutEventsWithOwnerID:(id)a0 database:(id)a1 error:(id *)a2;
+ (id)ownerEntityReferenceColumn;
+ (BOOL)insertWorkoutEventsFromWorkout:(id)a0 ownerID:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (id)insertPersistableWorkoutEvent:(id)a0 ownerID:(id)a1 database:(id)a2 error:(id *)a3;
+ (Class)ownerEntityClass;
+ (id)deleteStatementForWorkoutEventsWithTransaction:(id)a0;
+ (long long)protectionClass;

@end
