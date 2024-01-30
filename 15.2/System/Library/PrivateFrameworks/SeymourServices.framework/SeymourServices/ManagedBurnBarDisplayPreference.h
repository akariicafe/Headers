@class NSString;

@interface ManagedBurnBarDisplayPreference : NSManagedObject

@property (nonatomic, copy) NSString *behavior;
@property (nonatomic, copy) NSString *modalityConstraint;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
