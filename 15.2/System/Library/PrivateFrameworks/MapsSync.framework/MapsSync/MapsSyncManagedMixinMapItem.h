@class MapsSyncManagedFavoriteItem, MapsSyncManagedCollectionPlaceItem, MapsSyncManagedHistoryPlaceItem, NSData;

@interface MapsSyncManagedMixinMapItem : NSManagedObject

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic, copy) NSData *mapItemStorage;
@property (nonatomic, retain) MapsSyncManagedCollectionPlaceItem *collectionPlaceItem;
@property (nonatomic, retain) MapsSyncManagedFavoriteItem *favoriteItem;
@property (nonatomic, retain) MapsSyncManagedHistoryPlaceItem *historyPlaceItem;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
