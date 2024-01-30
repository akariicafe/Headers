@interface HDWorkoutSessionEventEntity : HDWorkoutEventEntity

+ (id)databaseTable;
+ (Class)ownerEntityClass;
+ (long long)protectionClass;
+ (id)ownerEntityReferenceColumn;
+ (id)workoutEventsWithWorkoutSession:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (Class)workoutEventClass;

@end
