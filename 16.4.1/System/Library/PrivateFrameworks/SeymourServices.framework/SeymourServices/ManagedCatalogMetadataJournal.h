@class NSString;

@interface ManagedCatalogMetadataJournal : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) double timestamp;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
