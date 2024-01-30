@class NSString, NSSet;

@interface ManagedHealthKitStandaloneMindfulSessionJob : NSManagedObject

@property (nonatomic, copy) NSString *catalogWorkoutIdentifier;
@property (nonatomic, copy) NSString *sessionIdentifier;
@property (nonatomic, retain) NSSet *sessions;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
