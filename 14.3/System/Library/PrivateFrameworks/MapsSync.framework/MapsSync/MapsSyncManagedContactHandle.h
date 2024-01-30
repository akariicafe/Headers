@class NSString, MapsSyncManagedFavoriteItem;

@interface MapsSyncManagedContactHandle : NSManagedObject

@property (nonatomic, copy) NSString *handle;
@property (nonatomic, retain) MapsSyncManagedFavoriteItem *favoriteItem;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
