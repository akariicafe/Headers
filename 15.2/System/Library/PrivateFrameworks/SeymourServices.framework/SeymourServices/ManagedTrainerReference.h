@class NSString, NSSet;

@interface ManagedTrainerReference : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSSet *artwork;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
