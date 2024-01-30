@class NSString, ManagedHealthKitSessionReference, NSDate;

@interface ManagedHealthKitWorkout : NSManagedObject

@property (nonatomic) double duration;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) BOOL isIndoorWorkout;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic) int workoutActivityType;
@property (nonatomic, retain) ManagedHealthKitSessionReference *sessionReference;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
