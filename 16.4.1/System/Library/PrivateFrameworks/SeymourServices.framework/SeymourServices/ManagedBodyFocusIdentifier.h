@class NSString, NSSet;

@interface ManagedBodyFocusIdentifier : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSSet *catalogWorkoutBodyFocuses;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
