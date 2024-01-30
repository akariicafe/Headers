@interface MapsSyncManagedHistoryCuratedCollection : MapsSyncManagedHistoryItem

@property (nonatomic) long long curatedCollectionIdentifier;
@property (nonatomic) int resultProviderIdentifier;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
