@class HMHome, HULocationConnectedEcosystemsItemProvider, HFItem;

@interface HULocationConnectedEcosystemsItemManager : HFItemManager

@property (readonly, nonatomic) HMHome *overrideHome;
@property (retain, nonatomic) HULocationConnectedEcosystemsItemProvider *connectedEcosystemsItemProvider;
@property (retain, nonatomic) HFItem *instructionsItem;

+ (id /* block */)connectedEcosystemsItemComparator;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithHome:(id)a0 delegate:(id)a1;

@end
