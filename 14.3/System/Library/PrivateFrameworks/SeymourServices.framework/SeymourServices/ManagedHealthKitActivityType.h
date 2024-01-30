@class ManagedCatalogModalityReference;

@interface ManagedHealthKitActivityType : NSManagedObject

@property (nonatomic) int index;
@property (nonatomic) long long value;
@property (nonatomic, retain) ManagedCatalogModalityReference *modalityReference;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
