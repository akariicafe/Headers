@class HMHome, HMCHIPHome, NSMutableSet;

@interface HULocationConnectedEcosystemDetailItemProvider : HFItemProvider

@property (readonly, nonatomic) HMHome *home;
@property (retain, nonatomic) HMCHIPHome *connectedEcosystemHome;
@property (retain, nonatomic) NSMutableSet *allItems;

- (void).cxx_destruct;
- (id)init;
- (id)reloadItems;
- (id)items;
- (id)invalidationReasons;
- (id)initWithConnectedEcosystemHome:(id)a0 home:(id)a1;

@end
