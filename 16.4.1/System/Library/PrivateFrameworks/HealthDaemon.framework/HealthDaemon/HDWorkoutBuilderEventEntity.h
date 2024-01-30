@interface HDWorkoutBuilderEventEntity : HDWorkoutEventEntity

+ (id)databaseTable;
+ (id)workoutEventsWithWorkoutBuilder:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (long long)protectionClass;
+ (Class)ownerEntityClass;
+ (id)ownerEntityReferenceColumn;

@end
