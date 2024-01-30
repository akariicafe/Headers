@class LiveFSFPExtensionHelper, NSString, LiveFSFPItemHelper, NSMutableSet, LiveFSFPEnumeratorDataContainer;

@interface LiveFSFPEnumeratorHelper : NSObject <NSFileProviderEnumerator> {
    LiveFSFPExtensionHelper *ext;
    BOOL historyReset;
    BOOL isActive;
    BOOL _sortedByDate;
    NSMutableSet *deletedItems;
    NSMutableSet *updatedItems;
    unsigned char postedSelfUpdate : 1;
    unsigned char postedSelfDelete : 1;
}

@property (readonly) BOOL hasPersistentIDs;
@property BOOL addParent;
@property (readonly) BOOL isDir;
@property int state;
@property (readonly) BOOL isVolumeWide;
@property (readonly, nonatomic) LiveFSFPItemHelper *enumeratedItem;
@property (readonly, retain) LiveFSFPEnumeratorDataContainer *dc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)applyParentUpdateAcrossEnumerators:(id)a0;
+ (id)newWithEnumeratedItem:(id)a0 extension:(id)a1 error:(id *)a2;

- (void)invalidate;
- (void).cxx_destruct;
- (void)currentSyncAnchorWithCompletionHandler:(id /* block */)a0;
- (void)enumerateChangesForObserver:(id)a0 fromSyncAnchor:(id)a1;
- (void)enumerateItemsForObserver:(id)a0 startingAtPage:(id)a1;
- (id)getItemsFromTree:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 error:(id *)a2;
- (void)addInterestedItem:(id)a0 newName:(id)a1 forSelf:(BOOL)a2;
- (void)applyDelete:(id)a0 newTombstone:(id)a1 toSelf:(BOOL)a2;
- (void)doShutdown;
- (id)ensureConnectedForUpdates;
- (void)enumerateFileItemsForObserver:(id)a0 startingAtPage:(id)a1;
- (id)getDirContents;
- (id)initForExtension:(id)a0 item:(id)a1;
- (id)initWithEnumeratedItem:(id)a0 container:(id)a1 extension:(id)a2;
- (void)reallyEnumerateItemsForObserver:(id)a0 startingAtPage:(id)a1;
- (void)resetHistory;
- (void)signalEnumeratedItemChanged;
- (void)synchronizedEnumerateChangesForObserver:(id)a0 fromSyncAnchor:(id)a1;

@end
