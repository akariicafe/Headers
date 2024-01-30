@class HMHome, HFNetworkConfigurationItemProvider, NSSet;

@interface HUNetworkConfigurationMismatchItemManager : HFItemManager

@property (readonly, nonatomic) HMHome *overrideHome;
@property (retain, nonatomic) HFNetworkConfigurationItemProvider *networkConfigurationItemProvider;
@property (readonly, nonatomic) NSSet *profiles;

- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_homeFuture;
- (BOOL)isItemNetworkConfigurationItem:(id)a0;
- (id)initWithProfiles:(id)a0 delegate:(id)a1;
- (id)networkConfigurationItemForProfile:(id)a0;

@end
