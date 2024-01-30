@class HMHome, NSMutableSet, NAFuture;

@interface HUMatterHomeConnectedEcosystemItemProvider : HUMatterConnectedEcosystemItemProvider

@property (retain, nonatomic) NSMutableSet *connectedEcosystemItems;
@property (readonly, nonatomic) NAFuture *ecosystemAccessoryUUIDMapFuture;
@property (readonly, nonatomic) HMHome *home;

- (void).cxx_destruct;
- (id)items;
- (id)reloadItems;
- (id)initWithHome:(id)a0;

@end
