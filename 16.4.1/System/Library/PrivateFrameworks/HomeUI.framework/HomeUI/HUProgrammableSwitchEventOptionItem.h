@class HMCharacteristic;
@protocol HFCharacteristicValueSource;

@interface HUProgrammableSwitchEventOptionItem : HUCharacteristicEventOptionItem

@property (retain, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (readonly, nonatomic) HMCharacteristic *characteristic;

+ (id)_buildOutTriggerEditorOptionsForCharacteristic:(id)a0 triggerValue:(id)a1 latestResults:(id)a2;
+ (id)_longformTitleForCharacteristic:(id)a0 latestResults:(id)a1;
+ (id)_sectionTitleForCharacteristic:(id)a0 latestResults:(id)a1;
+ (id)_shortformTitleForLatestResults:(id)a0;
+ (id)_triggerBuilderContextAwareTitleForCharacteristic:(id)a0 latestResults:(id)a1;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithCharacteristic:(id)a0 triggerValue:(id)a1 valueSource:(id)a2;
- (id)initWithCharacteristics:(id)a0 thresholdValueRange:(id)a1;
- (id)initWithCharacteristics:(id)a0 triggerValue:(id)a1;
- (id)initWithCharacteristics:(id)a0 triggerValueRange:(id)a1;

@end
