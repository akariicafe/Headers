@class NSDate, NSMutableDictionary, NSMapTable, NSMutableSet, FPSpotlightQueryDescriptor, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, FPSpotlightCollectorDelegate;

@interface FPSpotlightCollector : NSObject {
    NSMutableDictionary *_itemsByBundleAndCSID;
    BOOL _suspended;
    unsigned long long _numberOfRecoveryAttempts;
    NSDate *_lastStartOfRecovery;
    NSMapTable *_queryToMountPoint;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain, nonatomic) NSMutableSet *observers;
@property (retain, nonatomic) NSMutableArray *queries;
@property (nonatomic, getter=isGathering) BOOL gathering;
@property (nonatomic) unsigned long long itemsOrigin;
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;
@property (weak, nonatomic) id<FPSpotlightCollectorDelegate> delegate;
@property (readonly, nonatomic) FPSpotlightQueryDescriptor *queryDescriptor;

+ (id)processingQueue;
+ (id)_recursiveDescription;

- (void)_removeObserver:(id)a0;
- (void)_clear;
- (void)_stop;
- (id)allItems;
- (void)_start;
- (id)initWithDescriptor:(id)a0;
- (id)init;
- (void)queryDidFinishGathering:(id)a0;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id)allObservers;
- (void)addObserver:(id)a0;
- (void)_addObserver:(id)a0;
- (id)description;
- (void)resume;
- (void)_regather;
- (void)suspend;
- (id)_queryAddresses;
- (id)allItemsForObserver:(id)a0;
- (id)_mountPointForExistingSearchQuery:(id)a0;
- (void)_removeItemsForQuery:(id)a0 mountPoint:(id)a1;
- (id)_createQueryForMountPoint:(id)a0;
- (BOOL)_shouldRemoveItemsFromObserver:(id)a0;
- (unsigned long long)_itemsOriginForItems:(id)a0;
- (id)filterItems:(id)a0 forObserver:(id)a1 excludedItemIDs:(id *)a2;
- (BOOL)isQueryCancelled:(id)a0;
- (BOOL)_areItemsTransientFromBundleIdentifier:(id)a0;
- (BOOL)_shouldFilterUpdatesForObserver:(id)a0;
- (void)setNeedsItemsOriginUpdate;
- (void)query:(id)a0 didUpdateItems:(id)a1;
- (void)query:(id)a0 didRemoveItemsWithCSIdentifiers:(id)a1 inBundle:(id)a2;
- (void)query:(id)a0 didFinishWithError:(id)a1;
- (id)_mountPointsForDescriptor;
- (id)_createQueriesForMountPoints:(id)a0;
- (id)_allItemsForMountPoint:(id)a0;
- (void)mountPointsDidChange:(id)a0;

@end
