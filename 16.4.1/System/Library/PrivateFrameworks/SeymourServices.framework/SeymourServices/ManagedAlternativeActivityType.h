@class NSString, NSSet;

@interface ManagedAlternativeActivityType : NSManagedObject

@property (nonatomic, copy) NSString *alternativeActivityType;
@property (nonatomic, retain) NSSet *modalityReference;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
