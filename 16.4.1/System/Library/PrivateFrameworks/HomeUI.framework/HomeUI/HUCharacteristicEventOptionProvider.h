@class HFCharacteristicEventBuilderItem, HFItem, NSMutableSet, HMHome;
@protocol HFServiceVendor, HFCharacteristicValueSource;

@interface HUCharacteristicEventOptionProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *optionItems;
@property (retain, nonatomic) HFItem<HFServiceVendor> *serviceVendingItem;
@property (retain, nonatomic) id<HFCharacteristicValueSource> overrideValueSource;
@property (readonly, nonatomic) HMHome *home;
@property (copy, nonatomic) id /* block */ filter;
@property (retain, nonatomic) HFCharacteristicEventBuilderItem *eventBuilderItem;

+ (id)_characteristicTypesRequiringUpdatedHomeHubs;
+ (id)_supportedCharacteristicTypes;
+ (id)characteristicTypeWithOptionsForServices:(id)a0;
+ (BOOL)hasOptionsForAnyServiceInHome:(id)a0;
+ (BOOL)hasOptionsForAnyServiceInHome:(id)a0 allowingSensors:(BOOL)a1;
+ (BOOL)hasOptionsForServiceVendingItem:(id)a0 outCharacteristicType:(id *)a1;
+ (BOOL)hasOptionsForServices:(id)a0 outCharacteristicType:(id *)a1;
+ (BOOL)hasOptionsForServices:(id)a0 outCharacteristicType:(id *)a1 allowingSensors:(BOOL)a2;
+ (BOOL)homeHubUpdateRequiredForServices:(id)a0 forHome:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)items;
- (id)reloadItems;
- (void)setValueSource:(id)a0;
- (id)valueSource;
- (id)_notifyingCharacteristicsKeyedByTypeForServices:(id)a0;
- (id)_optionsForCharacteristicType:(id)a0 characteristics:(id)a1;
- (id)initWithServiceVendingItem:(id)a0 home:(id)a1;
- (id)invalidationReasons;

@end
