@class NSString, ManagedCatalogModalityReference;

@interface ManagedAlternativeActivityType : NSManagedObject

@property (nonatomic, copy) NSString *alternativeActivityType;
@property (nonatomic, retain) ManagedCatalogModalityReference *modalityReference;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
