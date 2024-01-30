@class HMAccessory, NSMutableSet;

@interface HUConnectedEcosystemsItemProvider : HFItemProvider

@property (readonly, nonatomic) HMAccessory *accessory;
@property (retain, nonatomic) NSMutableSet *connectedEcosystemsItems;

- (id)initWithAccessory:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)reloadItems;
- (id)items;

@end
