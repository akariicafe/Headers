@class NSString, NSSet;

@interface ManagedWorkoutIdentifier : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSSet *catalogProgramWorkouts;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
