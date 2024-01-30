@class WBCollectionConfiguration, NSArray, WBTabCollection, NSHashTable, NSMutableDictionary, NSMutableArray;

@interface PinnedTabsManager : NSObject {
    NSHashTable *_observers;
    NSMutableArray *_pinnedTabs;
    NSMutableArray *_privatePinnedTabs;
    NSMutableDictionary *_pinnedTabsByUUID;
    NSMutableDictionary *_privatePinnedTabsByUUID;
    unsigned long long _updateFlags;
    long long _updateSuppressionCount;
}

@property (readonly, copy, nonatomic) WBCollectionConfiguration *collectionConfiguration;
@property (readonly, nonatomic) WBTabCollection *tabCollection;
@property (readonly, copy, nonatomic) NSArray *pinnedTabs;
@property (readonly, copy, nonatomic) NSArray *privatePinnedTabs;

- (void)_updateCache;
- (void).cxx_destruct;
- (void)_notifyObserversAfterUpdatesIfNeeded;
- (id)_tabWithUUID:(id)a0 isPrivate:(BOOL)a1;
- (void)addPinnedTabsObserver:(id)a0;
- (void)appendTab:(id)a0 isPrivate:(BOOL)a1;
- (id)initWithBrowserState:(id)a0 collectionConfiguration:(id)a1;
- (void)moveTab:(id)a0 toTabGroup:(id)a1 afterTab:(id)a2;
- (void)notifyObserversOfUpdatedPinnedTabsIsPrivate:(BOOL)a0;
- (void)performUpdatesUsingBlock:(id /* block */)a0;
- (void)removePinnedTabsObserver:(id)a0;
- (void)removeTabWithUUID:(id)a0 persist:(BOOL)a1;
- (void)updatePinnedTabWithUUID:(id)a0 isPrivate:(BOOL)a1 usingBlock:(id /* block */)a2;
- (void)updatePinnedTabs:(BOOL)a0 usingBlock:(id /* block */)a1;

@end
