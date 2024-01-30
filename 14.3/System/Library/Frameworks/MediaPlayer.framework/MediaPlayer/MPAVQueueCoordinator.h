@class NSMutableSet, NSArray, MPAVItem, NSString, MPQueuePlayer, NSOperationQueue, NSHashTable;
@protocol MPAVQueueCoordinatingDataSource;

@interface MPAVQueueCoordinator : NSObject <MPAVQueueCoordinating> {
    NSOperationQueue *_assetQueue;
    unsigned long long _backgroundTaskIdentifier;
    unsigned long long _backgroundTasks;
    BOOL _holdingPlaybackTransactionForFirstItem;
    BOOL _isPendingPlayerItemSync;
    BOOL _isSyncingPlayerItems;
    NSHashTable *_itemsPendingAssetLoading;
    MPAVItem *_lastItemAnchor;
    unsigned long long _lastPreferredQueueDepth;
    BOOL _needsCurrentItemUpdateAfterPlayerItemSync;
    BOOL _preventLoadingItems;
    NSMutableSet *_reusableItems;
}

@property (readonly, nonatomic) MPQueuePlayer *player;
@property (readonly, weak, nonatomic) id<MPAVQueueCoordinatingDataSource> dataSource;
@property (copy, nonatomic) id /* block */ equilibriumAchievedHandler;
@property (readonly, nonatomic) MPAVItem *currentItem;
@property (nonatomic) BOOL shouldExpectEmptyQueue;
@property (nonatomic) BOOL shouldDeferItemLoading;
@property (readonly, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateCurrentItem;
- (id)initWithPlayer:(id)a0 dataSource:(id)a1;
- (void)_sendItemsDidChange;
- (void)_beginBackgroundTaskAssertion;
- (unsigned long long)_preferredQueueDepthWithFirstItem:(id)a0;
- (BOOL)_hasAchievedEquilibrium;
- (void).cxx_destruct;
- (void)_dequeueFailedItem:(id)a0;
- (void)reset;
- (void)_reloadItemsKeepingCurrentItem:(BOOL)a0;
- (void)dealloc;
- (void)reloadItemsKeepingCurrentItem:(BOOL)a0;
- (void)_endBackgroundTaskAssertion;
- (void)_syncPlayerItems;
- (void)_syncItemsWithPreviousItems:(id)a0;
- (void)_updateQueueDepthIfNeeded;
- (void)_removeItemFromPlayer:(id)a0;
- (void)_currentItemHasFinishedDownloadingDidChangeNotification:(id)a0;
- (void)_loadAssetForItem:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)_playerItems;

@end
