@class HMAccessory;

@interface HFAccessoryInfoItem : HFItem

@property (readonly, nonatomic) HMAccessory *accessory;
@property (readonly, nonatomic) unsigned long long infoType;

+ (id)localizedStringForCharacteristic:(id)a0;

- (id)init;
- (id)initWithAccessory:(id)a0 infoType:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;

@end
