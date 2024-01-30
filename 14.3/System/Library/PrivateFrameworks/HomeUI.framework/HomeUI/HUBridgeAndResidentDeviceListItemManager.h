@class HMHome, HFResidentDeviceItemProvider, HFBridgeItemProvider;

@interface HUBridgeAndResidentDeviceListItemManager : HFItemManager

@property (readonly, nonatomic) HMHome *overrideHome;
@property (retain, nonatomic) HFBridgeItemProvider *bridgeItemProvider;
@property (retain, nonatomic) HFResidentDeviceItemProvider *residentDeviceItemProvider;

+ (id /* block */)residentDeviceItemComparator;

- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_homeFuture;
- (id)_itemsToHideInSet:(id)a0;
- (id)initWithHome:(id)a0 delegate:(id)a1;
- (id)bridgeItemForAccessory:(id)a0;
- (BOOL)isBridgeItem:(id)a0;
- (BOOL)isResidentDeviceItem:(id)a0;

@end
