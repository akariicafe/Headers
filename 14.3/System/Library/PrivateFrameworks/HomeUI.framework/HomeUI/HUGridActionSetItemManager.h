@class HFStaticItemProvider, HFReorderableHomeKitItemList, HMRoom, HFStaticItem, HFActionSetItemProvider;

@interface HUGridActionSetItemManager : HFItemManager

@property (retain, nonatomic) HFActionSetItemProvider *actionSetItemProvider;
@property (retain, nonatomic) HFStaticItemProvider *actionsetPlaceholderItemProvider;
@property (retain, nonatomic) HFReorderableHomeKitItemList *clientReorderableActionSetList;
@property (retain, nonatomic) HFStaticItem *actionSetPlaceholderItem;
@property (retain, nonatomic) HMRoom *room;
@property (nonatomic) BOOL onlyShowsFavorites;
@property (readonly, nonatomic) unsigned long long actionSetStyle;
@property (retain, nonatomic) HFReorderableHomeKitItemList *reorderableActionSetList;

- (void)_updateFilters;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)_buildItemProvidersForHome:(id)a0;
- (id /* block */)_comparatorForSectionIdentifier:(id)a0;
- (BOOL)_requiresNotificationsForCharacteristic:(id)a0;
- (void)_didFinishUpdateTransactionWithAffectedItems:(id)a0;
- (id)_itemForSorting;
- (id)_itemsToHideInSet:(id)a0;
- (id)initWithDelegate:(id)a0 actionSetStyle:(unsigned long long)a1 room:(id)a2;
- (id)actionSetItemAssociatedWithActionSet:(id)a0;
- (BOOL)isItemReorderableAtIndex:(id)a0;

@end
