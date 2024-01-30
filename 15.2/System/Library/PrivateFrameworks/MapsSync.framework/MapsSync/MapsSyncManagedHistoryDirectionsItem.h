@class NSData;

@interface MapsSyncManagedHistoryDirectionsItem : MapsSyncManagedHistoryItem

@property (nonatomic) BOOL navigationInterrupted;
@property (nonatomic, copy) NSData *routeRequestStorage;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
