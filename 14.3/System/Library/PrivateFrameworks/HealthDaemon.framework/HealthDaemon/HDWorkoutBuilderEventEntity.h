@interface HDWorkoutBuilderEventEntity : HDWorkoutEventEntity

+ (id)databaseTable;
+ (id)workoutEventsWithWorkoutBuilder:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)ownerEntityReferenceColumn;
+ (Class)ownerEntityClass;
+ (long long)protectionClass;

@end
