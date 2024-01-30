@class HFCharacteristicEventBuilderItem, HFItem, NSMutableSet, HMHome;
@protocol HFServiceVendor, HFCharacteristicValueSource;

@interface HUCharacteristicEventOptionProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *optionItems;
@property (retain, nonatomic) HFItem<HFServiceVendor> *serviceVendingItem;
@property (retain, nonatomic) id<HFCharacteristicValueSource> overrideValueSource;
@property (readonly, nonatomic) HMHome *home;
@property (copy, nonatomic) id /* block */ filter;
@property (retain, nonatomic) HFCharacteristicEventBuilderItem *eventBuilderItem;

+ (BOOL)hasOptionsForAnyServiceInHome:(id)a0;
+ (BOOL)hasOptionsForServiceVendingItem:(id)a0 outCharacteristicType:(id *)a1;
+ (BOOL)homeHubUpdateRequiredForServiceVendingItem:(id)a0 forHome:(id)a1;
+ (BOOL)_hasOptionsForServices:(id)a0 outCharacteristicType:(id *)a1;
+ (id)_supportedCharacteristicTypes;
+ (id)_characteristicTypesRequiringUpdatedHomeHubs;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)items;
- (id)valueSource;
- (id)invalidationReasons;
- (void)setValueSource:(id)a0;
- (id)initWithServiceVendingItem:(id)a0 home:(id)a1;
- (id)_notifyingCharacteristicsKeyedByTypeForServices:(id)a0;
- (id)_optionsForCharacteristicType:(id)a0 characteristics:(id)a1;

@end
