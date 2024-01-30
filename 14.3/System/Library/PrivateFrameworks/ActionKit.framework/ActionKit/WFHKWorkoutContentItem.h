@interface WFHKWorkoutContentItem : WFContentItem <WFContentItemClass>

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (id)itemWithWorkout:(id)a0;
+ (id)itemWithWorkout:(id)a0 distanceUnit:(id)a1 caloriesUnit:(id)a2;

- (id)workout;
- (id)sourceName;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (id)readableActivityType;
- (id)workoutContainer;

@end
