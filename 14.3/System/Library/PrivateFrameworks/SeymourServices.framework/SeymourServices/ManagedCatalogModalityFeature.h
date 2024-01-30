@class NSString, ManagedCatalogModalityReference;

@interface ManagedCatalogModalityFeature : NSManagedObject

@property (nonatomic, copy) NSString *feature;
@property (nonatomic, retain) ManagedCatalogModalityReference *catalogModalityReference;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
