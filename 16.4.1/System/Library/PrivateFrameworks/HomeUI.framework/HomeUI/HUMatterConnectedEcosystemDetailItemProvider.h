@class HMCHIPEcosystem, NSMutableSet, HUMatterHomeConnectedEcosystemItemProvider, HMHome;

@interface HUMatterConnectedEcosystemDetailItemProvider : HFItemProvider

@property (readonly, nonatomic) HMHome *home;
@property (retain, nonatomic) HMCHIPEcosystem *connectedEcosystem;
@property (retain, nonatomic) HUMatterHomeConnectedEcosystemItemProvider *connectedEcosystemItemProvider;
@property (retain, nonatomic) NSMutableSet *allItems;

- (void).cxx_destruct;
- (id)items;
- (id)reloadItems;
- (id)initWithConnectedEcosystem:(id)a0 connectedEcosystemItemProvider:(id)a1 home:(id)a2;
- (id)invalidationReasons;

@end
