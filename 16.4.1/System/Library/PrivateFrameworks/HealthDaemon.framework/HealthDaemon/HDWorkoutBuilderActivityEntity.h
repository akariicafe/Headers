@interface HDWorkoutBuilderActivityEntity : HDWorkoutActivityEntity

+ (id)databaseTable;
+ (BOOL)supportsNullableEndDate;
+ (long long)protectionClass;
+ (id)_statisticsForWorkoutActivityWithPersistentId:(unsigned long long)a0 workoutActivity:(id)a1 database:(id)a2 error:(id *)a3;
+ (Class)ownerEntityClass;

@end
