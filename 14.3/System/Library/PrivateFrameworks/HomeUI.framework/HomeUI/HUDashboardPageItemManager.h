@class HFReorderableHomeKitItemList;

@interface HUDashboardPageItemManager : HFItemManager

@property (readonly, nonatomic) HFReorderableHomeKitItemList *reorderableRoomList;

- (id)_buildItemProvidersForHome:(id)a0;
- (id /* block */)_comparatorForSectionIdentifier:(id)a0;
- (id)_itemForSorting;

@end
