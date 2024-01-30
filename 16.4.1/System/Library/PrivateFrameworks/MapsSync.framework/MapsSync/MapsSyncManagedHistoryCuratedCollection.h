@interface MapsSyncManagedHistoryCuratedCollection : MapsSyncManagedHistoryItem

@property (class, nonatomic, readonly) Class wrapperClass;

@property (nonatomic) long long curatedCollectionIdentifier;
@property (nonatomic) int resultProviderIdentifier;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
