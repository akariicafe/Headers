@class NSUUID, NSDate;

@interface RTWorkoutDistanceMO : NSManagedObject

@property (copy, nonatomic) NSUUID *firstWorkout;
@property (copy, nonatomic) NSUUID *secondWorkout;
@property (nonatomic) double distance;
@property (nonatomic) long long distanceMetric;
@property (nonatomic) BOOL areBothWorkoutsDecimated;
@property (nonatomic) long long workoutActivityType;
@property (nonatomic) BOOL isVisited;
@property (copy, nonatomic) NSDate *date;

+ (id)fetchRequest;
+ (id)managedObjectWithFirstWorkout:(id)a0 secondWorkout:(id)a1 distanceMetric:(long long)a2 workoutActivityType:(long long)a3 areBothWorkoutsDecimated:(BOOL)a4 distance:(double)a5 isVisited:(BOOL)a6 date:(id)a7 inManagedObjectContext:(id)a8;
+ (id)managedObjectWithWorkoutDistance:(id)a0 inManagedObjectContext:(id)a1;

@end
