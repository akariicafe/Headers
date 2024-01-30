@class HMCHIPHome, HFItem, HULocationConnectedEcosystemDetailItemProvider, HMHome;

@interface HULocationConnectedEcosystemDetailItemManager : HFItemManager

@property (readonly, nonatomic) HMHome *overrideHome;
@property (readonly, nonatomic) HMCHIPHome *connectedEcosystemHome;
@property (retain, nonatomic) HULocationConnectedEcosystemDetailItemProvider *connectedEcosystemItemProvider;
@property (retain, nonatomic) HFItem *instructionsItem;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithConnectedEcosystemHome:(id)a0 home:(id)a1 delegate:(id)a2;
- (id)_roomForItem:(id)a0;
- (id /* block */)accessoryItemComparator;

@end
