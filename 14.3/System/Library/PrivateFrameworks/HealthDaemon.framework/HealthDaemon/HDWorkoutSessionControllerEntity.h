@interface HDWorkoutSessionControllerEntity : HDHealthEntity

+ (id)foreignKeys;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)uniquedColumns;
+ (long long)protectionClass;
+ (id)_predicateForRecoveryIdentifier:(id)a0 workoutSession:(id)a1;
+ (BOOL)storeArchivedStateWithRecoveryIdentifier:(id)a0 archivedState:(id)a1 workoutSession:(id)a2 transaction:(id)a3 error:(id *)a4;
+ (BOOL)retrieveArchivedStateFromRecoveryIdentifier:(id)a0 workoutSession:(id)a1 transaction:(id)a2 error:(id *)a3 block:(id /* block */)a4;

@end
