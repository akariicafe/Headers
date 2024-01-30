@class NSMetadataQuery, NSString, NSData, NSPredicate, NSMutableDictionary, NSMutableSet, NSObject, BRWatchingConfiguration;
@protocol OS_dispatch_queue, BRItemCollectionGathererDelegate, NSObject;

@interface BRItemCollectionGatherer : NSObject <FPItemCollectionItemIDBasedDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_itemIDToItemCollectionMap;
    id<BRItemCollectionGathererDelegate> _delegate;
    NSMetadataQuery *_query;
    NSPredicate *_predicate;
    BRWatchingConfiguration *_config;
    NSMutableSet *_watchedAppLibraryFPItemIDs;
    NSMutableSet *_waitingToBeGatheredCollections;
    NSMutableSet *_collectionsSet;
    NSMutableDictionary *_itemOwnersMap;
    BOOL _finishedInitialGathering;
    NSMutableSet *_boostedAppLibraries;
    NSMutableDictionary *_failureCountByItemID;
    NSData *_perAppAccountIdentifier;
    id<NSObject> _accountTokenDidChangeNotificationObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_stopObserving;
- (void)stop;
- (void)invalidate;
- (void).cxx_destruct;
- (void)disableUpdates;
- (void)enableUpdates;
- (void)_removeCollectionFromGatherSet:(id)a0;
- (void)_boostAppLibraryOfItemIfNeeded:(id)a0;
- (unsigned long long)_itemID:(id)a0 wasDeletedByCollection:(id)a1;
- (void)_addItemCollectionOnItem:(id)a0;
- (BOOL)_buildCollectionOnItemIfPossible:(id)a0;
- (BOOL)_canWatchItem:(id)a0;
- (void)_dataForCollectionShouldBeReloaded;
- (id)_getAppLibraryURLFromConfig:(id)a0;
- (id)_getFPItemIDForAppLibraryID:(id)a0 containerURL:(id)a1;
- (BOOL)_isItemOwnedByAnyCollection:(id)a0;
- (unsigned long long)_itemID:(id)a0 becameOwnedByCollection:(id)a1;
- (void)_startObservingAccountTokenDidChangeNotification;
- (void)_startWatchingAppLibrariesIfNeeded;
- (void)_startWatchingNewSubItem:(id)a0;
- (void)_startWatchingRootItemWithConfig:(id)a0;
- (void)_startWatchingTrashIfNeeded;
- (void)_startWatchingURLsIfNeeded;
- (void)_stopObservingAccountTokenDidChangeNotification;
- (void)_stopWatchingItemIDRecusively:(id)a0 itemIDsInItem:(id)a1;
- (void)_unboostApplibrariesIfNeeded;
- (void)collection:(id)a0 didEncounterError:(id)a1;
- (void)collection:(id)a0 didUpdateItems:(id)a1 replaceItemsByFormerID:(id)a2 deleteItemsWithIDs:(id)a3;
- (void)collectionDidFinishGathering:(id)a0;
- (void)dataForCollectionShouldBeReloaded:(id)a0;
- (id)initWithDelegate:(id)a0 query:(id)a1;
- (void)startWatchingRootItemWithScopes:(id)a0;

@end
