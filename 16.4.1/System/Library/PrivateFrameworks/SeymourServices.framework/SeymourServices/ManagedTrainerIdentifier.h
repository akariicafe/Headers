@class NSString, NSSet;

@interface ManagedTrainerIdentifier : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSSet *catalogProgramTrainers;
@property (nonatomic, retain) NSSet *catalogWorkoutTrainers;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
