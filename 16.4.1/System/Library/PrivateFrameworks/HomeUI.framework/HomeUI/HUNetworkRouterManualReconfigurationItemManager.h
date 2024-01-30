@class HMHome, HFNetworkConfigurationItemProvider;

@interface HUNetworkRouterManualReconfigurationItemManager : HFItemManager

@property (readonly, nonatomic) HMHome *overrideHome;
@property (retain, nonatomic) HFNetworkConfigurationItemProvider *networkConfigurationItemProvider;

- (void).cxx_destruct;
- (BOOL)isItemNetworkConfigurationItem:(id)a0;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_homeFuture;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (id)initWithHome:(id)a0 delegate:(id)a1;
- (id)networkConfigurationItemForProfile:(id)a0;

@end
