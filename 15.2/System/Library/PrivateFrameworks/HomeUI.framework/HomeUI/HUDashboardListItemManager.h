@class HFRoomItemProvider, HFItem, HFStaticItemProvider;

@interface HUDashboardListItemManager : HFItemManager

@property (retain, nonatomic) HFStaticItemProvider *favoritesItemProvider;
@property (retain, nonatomic) HFRoomItemProvider *roomItemProvider;
@property (retain, nonatomic) HFItem *favoritesItem;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;

@end
