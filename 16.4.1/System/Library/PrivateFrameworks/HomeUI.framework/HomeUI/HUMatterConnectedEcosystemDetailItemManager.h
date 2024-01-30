@class HFItem, HMCHIPEcosystem, HUMatterHomeConnectedEcosystemItemProvider, HFTransformItemProvider;

@interface HUMatterConnectedEcosystemDetailItemManager : HFItemManager

@property (readonly, nonatomic) HMCHIPEcosystem *connectedEcosystem;
@property (readonly, nonatomic) HUMatterHomeConnectedEcosystemItemProvider *connectedEcosystemItemProvider;
@property (retain, nonatomic) HFTransformItemProvider *connectedEcosystemAccessoryItemProvider;
@property (retain, nonatomic) HFItem *instructionsItem;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_roomForItem:(id)a0;
- (id)initWithConnectedEcosystem:(id)a0 connectedEcosystemItemProvider:(id)a1 delegate:(id)a2;

@end
