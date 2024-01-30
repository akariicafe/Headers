@class NAFuture, NSMutableSet, HUMatterConnectedHomeItemProvider, HMAccessory;

@interface HUMatterAccessoryConnectedEcosystemItemProvider : HUMatterConnectedEcosystemItemProvider

@property (retain, nonatomic) HUMatterConnectedHomeItemProvider *connectedHomeItemProvider;
@property (retain, nonatomic) NSMutableSet *connectedEcosystemItems;
@property (readonly, nonatomic) NAFuture *accessoryConnectedEcosystemToCHIPAccessoryPairingsFuture;
@property (readonly, nonatomic) HMAccessory *accessory;
@property (readonly, nonatomic) NAFuture *connectedEcosystemsFuture;

- (void).cxx_destruct;
- (id)items;
- (id)reloadItems;
- (id)initWithAccessory:(id)a0;

@end
