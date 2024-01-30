@class NSString, NSSet;

@interface ManagedCatalogThemeCategory : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) int sortOrder;
@property (nonatomic, retain) NSSet *themes;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
