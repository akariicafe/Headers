@class NSSet;

@interface HFCharacteristicTriggerBuilderInterface : HFEventTriggerBuilderInterface

@property (readonly, nonatomic) NSSet *characteristics;

- (void)setCharacteristic:(id)a0 triggerValue:(id)a1;
- (BOOL)wouldFireForCharacteristic:(id)a0 value:(id)a1;
- (void)removeCharacteristic:(id)a0;
- (void)removeAllCharacteristics;
- (void)setCharacteristic:(id)a0 triggerValueRange:(id)a1;
- (id)thresholdValueForCharacteristic:(id)a0 thresholdValueRange:(id)a1;
- (id)triggerValueForCharacteristic:(id)a0;

@end
