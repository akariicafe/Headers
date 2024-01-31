@class NSDictionary, PFCSSearchableIndexProvider, NSPersistentStoreCoordinator, NSURL, NSString, NSPersistentStoreDescription, NSManagedObjectContext;

@interface NSCoreDataCoreSpotlightDelegate : NSObject {
    NSPersistentStoreCoordinator *_coordinator;
    NSPersistentStoreDescription *_description;
    NSString *_storeIdentifier;
    NSManagedObjectContext *_context__;
    NSString *_domainIdentifier;
    NSString *_indexName;
    NSString *_bundleIdentifier;
    NSString *_protectionClass;
    BOOL _usesPrivateIndex;
    NSURL *_indexURL;
    int __indexerThrottle;
    NSDictionary *_indexedPropertyNamesByEntity;
    int __enqueuedOperationCount;
}

@property (copy) NSURL *indexURL;
@property (retain, nonatomic) PFCSSearchableIndexProvider *indexProvider;
@property (readonly, getter=isIndexingEnabled) BOOL indexingEnabled;

+ (void)initialize;

- (void)searchableIndex:(id)a0 reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)a1;
- (void)searchableIndex:(id)a0 reindexSearchableItemsWithIdentifiers:(id)a1 acknowledgementHandler:(id /* block */)a2;
- (id)init;
- (void)dealloc;
- (id)domainIdentifier;
- (id)bundleIdentifier;
- (id)indexName;
- (id)protectionClass;
- (BOOL)usePrivateIndex;
- (int)_indexerThrottle;
- (id)attributeSetForObject:(id)a0;
- (void)deleteSpotlightIndexWithCompletionHandler:(id /* block */)a0;
- (void)indexSearchableItemsToCurrentHistoryToken;
- (id)indexedPropertyNamesByEntityNameUsingModel:(id)a0;
- (id)initForStoreWithDescription:(id)a0 coordinator:(id)a1;
- (id)initForStoreWithDescription:(id)a0 model:(id)a1;
- (void)startSpotlightIndexing;
- (void)stopSpotlightIndexing;

@end
