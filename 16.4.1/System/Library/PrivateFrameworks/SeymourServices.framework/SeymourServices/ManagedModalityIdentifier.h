@class NSString, NSSet;

@interface ManagedModalityIdentifier : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSSet *catalogProgramModalities;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
