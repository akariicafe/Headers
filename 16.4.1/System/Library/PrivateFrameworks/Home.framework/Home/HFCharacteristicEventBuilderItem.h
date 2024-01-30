@class NSSet;

@interface HFCharacteristicEventBuilderItem : HFEventBuilderItem

@property (readonly, nonatomic) NSSet *characteristics;

- (id)_subclass_updateWithOptions:(id)a0;
- (id)setCharacteristics:(id)a0 triggerValue:(id)a1;
- (BOOL)wouldFireForCharacteristic:(id)a0 value:(id)a1;
- (id)_characteristicEventBuilderForCharacteristic:(id)a0 triggerValue:(id)a1;

@end
