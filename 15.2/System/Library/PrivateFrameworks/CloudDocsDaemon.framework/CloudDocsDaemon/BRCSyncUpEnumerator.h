@class PQLResultSet, BRCLocalItem, NSMutableDictionary, NSMutableSet, NSMutableIndexSet, NSMutableArray, BRCClientZone;
@protocol PQLEnumeration;

@interface BRCSyncUpEnumerator : NSEnumerator {
    unsigned int _maxDepth;
    unsigned int _should2PhasePCSChain;
    BRCClientZone *_clientZone;
    NSMutableSet *_whitelist;
    NSMutableSet *_itemIDsLostOrThrottled;
    NSMutableSet *_itemIDsNeedingOSUpgrade;
    NSMutableDictionary *_tombstonesEmbargo;
    NSMutableIndexSet *_returned;
    PQLResultSet<PQLEnumeration> *_enumerator;
    NSMutableArray *_stack;
    int _stage;
}

@property (readonly, nonatomic) unsigned int batchSize;
@property (readonly, nonatomic) unsigned long long retryAfter;
@property (readonly, nonatomic) BRCLocalItem *itemNeedingPCSChaining;
@property (readonly, nonatomic) NSMutableSet *chainedParentIDWhitelist;
@property (readonly, nonatomic) NSMutableArray *itemsNeedingUnshare;

- (id)nextObject;
- (void).cxx_destruct;
- (BOOL)isBlackListed:(id)a0;
- (void)invalidate;
- (id)initWithClientZone:(id)a0;
- (void)_blackListDescendantStack:(id)a0 parentItem:(id)a1 andAddToSet:(id)a2 descendantBlock:(id /* block */)a3;
- (void)_blackListDescendantStack:(id)a0 parentItem:(id)a1 andAddToSet:(id)a2;
- (BOOL)_handleSharedItemWhichMovedToNewShare:(id)a0 rootItem:(id)a1;
- (BOOL)_blackListDescendantStackAndItemIfThrottledOrNeedsOSUpgrade:(id)a0 now:(unsigned long long)a1;
- (BOOL)_checkForSharesWithinSharesWithItem:(id)a0;
- (BOOL)_checkIfShouldDedicateOpToPCSChainingItem:(id)a0;
- (BOOL)_checkIfShouldBlacklistForPathMatch:(id)a0;
- (BOOL)handleItemForOSUpgrade:(id)a0 parentItemID:(id)a1;
- (BOOL)_handlePendingShareItemWithPendingDeleteChildren:(id)a0;
- (BOOL)_checkIfParentNeedsRevivalWithParentItem:(id)a0;
- (id)_nextLiveItem;
- (id)_nextTombstone;
- (id)_documentsOrAliasesNeedingSyncUpEnumerator;
- (id)_liveDirectoriesNeedingSyncUpEnumerator;
- (id)_tombstoneLeavesNeedingSyncUpEnumerator;

@end
