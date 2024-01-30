@interface HDWorkoutBuilderEventEntity : HDWorkoutEventEntity

+ (id)databaseTable;
+ (Class)ownerEntityClass;
+ (long long)protectionClass;
+ (id)ownerEntityReferenceColumn;
+ (id)workoutEventsWithWorkoutBuilder:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
