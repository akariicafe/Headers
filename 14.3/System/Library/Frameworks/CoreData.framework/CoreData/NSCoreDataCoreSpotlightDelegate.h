@class NSString, NSPersistentStoreCoordinator, NSURL, NSPersistentStoreDescription, NSManagedObjectContext;

@interface NSCoreDataCoreSpotlightDelegate : NSObject {
    NSPersistentStoreCoordinator *_coordinator;
    NSPersistentStoreDescription *_description;
    NSString *_storeIdentifier;
    NSManagedObjectContext *_context__;
    NSString *_domainIdentifier;
    NSString *_indexName;
    NSString *_bundleIdentifier;
    NSString *_protectionClass;
    BOOL _enabled;
    BOOL _supportsPersistentHistory;
    BOOL _usesSharedCoordinatorStack;
    BOOL _usesPrivateIndex;
    NSURL *_indexURL;
    int __indexerThrottle;
}

@property (copy) NSURL *indexURL;

- (void)deleteAllSearchableItemsWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (id)domainIdentifier;
- (void)dealloc;
- (id)indexName;
- (void)searchableIndex:(id)a0 reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)a1;
- (id)bundleIdentifier;
- (void)_invalidate;
- (BOOL)usePrivateIndex;
- (id)initForStoreWithDescription:(id)a0 model:(id)a1;
- (int)_indexerThrottle;
- (id)attributeSetForObject:(id)a0;
- (id)initForStoreWithDescription:(id)a0 coordinator:(id)a1;
- (void)indexSearchableItemsToCurrentHistoryToken;
- (void)startSpotlightIndexing;
- (void)stopSpotlightIndexing;
- (id)protectionClass;
- (void)searchableIndex:(id)a0 reindexSearchableItemsWithIdentifiers:(id)a1 acknowledgementHandler:(id /* block */)a2;

@end
