@class NSUUID, NSNumber, MapsSyncManagedMixinMapItem;

@interface MapsSyncManagedHistoryPlaceItem : MapsSyncManagedHistoryItem

@property (class, nonatomic, readonly) Class wrapperClass;

@property (nonatomic, copy) NSUUID *supersededSearchId;
@property (nonatomic, retain) NSNumber *muid;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) MapsSyncManagedMixinMapItem *mapItem;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
