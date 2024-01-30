@class NSString, NSSet;

@interface ManagedContributorIdentifier : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSSet *catalogProgramContributors;
@property (nonatomic, retain) NSSet *catalogWorkoutContributors;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
