@class NSSet, HMAccessory, HMService;
@protocol HFCharacteristicValueSource;

@interface HFCharacteristicStateItemProvider : HFItemProvider

@property (retain, nonatomic) NSSet *characteristicStateItems;
@property (retain, nonatomic) NSSet *batteryItems;
@property (readonly, nonatomic) HMAccessory *accessory;
@property (readonly, nonatomic) HMService *service;
@property (readonly, nonatomic) id<HFCharacteristicValueSource> valueSource;

+ (id)_createBatteryItemWithSourceItem:(id)a0 characteristicType:(id)a1 valueFormatBlock:(id /* block */)a2;
+ (id)standardCharacteristicTypes;
+ (id)_setupCharacteristicStateItemForCharacteristic:(id)a0 valueSource:(id)a1 serviceType:(id)a2;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)items;
- (id)invalidationReasons;
- (id)initWithValueSource:(id)a0 service:(id)a1;
- (id)initWithValueSource:(id)a0 accessory:(id)a1 service:(id)a2;
- (id)_reloadCharacteristicStateItems;
- (id)_reloadBatteryItems;
- (id)initWithValueSource:(id)a0 accessory:(id)a1;
- (id /* block */)characteristicStateItemComparator;

@end
