@class NSString, NSUUID, NSDate;

@interface ManagedHealthKitStandaloneWorkoutJob : NSManagedObject

@property (nonatomic, copy) NSString *catalogWorkoutIdentifier;
@property (nonatomic) double duration;
@property (nonatomic, copy) NSUUID *healthKitWorkoutIdentifier;
@property (nonatomic, copy) NSString *sessionIdentifier;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic) int workoutActivityType;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
