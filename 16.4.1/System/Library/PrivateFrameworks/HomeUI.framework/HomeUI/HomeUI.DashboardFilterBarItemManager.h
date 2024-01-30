@interface HomeUI.DashboardFilterBarItemManager : HFItemManager {
    void /* unknown type, empty encoding */ categoryItemProvider;
    void /* unknown type, empty encoding */ actionSetItemProvider;
}

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;

@end
