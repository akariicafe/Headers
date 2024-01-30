@class NSString, ManagedCatalogModalityReference;

@interface ManagedCatalogFilterPropertyType : NSManagedObject

@property (nonatomic, copy) NSString *propertyType;
@property (nonatomic, retain) ManagedCatalogModalityReference *catalogModalityReference;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
