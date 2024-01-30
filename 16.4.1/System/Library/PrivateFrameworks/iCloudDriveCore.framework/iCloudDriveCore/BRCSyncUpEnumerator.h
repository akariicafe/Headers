@class PQLResultSet, BRCLocalItem, NSMutableDictionary, NSMutableSet, NSMutableIndexSet, NSMutableArray, BRCClientZone;
@protocol PQLEnumeration;

@interface BRCSyncUpEnumerator : NSEnumerator {
    unsigned int _maxDepth;
    unsigned int _should2PhasePCSChain;
    unsigned int _currentDepth;
    BRCClientZone *_clientZone;
    NSMutableDictionary *_visitedItemIDsToDepthMap;
    NSMutableSet *_itemIDsLostOrThrottled;
    NSMutableSet *_itemIDsNeedingOSUpgrade;
    NSMutableSet *_itemIDsNeedingDirectoryFetch;
    NSMutableDictionary *_tombstonesEmbargo;
    NSMutableIndexSet *_returned;
    PQLResultSet<PQLEnumeration> *_enumerator;
    NSMutableArray *_stack;
    NSMutableArray *_tooDeepItems;
    int _stage;
}

@property (readonly, nonatomic) unsigned int batchSize;
@property (readonly, nonatomic) unsigned long long retryAfter;
@property (readonly, nonatomic) BRCLocalItem *itemNeedingPCSChaining;
@property (readonly, nonatomic) NSMutableSet *chainedParentIDAllowlist;
@property (readonly, nonatomic) NSMutableArray *itemsNeedingUnshare;

- (id)nextObject;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)_denyListDescendantStackAndItemIfThrottledOrNeedsOSUpgrade:(id)a0 now:(unsigned long long)a1;
- (BOOL)_checkForSharesWithinSharesWithItem:(id)a0;
- (BOOL)_checkIfParentNeedsRevivalWithParentItem:(id)a0;
- (BOOL)_checkIfShouldDedicateOpToPCSChainingItem:(id)a0;
- (BOOL)_checkIfShouldDenylistForParentDirectoryFaultWithItem:(id)a0 needsDirFaultCheck:(BOOL *)a1;
- (BOOL)_checkIfShouldDenylistForPathMatch:(id)a0;
- (void)_denyListDescendantStack:(id)a0 parentItem:(id)a1 andAddToSet:(id)a2;
- (void)_denyListDescendantStack:(id)a0 parentItem:(id)a1 andAddToSet:(id)a2 descendantBlock:(id /* block */)a3;
- (id)_documentsOrAliasesNeedingSyncUpEnumerator;
- (BOOL)_handlePendingShareItemWithPendingDeleteChildren:(id)a0;
- (BOOL)_handleSharedItemWhichMovedToNewShare:(id)a0 rootItem:(id)a1;
- (id)_liveDirectoriesNeedingSyncUpEnumerator;
- (id)_nextLiveItem;
- (id)_nextTombstone;
- (id)_tombstoneLeavesNeedingSyncUpEnumerator;
- (BOOL)handleItemForOSUpgrade:(id)a0 parentItemID:(id)a1;
- (id)initWithClientZone:(id)a0;
- (BOOL)isDenyListed:(id)a0;

@end
