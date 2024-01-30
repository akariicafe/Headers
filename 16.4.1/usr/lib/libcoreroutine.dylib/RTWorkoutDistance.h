@class NSString, NSUUID, NSDate, NSManagedObjectID;

@interface RTWorkoutDistance : NSObject <RTCoreDataReadable, RTCoreDataWritable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSManagedObjectID *objectID;
@property (readonly, copy, nonatomic) NSUUID *firstWorkout;
@property (readonly, copy, nonatomic) NSUUID *secondWorkout;
@property (readonly, nonatomic) double distance;
@property (readonly, nonatomic) BOOL areBothWorkoutsDecimated;
@property (readonly, nonatomic) long long distanceMetric;
@property (readonly, nonatomic) long long workoutActivityType;
@property (nonatomic) BOOL isVisited;
@property (readonly, copy, nonatomic) NSDate *date;

+ (id)createWithManagedObject:(id)a0;
+ (id)createWithWorkoutDistanceMO:(id)a0;

- (id)managedObjectWithContext:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithObjectID:(id)a0 firstWorkout:(id)a1 secondWorkout:(id)a2 distanceMetric:(long long)a3 workoutActivityType:(long long)a4 areBothWorkoutsDecimated:(BOOL)a5 distance:(double)a6 isVisited:(BOOL)a7 date:(id)a8;

@end
