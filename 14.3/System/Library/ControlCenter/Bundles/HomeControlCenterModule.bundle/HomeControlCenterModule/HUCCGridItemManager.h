@class HFItemProvider;
@protocol HUCCFavoriteItemProvider;

@interface HUCCGridItemManager : HFItemManager

@property (retain, nonatomic) HFItemProvider<HUCCFavoriteItemProvider> *favoriteItemProvider;
@property (nonatomic) unsigned long long maximumNumberOfItems;
@property (readonly, nonatomic) unsigned long long itemType;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id /* block */)_comparatorForSectionIdentifier:(id)a0;
- (id)_itemForSorting;
- (id)initWithDelegate:(id)a0 itemType:(unsigned long long)a1;
- (void)reloadForMaximumNumberOfItemsChange;

@end
