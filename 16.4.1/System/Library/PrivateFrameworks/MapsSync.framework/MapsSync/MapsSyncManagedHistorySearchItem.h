@class NSData, NSString;

@interface MapsSyncManagedHistorySearchItem : MapsSyncManagedHistoryItem

@property (class, nonatomic, readonly) Class wrapperClass;

@property (nonatomic, copy) NSData *geoMapRegion;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *locationDisplay;
@property (nonatomic, copy) NSString *query;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
