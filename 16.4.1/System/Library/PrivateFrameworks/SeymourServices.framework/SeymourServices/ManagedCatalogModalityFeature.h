@class NSString, NSSet;

@interface ManagedCatalogModalityFeature : NSManagedObject

@property (nonatomic, copy) NSString *feature;
@property (nonatomic, retain) NSSet *catalogModalityReference;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
