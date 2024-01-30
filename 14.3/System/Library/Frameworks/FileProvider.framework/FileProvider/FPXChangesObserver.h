@class NSString, NSMutableArray, NSData;

@interface FPXChangesObserver : FPXObserver <NSFileProviderChangeObserver> {
    NSMutableArray *_changedItems;
    NSMutableArray *_deletedItemIDs;
    NSData *_originalSyncAnchor;
}

@property (copy) id /* block */ finishedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithObservedItemID:(id)a0 domainContext:(id)a1;
- (id)initWithObservedItemID:(id)a0 domainContext:(id)a1 previousChangeToken:(id)a2;
- (void)didUpdateItems:(id)a0;
- (void)didDeleteItemsWithIdentifiers:(id)a0;
- (void)finishEnumeratingChangesUpToSyncAnchor:(id)a0 moreComing:(BOOL)a1;
- (void)finishEnumeratingWithError:(id)a0;
- (void).cxx_destruct;

@end
