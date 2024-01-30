@class HMHome, HFNetworkConfigurationItemProvider;

@interface HUNetworkRouterManualReconfigurationItemManager : HFItemManager

@property (readonly, nonatomic) HMHome *overrideHome;
@property (retain, nonatomic) HFNetworkConfigurationItemProvider *networkConfigurationItemProvider;

- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_homeFuture;
- (id)initWithHome:(id)a0 delegate:(id)a1;
- (BOOL)isItemNetworkConfigurationItem:(id)a0;
- (id)networkConfigurationItemForProfile:(id)a0;

@end
