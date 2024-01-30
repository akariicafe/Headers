@class NSSet, HFReorderableHomeKitItemList;
@protocol HFItemUpdating;

@interface HFItemModule : NSObject

@property (retain, nonatomic) HFReorderableHomeKitItemList *clientReorderableHomeKitItemList;
@property (readonly, nonatomic) NSSet *itemProviders;
@property (readonly, nonatomic) NSSet *allItems;
@property (readonly, weak, nonatomic) id<HFItemUpdating> itemUpdater;
@property (readonly, nonatomic) BOOL supportsReordering;
@property (retain, nonatomic) HFReorderableHomeKitItemList *reorderableHomeKitItemList;

- (BOOL)containsItem:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id /* block */)_itemComparator;
- (id)_reorderableHomeKitItemListKey;
- (id)buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0;
- (void)itemUpdaterDidFinishUpdateTransactionWithAffectedItems:(id)a0;
- (id)matchingItemForHomeKitObject:(id)a0;
- (void)registerForExternalUpdates;
- (BOOL)supportsReorderingForItem:(id)a0;
- (void)unregisterForExternalUpdates;

@end
