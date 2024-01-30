@class NSArray, MSPJournal, NSOrderedSet, NSString;

@interface MSPCloudMigrator : NSObject <MSPCloudContainerObserver>

@property (retain, nonatomic) MSPJournal *journal;
@property (retain, nonatomic) NSArray *containers;
@property (retain, nonatomic) NSOrderedSet *migratedFavoriteIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_performMigrationsForCollectionsContainerWithCompletion:(id /* block */)a0;
- (void)_performPreSyncMigrationsForFavoritesContainerWithCompletion:(id /* block */)a0;
- (void)_performMigrationsForHistoryContainerWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_performMigrationsForFavoritesContainerWithCompletion:(id /* block */)a0;
- (id)initWithCloudContainers:(id)a0;
- (void)cloudContainer:(id)a0 didFetchChanges:(id)a1;
- (void)_performMigrationsForPinnedPlacesContainerWithCompletion:(id /* block */)a0;
- (void)performMigrationsWithCompletion:(id /* block */)a0;
- (void)cloudContainerDidChange:(id)a0;
- (void)_performPreSyncMigrationsForCollectionsContainerWithCompletion:(id /* block */)a0;
- (id)initWithContainers:(id)a0;
- (void)_performPreSyncMigrationsForHistoryContainerWithCompletion:(id /* block */)a0;
- (void)performPreSyncMigrationsWithCompletion:(id /* block */)a0;

@end
