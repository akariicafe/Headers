@class HMAccessory, HUConnectedEcosystemsItemProvider, HFItem;

@interface HUConnectedEcosystemsItemManager : HFItemManager

@property (retain, nonatomic) HUConnectedEcosystemsItemProvider *connectedEcosystemsItemProvider;
@property (retain, nonatomic) HFItem *instructionsItem;
@property (readonly, nonatomic) HMAccessory *accessory;

+ (id /* block */)connectedEcosystemsItemComparator;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithAccessory:(id)a0 delegate:(id)a1;

@end
