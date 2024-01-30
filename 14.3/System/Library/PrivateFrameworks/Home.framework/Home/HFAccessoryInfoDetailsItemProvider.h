@class HFAccessoryNetworkInfoItem, HMAccessory, NSMutableSet, HFAccessoryInfoItem, HMHome;
@protocol HFCharacteristicValueSource;

@interface HFAccessoryInfoDetailsItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *accessoryInfoDetailItems;
@property (retain, nonatomic) HMAccessory *accessory;
@property (readonly, nonatomic) HFAccessoryInfoItem *firmwareItem;
@property (readonly, nonatomic) HFAccessoryInfoItem *softwareItem;
@property (readonly, nonatomic) HFAccessoryNetworkInfoItem *networkItem;
@property (readonly, nonatomic) HMHome *home;
@property (retain, nonatomic) id<HFCharacteristicValueSource> valueSource;

+ (id)preferredCharacteristicOrderArray;
+ (id)_displayValueForCachedValue:(id)a0 characteristicType:(id)a1 accessoryInfoService:(id)a2;
+ (id /* block */)accessoryInfoServiceDetailComparator;

- (id)init;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0 accessory:(id)a1;
- (BOOL)canToggleAccessoryInfoItem:(id)a0;
- (void)toggleAccessoryInfoItem:(id)a0;
- (id)items;
- (id)invalidationReasons;
- (id)reloadItems;

@end
