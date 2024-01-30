@class HMHome, NSMutableSet;

@interface HULocationConnectedEcosystemsItemProvider : HFItemProvider

@property (readonly, nonatomic) HMHome *home;
@property (retain, nonatomic) NSMutableSet *connectedEcosystemsItems;

- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)reloadItems;
- (id)items;

@end
