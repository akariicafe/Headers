@class NSString, NSDate;

@interface ManagedCatalogSyncAnchor : NSManagedObject

@property (nonatomic, copy) NSString *build;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSString *status;
@property (nonatomic, copy) NSString *token;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
