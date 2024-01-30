@interface HDWorkoutSessionEventEntity : HDWorkoutEventEntity

+ (id)databaseTable;
+ (Class)workoutEventClass;
+ (id)ownerEntityReferenceColumn;
+ (id)workoutEventsWithWorkoutSession:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (Class)ownerEntityClass;
+ (long long)protectionClass;

@end
