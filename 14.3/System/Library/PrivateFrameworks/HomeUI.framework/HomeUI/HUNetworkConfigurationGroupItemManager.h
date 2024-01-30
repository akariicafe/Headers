@class HUNetworkConfigurationItemListModule;

@interface HUNetworkConfigurationGroupItemManager : HFItemManager

@property (readonly, nonatomic) HUNetworkConfigurationItemListModule *networkConfigurationItemListModule;

- (void).cxx_destruct;
- (id)_buildItemModulesForHome:(id)a0;

@end
