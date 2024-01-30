@interface HDWorkoutSessionEventEntity : HDWorkoutEventEntity

+ (id)databaseTable;
+ (long long)protectionClass;
+ (id)workoutEventsWithWorkoutSession:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (Class)workoutEventClass;
+ (Class)ownerEntityClass;
+ (id)ownerEntityReferenceColumn;

@end
